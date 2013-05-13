//
//  HKCircularProgressLayer.h
//  HKCircularProgressView
//
//  Copyright (c) 2012-2013, Panos Baroudjian.
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice, this
//  list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice,
//  this list of conditions and the following disclaimer in the documentation
//  and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
//  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
//  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
//  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
//  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
//  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//  POSSIBILITY OF SUCH DAMAGE.

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@protocol HKCircularProgressEndPointDrawer <NSObject>

- (void)drawEndPointInContext:(CGContextRef)ctx
                   withCenter:(CGPoint)center
                    andRadius:(CGFloat)radius
               andInnerRadius:(CGFloat)innerRadius
                      atAngle:(CGFloat)angle
                    clockwise:(int)clockwise;

@end

@interface HKCircularProgressEndPointFlat : NSObject<HKCircularProgressEndPointDrawer>

@end

@interface HKCircularProgressEndPointRound : NSObject<HKCircularProgressEndPointDrawer>

@end

@interface HKCircularProgressEndPointSpike : NSObject<HKCircularProgressEndPointDrawer>

@end

@interface HKCircularProgressLayer : CALayer

@property (nonatomic, strong) UIColor                           *progressTintColor;
@property (nonatomic, strong) UIColor                           *trackTintColor;
@property (nonatomic, strong) UIColor                           *outlineTintColor;
@property (nonatomic) CGFloat                           outlineWidth;
@property (nonatomic) CFTimeInterval                    animationDuration;
@property (nonatomic) float                             fillRadius;
@property (nonatomic) float                             startAngle;
@property (nonatomic) BOOL                              drawFullTrack;
@property (nonatomic, strong) id<HKCircularProgressEndPointDrawer> endPoint;

@property (nonatomic) float             step;
@property (nonatomic) float             max;
@property (nonatomic) float             current;

@end

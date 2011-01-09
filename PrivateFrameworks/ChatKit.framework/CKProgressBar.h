/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIImageView;



@interface CKProgressBar : UIView 
{
    UIImageView *_well;
    UIImageView *_fill;
    float _progressValue;
}

@property float progressValue; /* unknown property attribute: V_progressValue */

+ (float)defaultHeight;
+ (float)_minFillWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setProgressValue:(float)arg1;
- (void)_setupFillFrame;
- (float)progressValue;

@end
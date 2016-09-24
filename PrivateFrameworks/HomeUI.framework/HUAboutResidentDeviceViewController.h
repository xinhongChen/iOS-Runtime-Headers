/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAboutResidentDeviceViewController : UIViewController {
    UIImageView * _atvImageView;
    UILabel * _atvTextLabel;
    NSArray * _constraints;
    <HUAboutResidentDeviceViewControllerDelegate> * _delegate;
    UIImageView * _iPadImageView;
    UILabel * _iPadTextLabel;
    HUGridLayoutOptions * _layoutOptions;
    UIScrollView * _scrollView;
    UIView * _statusBarBackgroundView;
    unsigned int  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIImageView *atvImageView;
@property (nonatomic, retain) UILabel *atvTextLabel;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic) <HUAboutResidentDeviceViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIImageView *iPadImageView;
@property (nonatomic, retain) UILabel *iPadTextLabel;
@property (nonatomic, retain) HUGridLayoutOptions *layoutOptions;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) UIView *statusBarBackgroundView;
@property (nonatomic, readonly) unsigned int style;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;

+ (float)atvImageToTextBaselineConstantForViewSizeSubclass:(int)arg1;
+ (float)atvTextBaselineToiPadImageConstant;
+ (float)iPadImageToTextBaselineConstantForViewSizeSubclass:(int)arg1;
+ (float)scrollViewTopToATVImageConstant;
+ (float)subtitleBaselineToATVImageConstant;
+ (float)titleToSubtitleBaselineConstant;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)_createSubviews;
- (id)_defaultLayoutOptionsForViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_done:(id)arg1;
- (void)_setNavigationBarVisibility;
- (id)atvImageView;
- (id)atvTextLabel;
- (id)constraints;
- (id)delegate;
- (id)iPadImageView;
- (id)iPadTextLabel;
- (id)init;
- (id)initWithStyle:(unsigned int)arg1;
- (id)layoutOptions;
- (id)scrollView;
- (void)setAtvImageView:(id)arg1;
- (void)setAtvTextLabel:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIPadImageView:(id)arg1;
- (void)setIPadTextLabel:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setStatusBarBackgroundView:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)statusBarBackgroundView;
- (unsigned int)style;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)updateViewsAndConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
@interface MMSightCameraAspectRatioOption : NSObject <MMSightCameraOptionProtocol>
{
    long long _currentType; // +0x8
    UIView * _topMaskView; // +0x10
    UIView * _bottomMaskView; // +0x18
    UIView * _backGroundMaskView; // +0x20
    id <MMSightCameraAspectRatioOptionDelegate> _delegate; // +0x28
    WCElasticLayoutView * _elasticLayoutView; // +0x30
    MMUIButton * _iconButton; // +0x38
    MMUIButton * _ratioButton_1_1; // +0x40
    MMUIButton * _ratioButton_4_3; // +0x48
    MMUIButton * _ratioButton_16_9; // +0x50
    long long _currentOrientation; // +0x58
    CGRect _containerFrame; // +0x60
}
+ (id)aspectRatioTitleWithType:(long long)arg1;
- (id)initWithContainerFrame:(CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (void)_onClickIconView;
- (void)_onClickRatioButton_1_1;
- (void)_onClickRatioButton_4_3;
- (void)_onClickRatioButton_16_9;
- (void)_onAspectRatioTypeChangedTo:(long long)arg1;
- (void)_transformViewsToIdentityAnimated:(BOOL)arg1;
- (void)_transformViewsToOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)_updateIconButtonWithTitle:(id)arg1 accessibilityLabel:(id)arg2;
- (void)_initViews;
- (void)_initMaskView;
- (long long)currentType;
- (void)setCurrentType:(long long)arg1;
- (id)topMaskView;
- (void)setTopMaskView:(id)arg1;
- (id)bottomMaskView;
- (void)setBottomMaskView:(id)arg1;
- (id)backGroundMaskView;
- (void)setBackGroundMaskView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)elasticLayoutView;
- (void)setElasticLayoutView:(id)arg1;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (id)ratioButton_1_1;
- (void)setRatioButton_1_1:(id)arg1;
- (id)ratioButton_4_3;
- (void)setRatioButton_4_3:(id)arg1;
- (id)ratioButton_16_9;
- (void)setRatioButton_16_9:(id)arg1;
- (long long)currentOrientation;
- (void)setCurrentOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

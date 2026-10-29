@interface MMSightCameraFlashlightOption : NSObject <MMSightCameraOptionProtocol>
{
    MMUIButton * _legacyIconButton; // +0x8
    MMUIButton * _topBarButton; // +0x10
    id <MMSightCameraFlashlightOptionDelegate> _delegate; // +0x18
    WCElasticLayoutView * _elasticLayoutView; // +0x20
    MMUIButton * _btnFlashlightIcon; // +0x28
    CGRect _containerFrame; // +0x30
}
- (id)initWithContainerFrame:(CGRect)arg1;
- (id)initLegacyWithContainerFrame:(CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (void)_onClickIconView;
- (void)onClickTopBarBtn:(id)arg1;
- (void)_onFlashlightSelectionChanged;
- (void)_initViews;
- (void)_initLegacyIconButton;
- (id)legacyIconButton;
- (void)setLegacyIconButton:(id)arg1;
- (id)topBarButton;
- (void)setTopBarButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)elasticLayoutView;
- (void)setElasticLayoutView:(id)arg1;
- (id)btnFlashlightIcon;
- (void)setBtnFlashlightIcon:(id)arg1;
- (void).cxx_destruct;
@end

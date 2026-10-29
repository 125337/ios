@interface MMSightCameraProModeOption : NSObject <UIScrollViewDelegate, WCElasticLayoutViewDelegate, MMSightCameraOptionProtocol>
{
    MMUIButton * _legacyIconButton; // +0x8
    id <MMSightCameraProModeOptionDelegate> _delegate; // +0x10
    WCElasticLayoutView * _elasticLayoutView; // +0x18
    UIScrollView * _svProModeOptionList; // +0x20
    CGRect _containerFrame; // +0x28
}
- (id)initWithContainerFrame:(CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (void)updateProModeOptionList:(id)arg1;
- (void)resetProModeOptionList;
- (void)manualTriggerClickSwitchButton;
- (void)elasticLayoutView:(id)arg1 willShrinkWithAnimated:(BOOL)arg2;
- (void)elasticLayoutView:(id)arg1 didShrinkWithAnimated:(BOOL)arg2;
- (void)elasticLayoutView:(id)arg1 willExpandWithAnimated:(BOOL)arg2;
- (void)elasticLayoutView:(id)arg1 didExpandWithAnimated:(BOOL)arg2;
- (void)_onClickSwitchButton;
- (void)_changeProModeIconBtnSelection:(BOOL)arg1;
- (void)_resetAllOptionViewIfNeeded;
- (void)_setAlpha:(double)arg1 forView:(id)arg2 animated:(BOOL)arg3 withCompletion:(id /* block */)arg4;
- (void)_initLegacyIconButton;
- (void)_initViews;
- (id)legacyIconButton;
- (void)setLegacyIconButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)elasticLayoutView;
- (void)setElasticLayoutView:(id)arg1;
- (id)svProModeOptionList;
- (void)setSvProModeOptionList:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMSightCameraNightModeOption : NSObject <MMSightCameraOptionProtocol>
{
    id <MMSightCameraNightModeOptionDelegate> _delegate; // +0x8
    WCElasticLayoutView * _elasticLayoutView; // +0x10
    MMUIButton * _iconButton; // +0x18
    CGRect _containerFrame; // +0x20
}
- (id)initWithContainerFrame:(CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (void)_onClickIconView;
- (void)_changeNightModeIconViewSelection:(BOOL)arg1;
- (void)_initViews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)elasticLayoutView;
- (void)setElasticLayoutView:(id)arg1;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (void).cxx_destruct;
@end


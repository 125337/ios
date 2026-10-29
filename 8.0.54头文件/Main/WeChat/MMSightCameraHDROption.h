@interface MMSightCameraHDROption : NSObject <MMSightCameraOptionProtocol>
{
    MMUIButton * _topBarButton; // +0x8
    id <MMSightCameraHDROptionDelegate> _delegate; // +0x10
    WCElasticLayoutView * _elasticLayoutView; // +0x18
    MMUIButton * _iconButton; // +0x20
    CGRect _containerFrame; // +0x28
}
- (id)initWithContainerFrame:(CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (void)_onClickIconView;
- (void)onClickTopBarBtn:(id)arg1;
- (void)_changeIconViewSelection:(BOOL)arg1;
- (void)_initViews;
- (id)topBarButton;
- (void)setTopBarButton:(id)arg1;
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


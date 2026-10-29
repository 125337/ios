@interface MMSightCameraZoomerOption : NSObject <MMSightCameraOptionProtocol>
{
    id <MMSightCameraZoomerOptionDelegate> _delegate; // +0x8
    MMUIButton * _iconButton; // +0x10
    WCElasticLayoutView * _elasticLayoutView; // +0x18
    MMCameraZoomFactorInfo * _zoomFactorInfo; // +0x20
    NSArray * _zoomerBtnList; // +0x28
    CGRect _containerFrame; // +0x30
}
- (id)initWithContainerFrame:(CGRect)arg1;
- (BOOL)active;
- (void)setActive:(BOOL)arg1;
- (id)optionView;
- (void)rotateToOrientation:(long long)arg1;
- (void)updateCurrentZoomFactor:(double)arg1;
- (void)relayoutSelectedZoomerBtnAtCenter;
- (void)_loadCameraZoomFactorInfo;
- (id)_convertFactorTitleFromCameraFactor:(double)arg1;
- (double)visualFactorFromCameraFactor:(double)arg1;
- (void)_onClickIconButton;
- (void)_onIconButtonChangedSelectionTo:(BOOL)arg1;
- (void)_onClickZoomFactorBtn:(id)arg1;
- (void)_onZoomerBtn:(id)arg1 changedSelectionTo:(BOOL)arg2 manually:(BOOL)arg3;
- (void)_relayoutZoomerBtnAtCenter:(id)arg1;
- (void)_initViews;
- (id)_createZoomerBtnWithTitle:(id)arg1;
- (void)_updateIconButtonTitle:(id)arg1;
- (void)_updateTitle:(id)arg1 forZoomerBtn:(id)arg2;
- (id)zoomFactorInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (CGRect)containerFrame;
- (void)setContainerFrame:(CGRect)arg1;
- (id)elasticLayoutView;
- (void)setElasticLayoutView:(id)arg1;
- (void)setZoomFactorInfo:(id)arg1;
- (id)zoomerBtnList;
- (void)setZoomerBtnList:(id)arg1;
- (void).cxx_destruct;
@end


@interface MMFinderLiveCustomPIPMinimizeView : UIView <MMLiveCustomRenderPIPViewProtocol>
{
    id /* block */ _getIndicatorStateBlock; // +0x8
    id <MMFinderLivePIPMinimizeLogicControllerDelegate> _logicControllerDelegate; // +0x10
    id <MMFinderLivePIPMinimizeLogicDelegate> _logicDelegate; // +0x18
    MMLiveTaskId * _liveTaskId; // +0x20
    MMFinderLiveCustomPIPMinimizeIndicatorContainerView * _indicatorContainerView; // +0x28
    UIView<MMFinderLivePIPMinimizeDisplayViewProtocol> * _displayContentView; // +0x30
}
- (id)initWithTaskId:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutDisplayContentView;
- (void)layoutIndicatorContainerView;
- (void)attachContentViewToMinimizeContainer;
- (void)dismissLiveViewFromMinimizeContainer;
- (void)updateDisplayContentView:(id)arg1;
- (void)displayIndicators;
- (void)hideIndicators;
- (void)onViewWillAttachToPIPContainer;
- (void)onViewDidDeAttachFromPIPContainer;
- (void)setIndicatorState:(unsigned long long)arg1;
- (id)getDisplayingCustomContentView;
- (id)getDisplayingContentView;
- (id /* block */)getIndicatorStateBlock;
- (void)setGetIndicatorStateBlock:(id /* block */)arg1;
- (id)logicControllerDelegate;
- (void)setLogicControllerDelegate:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)indicatorContainerView;
- (void)setIndicatorContainerView:(id)arg1;
- (id)displayContentView;
- (void)setDisplayContentView:(id)arg1;
- (void).cxx_destruct;
@end

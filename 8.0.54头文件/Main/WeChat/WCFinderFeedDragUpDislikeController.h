@interface WCFinderFeedDragUpDislikeController : NSObject <WCFinderFeedDragUpDislikeViewModelDelegate>
{
    BOOL _ignoreShock; // +0x8
    BOOL _canShowPanel; // +0x9
    BOOL _isPanelViewAnimating; // +0xa
    BOOL _isPanInScreenTopArea; // +0xb
    id <WCFinderFeedDragUpDislikeControllerDelegate> _delegate; // +0x10
    WCFinderNotInterestedPanelView * _panelView; // +0x18
    UIView * _navigationControllerView; // +0x20
    UIScrollView * _scrollView; // +0x28
    WCFinderFeedDragUpDislikeViewModel * _viewModel; // +0x30
    WCFinderFeedContentVM * _contentVMAtPanStart; // +0x38
}
- (id)initWithNavigationControllerView:(id)arg1 scrollView:(id)arg2;
- (void)setup;
- (void)destory;
- (void)_addObserve;
- (BOOL)isCurrentPanInNotLikeView;
- (BOOL)panGesture:(id)arg1 isInView:(id)arg2;
- (void)_removeObserve;
- (void)_tryPlayShock;
- (void)drapUpVMShouldShowPanel:(id)arg1;
- (id)genReportDict;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)navigationControllerView;
- (void)setNavigationControllerView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)ignoreShock;
- (void)setIgnoreShock:(BOOL)arg1;
- (BOOL)canShowPanel;
- (void)setCanShowPanel:(BOOL)arg1;
- (BOOL)isPanelViewAnimating;
- (void)setIsPanelViewAnimating:(BOOL)arg1;
- (BOOL)isPanInScreenTopArea;
- (void)setIsPanInScreenTopArea:(BOOL)arg1;
- (id)contentVMAtPanStart;
- (void)setContentVMAtPanStart:(id)arg1;
- (void).cxx_destruct;
@end


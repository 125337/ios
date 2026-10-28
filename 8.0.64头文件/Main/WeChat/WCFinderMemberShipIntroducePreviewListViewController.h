@interface WCFinderMemberShipIntroducePreviewListViewController : MMUIHalfScreenViewController <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderMemberShipPreviewListViewModelDelegate, WCFinderStreamProfileDragBarViewDelegate>
{
    id <WCFinderMemberShipIntroducePreviewListViewControllerDelegate> _previewDelegate; // +0x70
    NSString * _finderUsername; // +0x78
    unsigned long long _feedPageType; // +0x80
    WCFinderFeedFlowView * _feedFlowView; // +0x88
    WCFinderMemberShipPreviewListViewModel * _viewModel; // +0x90
    UILabel * _titleLabel; // +0x98
    UILabel * _subTitleLabel; // +0xa0
    WCFinderMaskButton * _confirmButton; // +0xa8
    NSString * _titleStr; // +0xb0
    NSString * _subTitleStr; // +0xb8
    unsigned long long _entranceSource; // +0xc0
    WCFinderStreamProfileDragBarView * _dragBarView; // +0xc8
    UIView * _topViewContainer; // +0xd0
}
- (id)initWithFinderUsername:(id)arg1 feedPageType:(unsigned long long)arg2 entranceSource:(unsigned long long)arg3 titleStr:(id)arg4 subTitleStr:(id)arg5 lastBuffer:(id)arg6 collectionTopicId:(unsigned long long)arg7;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupSubviews;
- (void)bindPageReport;
- (id)feedFlowView;
- (id)dragBarView;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)finderMemberShipPreviewListViewNoMoreData;
- (void)finderMemberShipPreviewListViewFetchListSuc;
- (void)finderMemberShipPreviewListViewFetchListFail;
- (double)getMaxHalfScreenHeight;
- (void)onClickConfirm;
- (void)dragBarViewWillBegin:(id)arg1;
- (void)dragBarViewDidEnd:(id)arg1 slideToClose:(BOOL)arg2;
- (double)dragBarViewExpandMinHeight:(id)arg1;
- (double)dragBarViewExpandMaxHeight:(id)arg1;
- (id)previewDelegate;
- (void)setPreviewDelegate:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)feedPageType;
- (void)setFeedPageType:(unsigned long long)arg1;
- (void)setFeedFlowView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)titleStr;
- (void)setTitleStr:(id)arg1;
- (id)subTitleStr;
- (void)setSubTitleStr:(id)arg1;
- (unsigned long long)entranceSource;
- (void)setEntranceSource:(unsigned long long)arg1;
- (void)setDragBarView:(id)arg1;
- (id)topViewContainer;
- (void)setTopViewContainer:(id)arg1;
- (void).cxx_destruct;
@end

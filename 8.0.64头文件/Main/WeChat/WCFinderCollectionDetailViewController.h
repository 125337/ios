@interface WCFinderCollectionDetailViewController : MMUIViewController <UICollectionViewDelegate, WCFinderCollectionDetailViewModelDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, MMScrollActionSheetDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderCollectionDetailViewModel * _viewModel; // +0x70
    UICollectionView * _collectionView; // +0x78
    UICollectionViewDiffableDataSource * _dataSource; // +0x80
    MMScrollActionSheet * _shareActionSheet; // +0x88
    ForwardMessageLogicController * _forwardController; // +0x90
}
- (id)initWithShareItem:(id)arg1;
- (id)initWithCollectionInfo:(id)arg1 authorUsername:(id)arg2;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (long long)preferredStatusBarStyle;
- (void)updateNavigationBar;
- (void)_setupCollectionView;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_pushToAuthorProfile;
- (void)_pushToLegalH5Page;
- (void)_onBackButtonClicked:(id)arg1;
- (void)_onMoreButtonClicked:(id)arg1;
- (void)_favoritesCollection;
- (BOOL)_showErrorMessageIfNeed;
- (void)_showForwardActionSheet;
- (void)_pushToComplaintWebview;
- (void)_shareToChat:(id)arg1;
- (void)_shareToMoment;
- (id)_forwardMessage;
- (id)_momentItem;
- (id)_shareItem;
- (id)_uploadTask;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)viewModel:(id)arg1 generatingEvent:(unsigned long long)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (void)_reportShareSheetItemEvent:(id)arg1 viewID:(id)arg2;
- (void)_reportForwardWithController:(id)arg1 result:(unsigned long long)arg2;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)shareActionSheet;
- (void)setShareActionSheet:(id)arg1;
- (id)forwardController;
- (void)setForwardController:(id)arg1;
- (void).cxx_destruct;
@end

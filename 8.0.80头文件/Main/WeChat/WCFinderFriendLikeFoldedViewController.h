@interface WCFinderFriendLikeFoldedViewController : WCFinderHighEntropyBaseViewController <WCFinderFriendLikeFoldedViewModelDelegate>
{
    WCFinderFriendHighEntropyViewController * _parentHighEntropyVC; // +0x70
    WCFinderFullFeedCommonViewModel * _parentFeedVM; // +0x78
    FinderObjectPlaceHolderInfo * _placeHolderInfo; // +0x80
    WCFinderFriendLikeFoldedViewModel * _viewModel; // +0x88
    UIView * _navigationBackgroundView; // +0x90
    UIView * _titleContainerView; // +0x98
    WCFinderSizingRichTextView * _titleWordingView; // +0xa0
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)useTransparentNavibar;
- (long long)preferredStatusBarStyle;
- (id)navigationItemColor;
- (void)ensureNavigationBackgroundView;
- (void)updateNavigationBackgroundFrame;
- (void)updateNavigationBarStyle;
- (void)updateNavigationTitleViewWithColor:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)refreshHeadOnScrolltoTop;
- (void)onSubStreamDataChanged;
- (void)onSubStreamDataAppendFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)onSubStreamFetchSuccess;
- (void)onSubStreamFetchError;
- (void)onSubStreamNoMoreData;
- (int)feedViewControllerScene;
- (unsigned long long)highEntropySectionNums;
- (id)highEntropyContentVMAtSection:(long long)arg1;
- (id)highEntropyCommonViewModel;
- (id)highEntropyRecommendFeedVM;
- (BOOL)highEntropyCanFetchNextPage;
- (BOOL)highEntropyNoMoreData;
- (void)highEntropyDidClickFoldedPlaceholder:(id)arg1;
- (void)highEntropyDidDislikeContentVM:(id)arg1;
- (void)onFinderFeedDislikeConfirmed:(id)arg1;
- (void)onFinderFeedDislikeCancelled:(id)arg1;
- (void)resetFooterViewNormalIfNeeded;
- (void)showFooterNoMoreData;
- (BOOL)shouldContinueEmptySubStreamWithTopLoading;
- (void)continueEmptySubStreamWithTopLoading;
- (void)triggerFooterLoadingIfNeeded;
- (void)stopSubStreamHeaderLoadingWithRefreshState:(unsigned long long)arg1;
- (id)parentHighEntropyVC;
- (void)setParentHighEntropyVC:(id)arg1;
- (id)parentFeedVM;
- (void)setParentFeedVM:(id)arg1;
- (id)placeHolderInfo;
- (void)setPlaceHolderInfo:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)navigationBackgroundView;
- (void)setNavigationBackgroundView:(id)arg1;
- (id)titleContainerView;
- (void)setTitleContainerView:(id)arg1;
- (id)titleWordingView;
- (void)setTitleWordingView:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveVoteHistoryDetailViewController : MMUILandscapeSheetViewController
{
    FinderLiveVotingInfo * _votingInfo; // +0x68
    UIScrollView * _scrollView; // +0x70
    CGRect _lastLayoutRect; // +0x78
}
- (id)initWithVotingInfo:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)initNavBar;
- (void)onBackButtonClicked;
- (id)navigationBarBackgroundColor;
- (void)rebuildContentViews;
- (id)votingInfo;
- (void)setVotingInfo:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (CGRect)lastLayoutRect;
- (void)setLastLayoutRect:(CGRect)arg1;
- (void).cxx_destruct;
@end


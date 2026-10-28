@interface WCFinderCoverHoriPreviewViewController : MMUIViewController <WCFinderHoriPreviewCardViewDelegate, WCFinderCoverEditViewControllerDelegate>
{
    BOOL _hasChooseCoverUrl; // +0x70
    BOOL _alreadyShowReuseAlert; // +0x71
    id <WCFinderCoverHoriPreviewViewControllerDelegate> _delegate; // +0x78
    WCFinderPostSessionModel * _postSession; // +0x80
    UIScrollView * _scrollView; // +0x88
    WCFinderHoriPreviewCardView * _personalCardView; // +0x90
    WCFinderHoriPreviewCardView * _shareCardView; // +0x98
    WCFinderCoverEditViewController * _personalCoverVC; // +0xa0
    WCFinderCoverEditViewController * _shareCoverVC; // +0xa8
}
- (id)initWithPostSession:(id)arg1;
- (void)viewDidLoad;
- (void)setupNaviContent;
- (void)setupCardViews;
- (void)onClickPreviewBtn;
- (id)personalCardView;
- (id)shareCardView;
- (void)setupCoverVCByStyle:(unsigned long long)arg1;
- (id)getCurrentCoverVCByStyle:(unsigned long long)arg1;
- (void)onHoriPreviewCardClickEditButton:(unsigned long long)arg1;
- (BOOL)_shouldRestartCoverEditWithStyle:(unsigned long long)arg1;
- (BOOL)_shouldRestartCoverEditWithCoverVC:(id)arg1;
- (void)_updateVideoPreviewViewWithCoverVC:(id)arg1 style:(unsigned long long)arg2;
- (void)onCoverEditDidAppear:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)setPersonalCardView:(id)arg1;
- (void)setShareCardView:(id)arg1;
- (id)personalCoverVC;
- (void)setPersonalCoverVC:(id)arg1;
- (id)shareCoverVC;
- (void)setShareCoverVC:(id)arg1;
- (BOOL)hasChooseCoverUrl;
- (void)setHasChooseCoverUrl:(BOOL)arg1;
- (BOOL)alreadyShowReuseAlert;
- (void)setAlreadyShowReuseAlert:(BOOL)arg1;
- (void).cxx_destruct;
@end

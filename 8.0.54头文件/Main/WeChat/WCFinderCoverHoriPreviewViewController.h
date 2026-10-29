@interface WCFinderCoverHoriPreviewViewController : MMUIViewController <WCFinderHoriPreviewCardViewDelegate, WCFinderCoverEditViewControllerDelegate>
{
    BOOL _xlabShowPreviewBtn; // +0x68
    BOOL _hasChooseCoverUrl; // +0x69
    BOOL _alreadyShowReuseAlert; // +0x6a
    id <WCFinderCoverHoriPreviewViewControllerDelegate> _delegate; // +0x70
    WCFinderPostSessionModel * _postSession; // +0x78
    UIScrollView * _scrollView; // +0x80
    WCFinderHoriPreviewCardView * _personalCardView; // +0x88
    WCFinderHoriPreviewCardView * _shareCardView; // +0x90
    WCFinderCoverEditViewController * _personalCoverVC; // +0x98
    WCFinderCoverEditViewController * _shareCoverVC; // +0xa0
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
- (BOOL)xlabShowPreviewBtn;
- (void)setXlabShowPreviewBtn:(BOOL)arg1;
- (BOOL)hasChooseCoverUrl;
- (void)setHasChooseCoverUrl:(BOOL)arg1;
- (BOOL)alreadyShowReuseAlert;
- (void)setAlreadyShowReuseAlert:(BOOL)arg1;
- (void).cxx_destruct;
@end


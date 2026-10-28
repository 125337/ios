@interface MMFinderCreateLiveSpamCheckWarnPageViewController : MMCPUIViewController <MMWebViewDelegate, ILinkEventExt>
{
    BOOL _hasVerified; // +0x70
    int _warnType; // +0x74
    id <MMFinderCreateLiveSpamCheckWarnPageVCDelegate> _delegate; // +0x78
    MMFinderLiveTaskId * _taskId; // +0x80
    MMWebImageView * _logoView; // +0x88
    MMUILabel * _titleView; // +0x90
    RichTextView * _contentRichTextView; // +0x98
    UIScrollView * _spamScrollView; // +0xa0
    FinderCreateLiveWarnPageCommon * _warnPage; // +0xa8
    UIButton * _actionButton; // +0xb0
    RichTextView * _appealLinkTV; // +0xb8
    MMFinderCreateLiveSpamCheckReportSession * _reportSession; // +0xc0
}
- (id)initWithLiveTaskId:(id)arg1 warnPage:(id)arg2 warnType:(int)arg3;
- (void)viewDidLoad;
- (void)reloadData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)reportExposeElement;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (long long)getCurrentOrientation;
- (void)dealloc;
- (void)checkSetIsVerifying:(BOOL)arg1;
- (void)layoutUI;
- (id)spamScrollView;
- (id)logoView;
- (id)titleView;
- (id)contentRichTextView;
- (id)actionButton;
- (id)appealLinkTV;
- (int)commentSceneWithWarnType:(int)arg1;
- (void)registerYReportSdk;
- (void)onActionButtonClicked;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (void)webViewReturn:(id)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)onFaceVerifySucceeded;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setLogoView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setContentRichTextView:(id)arg1;
- (void)setSpamScrollView:(id)arg1;
- (id)warnPage;
- (void)setWarnPage:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setAppealLinkTV:(id)arg1;
- (int)warnType;
- (void)setWarnType:(int)arg1;
- (BOOL)hasVerified;
- (void)setHasVerified:(BOOL)arg1;
- (id)reportSession;
- (void)setReportSession:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveFeedCommitFeedbackReasonSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, WCFinderFeedContentVMExt, MMPageSheetBottomViewDelegate>
{
    BOOL _isClosing; // +0x8
    int _commentScene; // +0xc
    int _satisfactionQuestSubType; // +0x10
    UIView * _containerView; // +0x18
    UITableView * _tableView; // +0x20
    WCFinderAnimationLoadingView * _loadingView; // +0x28
    UIButton * _retryBtn; // +0x30
    WCFinderFeedContentVM * _contentVM; // +0x38
    long long _liveScene; // +0x40
    unsigned long long _scene; // +0x48
    NSMutableArray * _selectReasons; // +0x50
}
- (id)initWithScene:(unsigned long long)arg1 contentVM:(id)arg2 commentScene:(int)arg3 liveScene:(long long)arg4 satisfactionQuestSubType:(int)arg5;
- (void)initPageSheetConfig;
- (void)layoutSubviews;
- (void)initViews;
- (void)reload;
- (id)reason:(unsigned long long)arg1;
- (void)onRetry;
- (void)onCommit;
- (unsigned long long)dislikePanelSceneFrom:(long long)arg1;
- (long long)reasonCount;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetWillAppear;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onFeedContentFeedbackReasonChanged:(id)arg1;
- (void)onFeedContentFeedbackReasonFetchFail:(id)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestUpdate:(id)arg1;
- (void)onFeedContentFeedbackSatisfactionQuestFetchFail:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)retryBtn;
- (void)setRetryBtn:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (long long)liveScene;
- (void)setLiveScene:(long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (int)satisfactionQuestSubType;
- (void)setSatisfactionQuestSubType:(int)arg1;
- (BOOL)isClosing;
- (void)setIsClosing:(BOOL)arg1;
- (id)selectReasons;
- (void)setSelectReasons:(id)arg1;
- (void).cxx_destruct;
@end

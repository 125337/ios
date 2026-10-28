@interface WCTopicSearchViewController : WSHalfScreenWebSearchBaseViewController <ForwardMessageLogicDelegate>
{
    BOOL _hasEndTranscationInVC; // +0x70
    id <WCTopicSearchViewControllerDelegate> _delegate; // +0x78
    WCTopicSearchContext * _context; // +0x80
    NSDictionary * _customInitedParams; // +0x88
    ForwardMessageLogicController * _forwardMessageLogicController; // +0x90
    WCTopicSearchActionLogic * _shareActionLogic; // +0x98
    GetSearchShareResponse_SearchShareContext * _shareContext; // +0xa0
}
- (id)initWithDelegate:(id)arg1 context:(id)arg2;
- (id)initWithQuery:(id)arg1 customInitedParams:(id)arg2;
- (id)stayTimeReporter;
- (id)initedUrlParams;
- (unsigned long long)searchScene;
- (id)defaultNavTitle;
- (void)onAppendSearchTagQuery:(id)arg1;
- (void)onSetSearchTagResult:(id)arg1;
- (id)getCurrentViewController;
- (void)doForwardMessageSended;
- (unsigned long long)localJSBizType;
- (void)onSearchVCAppearAction;
- (void)onSearchVCDisappearAction;
- (void)reportSearchVCAppearAction;
- (void)reportSearchVCCanceledAction;
- (void)reportSearchVCCompleteAction;
- (void)reportAppendInputQueryActionWithSessionId:(id)arg1 requestId:(id)arg2 searchId:(id)arg3;
- (void)reportShareMsgAction:(long long)arg1;
- (void)openDetailViewWithKeyword:(id)arg1 params:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)customInitedParams;
- (void)setCustomInitedParams:(id)arg1;
- (id)forwardMessageLogicController;
- (void)setForwardMessageLogicController:(id)arg1;
- (id)shareActionLogic;
- (void)setShareActionLogic:(id)arg1;
- (id)shareContext;
- (void)setShareContext:(id)arg1;
- (BOOL)hasEndTranscationInVC;
- (void)setHasEndTranscationInVC:(BOOL)arg1;
- (void).cxx_destruct;
@end

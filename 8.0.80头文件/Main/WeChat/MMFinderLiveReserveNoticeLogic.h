@interface MMFinderLiveReserveNoticeLogic : NSObject <WCActionSheetDelegate, WCCoinConsumeLogicDelegate, WCCoinBuyCoinLogicDelegate, MMWebPageSheetDelegate>
{
    BOOL _suppressSuccessToasts; // +0x8
    BOOL _needHalfScreen; // +0x9
    BOOL _nativeOperationInFlight; // +0xa
    unsigned int _scene; // +0xc
    int _reportScene; // +0x10
    MMFinderLiveFeedNoticeDetailView * _feedNoticeDetailView; // +0x18
    FinderLiveNoticeInfo * _noticeInfo; // +0x20
    long long _noticeReportSourceScene; // +0x28
    WCFinderLiveAudienceNoticeReporter * _noticeReporter; // +0x30
    MMFinderLiveNoticeDetailPayView * _noticePayView; // +0x38
    MMFinderLivePurchaseConcertTicketView * _purchaseConcertTicketView; // +0x40
    MMUIViewController * _showToastViewController; // +0x48
    NSData * _liveCookies; // +0x50
    MMFinderLiveTaskId * _taskId; // +0x58
    NSString * _sessionBuffer; // +0x60
    id /* block */ _showTicketBlock; // +0x68
    id /* block */ _successBlock; // +0x70
    id /* block */ _failBlock; // +0x78
    NSString * _adapterUrl; // +0x80
    MMPageSheetAdapter * _rootPageSheet; // +0x88
    MMWebViewController * _webVC; // +0x90
    MMUIViewController * _vc; // +0x98
    WCFinderContact * _contact; // +0xa0
    WCLiveActionSheet * _actionSheet; // +0xa8
    WCFinderBaseCgi * _reserveNoticeCGI; // +0xb0
}
+ (BOOL)isNoticeNeedPayment:(id)arg1;
+ (BOOL)hasNoticePay:(id)arg1;
+ (BOOL)isConcert:(id)arg1;
+ (BOOL)canPay:(id)arg1;
- (id)noticeReporter;
- (void)reportNoticeDetailExposeIfNeeded;
- (void)reportNoticeReserveActionIfNeeded:(unsigned long long)arg1;
- (void)completeNativeOperation;
- (void)startReserveProcess:(id)arg1 fromVC:(id)arg2 contact:(id)arg3 reportScene:(int)arg4 scene:(unsigned int)arg5 completionBlock:(id /* block */)arg6;
- (void)onClickFreeLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)onClickNeedPayLiveNotice:(id)arg1 isFromDetailView:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)hadndleBuySuccess:(id)arg1 isFromDetailView:(BOOL)arg2;
- (void)showConcertTicketConfirmed:(id)arg1;
- (void)handleSubscribeAction:(BOOL)arg1 isFromDetailView:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)showActionSheetForUnReserveWithCompletionBlock:(id /* block */)arg1;
- (void)subscribeNotice:(BOOL)arg1 isFromDetailView:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)requestLiveGetPaymentItems:(id)arg1 needHalfScreen:(BOOL)arg2 isTicket:(BOOL)arg3 showToastViewController:(id)arg4 liveCookies:(id)arg5 taskId:(id)arg6 sessionBuffer:(id)arg7 showTicketBlock:(id /* block */)arg8 successBlock:(id /* block */)arg9 failBlock:(id /* block */)arg10;
- (void)showRequestLiveGetPaymentItemsLoading;
- (void)showTicketClick:(BOOL)arg1;
- (void)handleFailure:(int)arg1 errorMsg:(id)arg2;
- (void)showLiveNoticePayViewWithTiersViewModel:(id)arg1 needHalfScreen:(BOOL)arg2 isTicket:(BOOL)arg3;
- (void)handleLiveNoticePayViewWithTiersViewModel:(id)arg1 needHalfScreen:(BOOL)arg2 isTicket:(BOOL)arg3;
- (id)noticePayView;
- (void)starOrderWithTiersViewModel:(id)arg1;
- (void)consumeCoinWithProductId:(id)arg1 billNo:(id)arg2 respBuff:(id)arg3;
- (void)consumeDidSuccess:(id)arg1 result:(id)arg2;
- (void)consumeDidFail:(id)arg1 error:(id)arg2;
- (void)onCoinButtonClicked;
- (void)handleError;
- (id)purchaseConcertTicketView;
- (void)openWebPageSheetWithParams:(id)arg1 scene:(long long)arg2 showInView:(id)arg3;
- (id)preLoadConcertPageSheetWithParams:(id)arg1;
- (id)createWebPageSheetNavWithParams:(id)arg1 preload:(BOOL)arg2;
- (void)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 actionBlock:(id /* block */)arg6 unLikeBlock:(id /* block */)arg7;
- (void)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 showHideButton:(BOOL)arg6 reportScene:(int)arg7 actionBlock:(id /* block */)arg8 unLikeBlock:(id /* block */)arg9;
- (void)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 showHideButton:(BOOL)arg6 showColumnView:(BOOL)arg7 reportScene:(int)arg8 actionBlock:(id /* block */)arg9 unLikeBlock:(id /* block */)arg10;
- (void)exitShowLiveNoticeDetailIfNeeded;
- (void)updateShowingLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 scene:(long long)arg3;
- (void)refreshDetailView;
- (id)feedNoticeDetailView;
- (void)setFeedNoticeDetailView:(id)arg1;
- (BOOL)suppressSuccessToasts;
- (void)setSuppressSuccessToasts:(BOOL)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (long long)noticeReportSourceScene;
- (void)setNoticeReportSourceScene:(long long)arg1;
- (void)setNoticeReporter:(id)arg1;
- (void)setNoticePayView:(id)arg1;
- (void)setPurchaseConcertTicketView:(id)arg1;
- (BOOL)needHalfScreen;
- (void)setNeedHalfScreen:(BOOL)arg1;
- (id)showToastViewController;
- (void)setShowToastViewController:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id /* block */)showTicketBlock;
- (void)setShowTicketBlock:(id /* block */)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)adapterUrl;
- (void)setAdapterUrl:(id)arg1;
- (id)rootPageSheet;
- (void)setRootPageSheet:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)reserveNoticeCGI;
- (void)setReserveNoticeCGI:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (BOOL)nativeOperationInFlight;
- (void)setNativeOperationInFlight:(BOOL)arg1;
- (void).cxx_destruct;
@end

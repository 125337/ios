@interface MMFinderLiveBuyTicketHandle : NSObject <WCCoinConsumeLogicDelegate, WCCoinBuyCoinLogicDelegate, MMWebPageSheetDelegate>
{
    BOOL _showHideButton; // +0x8
    BOOL _needHalfScreen; // +0x9
    int _reportScene; // +0xc
    FinderLiveNoticeInfo * _noticeInfo; // +0x10
    MMFinderLiveNoticeDetailPayView * _noticePayView; // +0x18
    MMFinderLiveFeedNoticeDetailView * _feedNoticeDetailView; // +0x20
    MMFinderLivePurchaseConcertTicketView * _purchaseConcertTicketView; // +0x28
    WCFinderContact * _anchorContact; // +0x30
    MMUIViewController * _showToastViewController; // +0x38
    NSData * _liveCookies; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
    NSString * _sessionBuffer; // +0x50
    id /* block */ _showTicketBlock; // +0x58
    id /* block */ _successBlock; // +0x60
    id /* block */ _failBlock; // +0x68
    id /* block */ _actionBlock; // +0x70
    id /* block */ _receiveCouponBlock; // +0x78
    id /* block */ _unLikeBlock; // +0x80
    long long _scene; // +0x88
    NSString * _adapterUrl; // +0x90
    MMPageSheetAdapter * _rootPageSheet; // +0x98
    MMWebViewController * _webVC; // +0xa0
}
+ (BOOL)isNoticeNeedPayment:(id)arg1;
+ (BOOL)hasNoticePay:(id)arg1;
+ (BOOL)isConcert:(id)arg1;
+ (BOOL)canPay:(id)arg1;
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
- (void)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 actionBlock:(id /* block */)arg6 unLikeBlock:(id /* block */)arg7 receiveCouponBlock:(id /* block */)arg8;
- (void)showLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 showToastViewController:(id)arg3 scene:(long long)arg4 showInView:(id)arg5 showHideButton:(BOOL)arg6 reportScene:(int)arg7 actionBlock:(id /* block */)arg8 unLikeBlock:(id /* block */)arg9 receiveCouponBlock:(id /* block */)arg10;
- (void)exitShowLiveNoticeDetailIfNeeded:(BOOL)arg1;
- (void)updateShowingLiveNoticeDetail:(id)arg1 anchorContact:(id)arg2 scene:(long long)arg3;
- (void)refreshDetailView;
- (id)feedNoticeDetailView;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (void)setNoticePayView:(id)arg1;
- (void)setFeedNoticeDetailView:(id)arg1;
- (void)setPurchaseConcertTicketView:(id)arg1;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (BOOL)showHideButton;
- (void)setShowHideButton:(BOOL)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
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
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (id /* block */)receiveCouponBlock;
- (void)setReceiveCouponBlock:(id /* block */)arg1;
- (id /* block */)unLikeBlock;
- (void)setUnLikeBlock:(id /* block */)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)adapterUrl;
- (void)setAdapterUrl:(id)arg1;
- (id)rootPageSheet;
- (void)setRootPageSheet:(id)arg1;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (void).cxx_destruct;
@end


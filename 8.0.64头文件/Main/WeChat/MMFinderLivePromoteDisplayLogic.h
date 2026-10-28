@interface MMFinderLivePromoteDisplayLogic : NSObject <FinderLivePromoteManageExt, IMMFontMgrExt, MMFinderLivePromoteDisplayLeasePromotionDelegate>
{
    BOOL _disablePubbleDisplay; // +0x8
    BOOL _isUpdating; // +0x9
    BOOL _isWaitingForActionReport; // +0xa
    unsigned long long _lastAnalyseRet; // +0x10
    id /* block */ _pubbleCreateCallback; // +0x18
    id /* block */ _pubbleDismissCallback; // +0x20
    id /* block */ _pubbleDisplayCallback; // +0x28
    id /* block */ _getEnablePubbleShowAnimationCallback; // +0x30
    id /* block */ _getPubbleDisplayPosCallback; // +0x38
    id /* block */ _displayLeaseViewLayoutRequestedCallback; // +0x40
    NSString * _ignoreStockID; // +0x48
    MMFinderLivePromotePubbleContainerView * _currentPromotePubbleView; // +0x50
    MMFinderLivePromotePubbleContainerView * _nextPromotePubbleView; // +0x58
    unsigned long long _idIsWaitingFetchData; // +0x60
    unsigned long long _userClosedPromoteInfoID; // +0x68
    NSData * _currentSyncContext; // +0x70
    MMFinderLiveSyncPromoteModel * _liveSyncPromoteModel; // +0x78
    double _displayLeaseViewAlpha; // +0x80
    unsigned long long _closeButtonPreemptions; // +0x88
    MMFinderLiveTaskId * _taskId; // +0x90
    FinderLivePromoteMsgInfo * _currentPromoteMsgInfo; // +0x98
    FinderLivePromoteMsgInfo * _pendingPromoteMsgInfo; // +0xa0
    NSData * _currentExtBuffer; // +0xa8
    NSMutableDictionary * _promoteDisplayRecordDict; // +0xb0
    MMFinderLivePromoteDisplayRecordInfo * _previousPrepareDisplayRecordInfo; // +0xb8
    FinderLivePromoteExtInfo * _promoteExtInfo; // +0xc0
    NSMutableArray * _actionReportItemList; // +0xc8
    MMLiveQueue * _displayLeases; // +0xd0
    MMFinderLivePromoteDisplayLease * _currentPrecedingDisplayLease; // +0xd8
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultSrc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)updatePromoteMsgInfo:(id)arg1;
- (void)inner_updatePromoteMsgInfo:(id)arg1 fromSrc:(unsigned long long)arg2;
- (void)updateNewPromoteMsgInfoAndShow:(id)arg1;
- (void)updateCurrentExtBufferFromPromoteMsgInfo:(id)arg1;
- (void)updateCurrentSyncContext:(id)arg1;
- (void)updatePendingPromote:(id)arg1;
- (void)cancelPendingPromote;
- (void)invokePendingPromoteHandle;
- (void)updateCurrentPendingPromoteInfo:(id)arg1;
- (unsigned long long)anlysePromoteMsgInfo:(id)arg1 fromSrc:(unsigned long long)arg2;
- (BOOL)judgeNeedIgnoreForCoupon:(id)arg1;
- (BOOL)isCurrentPromoteMsgInfo:(id)arg1;
- (void)showPromotePubble:(id)arg1 completion:(id /* block */)arg2;
- (void)popPromotePubble:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissPromotePubble:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)dismissPromotePubble:(id)arg1 userDirectlyClosed:(BOOL)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)createPromotePubbleView;
- (void)notifyPromotePubbleDismiss:(id)arg1 userDirectlyClosed:(BOOL)arg2 state:(unsigned long long)arg3;
- (void)notifyPromotePubblePop:(id)arg1 state:(unsigned long long)arg2;
- (void)notifyPromotePubbleDisplay:(id)arg1 state:(unsigned long long)arg2;
- (void)notifyPromotePubbleCreate:(id)arg1;
- (BOOL)isPromoteMsgInfoSupportDisplay:(id)arg1;
- (void)addActionReportItem:(id)arg1;
- (void)reportForPromoteAction;
- (void)cancelReportForPromoteAction;
- (void)layoutPromotePubbleView;
- (void)layoutDisplayLeaseContainerView;
- (BOOL)isDisplayCurrentPromotePubbleView;
- (void)setCloseButtonPreemptions:(unsigned long long)arg1;
- (void)updatePromotePubblesHidden;
- (void)dismissAllPromotePubbleViews:(BOOL)arg1;
- (BOOL)isPromoteMsgInfoNeedHandle:(id)arg1;
- (BOOL)hasPubbleFromAnchorPromote;
- (BOOL)isCurrentPromotePubbleUnVisible;
- (void)updateFromSyncPromoteWithSeqResp:(id)arg1;
- (id)getReqPromotingInfo:(id)arg1;
- (BOOL)istReqPromotingIdFitWithCurrent:(id)arg1;
- (double)getDismissPointY:(id)arg1;
- (double)getHorizontalExtendCenter:(id)arg1;
- (double)getProductPubbleAnimationAppearY:(id)arg1;
- (CGPoint)getNewProductPubbleAnimationStartPoint:(id)arg1;
- (double)getNewProductPubbleAnimationMiddleCenterY:(id)arg1;
- (double)getDisplayPointY:(id)arg1;
- (double)getPopPointY:(id)arg1;
- (double)getDisplayLeft:(id)arg1;
- (double)getDisplayTriTipX:(id)arg1;
- (id)getCurrentExtBuffer;
- (void)updatePromoteExtInfo:(id)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (id)liveTask;
- (id)localPromoteMsgInfo;
- (id)actionReportItemList;
- (void)setCurrentPromoteMsgInfo:(id)arg1;
- (void)setDisablePubbleDisplay:(BOOL)arg1;
- (double)displayLeaseViewPreferredHeight;
- (void)setDisplayLeaseViewAlpha:(double)arg1;
- (BOOL)isUsingLeasePubbleView;
- (void)onCurrentPromoteMsgInfoUpdate:(id)arg1;
- (id)createDisplayRecordInfo:(id)arg1;
- (void)onFinderLivePromoteMsgEndPush:(id)arg1;
- (void)onFontSizeChange;
- (id)currentCoupon;
- (id)applyForDisplayLeaseWithRequest:(id)arg1;
- (BOOL)containsDisplayLeaseSatisfying:(id /* block */)arg1;
- (void)updateViewsForDisplayLeaseChanges;
- (void)initializeDisplayLeaseQueue;
- (id)displayLeaseForToken:(id)arg1;
- (void)requestDisplayLeaseViewLayoutForLease:(id)arg1;
- (void)onPromoteDisplayLeaseViewLayoutRequested:(id)arg1;
- (void)onPromoteDisplayLeaseRelinquished:(id)arg1;
- (void)onPromoteDisplayLeaseExpired:(id)arg1;
- (void)onPromoteDisplayLeaseUserDismissed:(id)arg1;
- (unsigned long long)lastAnalyseRet;
- (void)setLastAnalyseRet:(unsigned long long)arg1;
- (id /* block */)pubbleCreateCallback;
- (void)setPubbleCreateCallback:(id /* block */)arg1;
- (id /* block */)pubbleDismissCallback;
- (void)setPubbleDismissCallback:(id /* block */)arg1;
- (id /* block */)pubbleDisplayCallback;
- (void)setPubbleDisplayCallback:(id /* block */)arg1;
- (id /* block */)getEnablePubbleShowAnimationCallback;
- (void)setGetEnablePubbleShowAnimationCallback:(id /* block */)arg1;
- (id /* block */)getPubbleDisplayPosCallback;
- (void)setGetPubbleDisplayPosCallback:(id /* block */)arg1;
- (id /* block */)displayLeaseViewLayoutRequestedCallback;
- (void)setDisplayLeaseViewLayoutRequestedCallback:(id /* block */)arg1;
- (id)ignoreStockID;
- (void)setIgnoreStockID:(id)arg1;
- (id)currentPromotePubbleView;
- (void)setCurrentPromotePubbleView:(id)arg1;
- (id)nextPromotePubbleView;
- (void)setNextPromotePubbleView:(id)arg1;
- (unsigned long long)idIsWaitingFetchData;
- (void)setIdIsWaitingFetchData:(unsigned long long)arg1;
- (unsigned long long)userClosedPromoteInfoID;
- (void)setUserClosedPromoteInfoID:(unsigned long long)arg1;
- (id)currentSyncContext;
- (void)setCurrentSyncContext:(id)arg1;
- (id)liveSyncPromoteModel;
- (void)setLiveSyncPromoteModel:(id)arg1;
- (BOOL)disablePubbleDisplay;
- (double)displayLeaseViewAlpha;
- (unsigned long long)closeButtonPreemptions;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)currentPromoteMsgInfo;
- (BOOL)isUpdating;
- (void)setIsUpdating:(BOOL)arg1;
- (id)pendingPromoteMsgInfo;
- (void)setPendingPromoteMsgInfo:(id)arg1;
- (id)currentExtBuffer;
- (void)setCurrentExtBuffer:(id)arg1;
- (id)promoteDisplayRecordDict;
- (void)setPromoteDisplayRecordDict:(id)arg1;
- (id)previousPrepareDisplayRecordInfo;
- (void)setPreviousPrepareDisplayRecordInfo:(id)arg1;
- (id)promoteExtInfo;
- (void)setPromoteExtInfo:(id)arg1;
- (BOOL)isWaitingForActionReport;
- (void)setIsWaitingForActionReport:(BOOL)arg1;
- (void)setActionReportItemList:(id)arg1;
- (id)displayLeases;
- (void)setDisplayLeases:(id)arg1;
- (id)currentPrecedingDisplayLease;
- (void)setCurrentPrecedingDisplayLease:(id)arg1;
- (void).cxx_destruct;
@end

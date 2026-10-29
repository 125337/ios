@interface BTRecoFlowLogic : NSObject <MMImageLoaderObserver>
{
    BOOL _recoFlowDisabled; // +0x8
    BOOL _isMoreSubscribedMsgExpanded; // +0x9
    BOOL _isSubscribedItemReachMaxNum; // +0xa
    BOOL _latestSubscribedGroupMsgReachEnd; // +0xb
    BOOL _allSubscribedMsgReachEnd; // +0xc
    BOOL _isEdgeMarked; // +0xd
    BOOL _markDidTryRefreshFirstScreenCache; // +0xe
    BOOL _markForceToRefreshFirstScreenCache; // +0xf
    BOOL _isFetching; // +0x10
    BOOL _hasMoreData; // +0x11
    BOOL _recoSwitchFromXLab; // +0x12
    BOOL _hasSubscribedCardClickAction; // +0x13
    unsigned int _sectionGapToPreload; // +0x14
    unsigned int _fetchingEventId; // +0x18
    int _fetchingScene; // +0x1c
    unsigned int _refreshFreq; // +0x20
    unsigned int _subscribedCardClickActionCnt; // +0x24
    id <BTRecoFlowLogicDelegate> _delegate; // +0x28
    long long _edgeSectionIndex; // +0x30
    long long _lastRecoCardClickIndex; // +0x38
    GetRecommendFeedsResp * _cachedFirstScreenResp; // +0x40
    NSData * _currentRequestBuffer; // +0x48
    unsigned long long _dividingLineSequenceId; // +0x50
    NSDate * _lastReqDateForSceneRefreshAfterClick; // +0x58
    NSDate * _lastReqDateForSceneSupplement; // +0x60
}
- (id)init;
- (void)dealloc;
- (int)getBrandTimelineVCStayTime;
- (BOOL)isCachedFirstScreenExpired;
- (id)loadFirstScreenCacheCards;
- (BOOL)canFetchTimelineForScene:(int)arg1;
- (void)cancelFetching;
- (void)fetchTimeline:(int)arg1 fetchStartBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_fetchTimeline:(int)arg1 fetchStartBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)handleResp:(id)arg1 scene:(int)arg2 fromCache:(BOOL)arg3 completion:(id /* block */)arg4;
- (BOOL)hasMoreFlowData;
- (BOOL)shouldLoadFlowData;
- (void)expandMoreSubscribedMsg;
- (void)tryClearSpecifiedCacheCardMsgWithCardId:(id)arg1;
- (void)sendFeedBackReq:(id)arg1 selectedReasonArr:(id)arg2 exposedReasonArr:(id)arg3 sessionId:(unsigned int)arg4 completion:(id /* block */)arg5;
- (void)downloadRecoFlowCoverImageIfNeeded:(id)arg1;
- (void)advancePreloadCanvasSectionIfNeed:(id)arg1;
- (void)tryToSetDividingLineSequenceId:(unsigned long long)arg1;
- (unsigned long long)tryToGetDividingLineSequenceId;
- (BOOL)shouldShowDividingLineViewWithSequenceId:(unsigned long long)arg1 isSectionLastNewMsgSection:(BOOL)arg2 isSectionFirstMsgSection:(BOOL)arg3 sectionData:(id)arg4;
- (id)config;
- (id)recommendFeedsWording;
- (unsigned int)subscribeMsgLimit;
- (void)markSubscribedCardClickAction;
- (void)clearSubscribedCardClickAction;
- (void)markRecoFlowCardClickAction:(long long)arg1;
- (void)clearRecoFlowCardClickAction;
- (BOOL)canCardItemMsgDownloadCoverImage:(id)arg1;
- (id)getCardItemMsgDownloadCoverImgArr:(id)arg1 withStyle:(int)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)recoFlowDisabled;
- (void)setRecoFlowDisabled:(BOOL)arg1;
- (BOOL)isMoreSubscribedMsgExpanded;
- (void)setIsMoreSubscribedMsgExpanded:(BOOL)arg1;
- (BOOL)isSubscribedItemReachMaxNum;
- (void)setIsSubscribedItemReachMaxNum:(BOOL)arg1;
- (BOOL)latestSubscribedGroupMsgReachEnd;
- (void)setLatestSubscribedGroupMsgReachEnd:(BOOL)arg1;
- (BOOL)allSubscribedMsgReachEnd;
- (void)setAllSubscribedMsgReachEnd:(BOOL)arg1;
- (BOOL)isEdgeMarked;
- (void)setIsEdgeMarked:(BOOL)arg1;
- (long long)edgeSectionIndex;
- (void)setEdgeSectionIndex:(long long)arg1;
- (BOOL)markDidTryRefreshFirstScreenCache;
- (void)setMarkDidTryRefreshFirstScreenCache:(BOOL)arg1;
- (unsigned int)sectionGapToPreload;
- (void)setSectionGapToPreload:(unsigned int)arg1;
- (BOOL)markForceToRefreshFirstScreenCache;
- (void)setMarkForceToRefreshFirstScreenCache:(BOOL)arg1;
- (long long)lastRecoCardClickIndex;
- (void)setLastRecoCardClickIndex:(long long)arg1;
- (id)cachedFirstScreenResp;
- (void)setCachedFirstScreenResp:(id)arg1;
- (BOOL)isFetching;
- (void)setIsFetching:(BOOL)arg1;
- (unsigned int)fetchingEventId;
- (void)setFetchingEventId:(unsigned int)arg1;
- (int)fetchingScene;
- (void)setFetchingScene:(int)arg1;
- (id)currentRequestBuffer;
- (void)setCurrentRequestBuffer:(id)arg1;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg1;
- (unsigned long long)dividingLineSequenceId;
- (void)setDividingLineSequenceId:(unsigned long long)arg1;
- (BOOL)recoSwitchFromXLab;
- (void)setRecoSwitchFromXLab:(BOOL)arg1;
- (unsigned int)refreshFreq;
- (void)setRefreshFreq:(unsigned int)arg1;
- (BOOL)hasSubscribedCardClickAction;
- (void)setHasSubscribedCardClickAction:(BOOL)arg1;
- (unsigned int)subscribedCardClickActionCnt;
- (void)setSubscribedCardClickActionCnt:(unsigned int)arg1;
- (id)lastReqDateForSceneRefreshAfterClick;
- (void)setLastReqDateForSceneRefreshAfterClick:(id)arg1;
- (id)lastReqDateForSceneSupplement;
- (void)setLastReqDateForSceneSupplement:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCFinderFeedLiveCellRouterModel : NSObject
{
    BOOL _disableMorphDismissTransition; // +0x8
    BOOL _enableInitialLandscapeState; // +0x9
    unsigned long long _routeScene; // +0x10
    MMLiveEnterRoomActionModel * _enterActionModel; // +0x18
    FeedsPreviewJoinLiveMultiStyleInfo_ManueTriggerJoinLive * _feedStreamJoinLiveStyleInfo; // +0x20
    MMFinderLiveFeedTransferLogic * _transferCtx; // +0x28
    unsigned long long _fromSource; // +0x30
    FinderObjectMonotonicData_LiveIndependentData * _liveMonoData; // +0x38
    MMLivePivotFlowSharedData * _pivotFlowData; // +0x40
    NSString * _reportChnlExtra; // +0x48
    NSString * _preloadHighlightSummaryCommentContent; // +0x50
}
- (unsigned long long)routeScene;
- (void)setRouteScene:(unsigned long long)arg1;
- (id)enterActionModel;
- (void)setEnterActionModel:(id)arg1;
- (id)feedStreamJoinLiveStyleInfo;
- (void)setFeedStreamJoinLiveStyleInfo:(id)arg1;
- (id)transferCtx;
- (void)setTransferCtx:(id)arg1;
- (unsigned long long)fromSource;
- (void)setFromSource:(unsigned long long)arg1;
- (id)liveMonoData;
- (void)setLiveMonoData:(id)arg1;
- (BOOL)disableMorphDismissTransition;
- (void)setDisableMorphDismissTransition:(BOOL)arg1;
- (BOOL)enableInitialLandscapeState;
- (void)setEnableInitialLandscapeState:(BOOL)arg1;
- (id)pivotFlowData;
- (void)setPivotFlowData:(id)arg1;
- (id)reportChnlExtra;
- (void)setReportChnlExtra:(id)arg1;
- (id)preloadHighlightSummaryCommentContent;
- (void)setPreloadHighlightSummaryCommentContent:(id)arg1;
- (void).cxx_destruct;
@end

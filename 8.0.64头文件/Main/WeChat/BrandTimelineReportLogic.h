@interface BrandTimelineReportLogic : MMObject <PBMessageObserverDelegate>
{
    unsigned int m_stayTimeStart; // +0x8
    unsigned int m_listStayTimeStart; // +0xc
    unsigned int m_listStayTime; // +0x10
    NSMutableDictionary * m_dicExposeInfo; // +0x18
    NSMutableDictionary * m_dicRealTimeInfo; // +0x20
    unsigned int m_enterPos; // +0x28
    unsigned int m_exitPos; // +0x2c
    unsigned long long m_source; // +0x30
    NSMutableDictionary * m_dicOftenReadAndLiveBarExposeItem; // +0x38
    NSMutableDictionary * m_dicOftenReadAndLiveBarClickItem; // +0x40
    BTLTopBarReportItem * m_channelExposingItem; // +0x48
    NSMutableArray * m_arrChannelExposedItem; // +0x50
    NSMutableArray * m_arrChannelClickItem; // +0x58
    BTLNotifyBarReportItem * m_notifyBarReportItem; // +0x60
    BOOL _jump2OldBizList; // +0x68
    BOOL _pushInCache; // +0x69
    BOOL _didClickRecoFlowUnfold; // +0x6a
    int _exptType; // +0x6c
    unsigned int _msgCntReceiveInBox; // +0x70
    unsigned int _sepLineType; // +0x74
    unsigned int _sepLineFirstExposeIndex; // +0x78
    unsigned int _navNewMsgClickCnt; // +0x7c
    unsigned int _msgExpandMoreCnt; // +0x80
    BrandTLExptConfig * _exptConfig; // +0x88
    id <BrandTimelineReportLogicDelegate> _delegate; // +0x90
    BrandReportMainSessionInfo * _sessionInfo; // +0x98
    NSMutableDictionary * _dicLiveMsgExposedItem; // +0xa0
    NSMutableSet * _setLiveClickMsgId; // +0xa8
    long long _exposedMsgMaxIndex; // +0xb0
    long long _exposedMsgMinIndex; // +0xb8
    KvReportItem29480 * _personalCenterEntranceExposedItem; // +0xc0
}
+ (unsigned int)sessionId;
+ (void)__setSessionId:(unsigned int)arg1;
+ (unsigned long long)enterTimestampMs;
+ (void)__setEnterTimestampMs:(unsigned long long)arg1;
+ (unsigned long long)exposedSessionId;
+ (void)__setExposedSessionId:(unsigned long long)arg1;
+ (void)reportEnterTimelineTimeCostIdKey:(unsigned int)arg1;
+ (void)reportDeleteTooOldTLMsgIdKey;
+ (unsigned int)msgTypeForMsgWrap:(id)arg1;
+ (id)generateReddotReportItem:(id)arg1;
+ (id)getReddotReportInfoWithNotifyCount:(long long)arg1 isMassSend:(BOOL)arg2 isNotification:(BOOL)arg3 toBNotifyCount:(long long)arg4;
+ (void)reportRecCardIdKeyEvent:(unsigned long long)arg1;
+ (void)reportRecCardReceiveXMLPush:(id)arg1;
+ (void)reportRecCardOptype:(unsigned int)arg1 bizUsrName:(id)arg2 recId:(unsigned long long)arg3 mid:(unsigned int)arg4 idx:(unsigned int)arg5 feedBackReasonArr:(id)arg6;
+ (void)reportRecCardOptype:(unsigned int)arg1 sectionData:(id)arg2 viewModel:(id)arg3 extInfo:(id)arg4;
+ (void)reportRecCardInsertActionRet:(unsigned int)arg1 recCardWrapper:(id)arg2;
+ (void)report15721RecommendFinderCellOptype:(unsigned int)arg1 sectionData:(id)arg2 index:(long long)arg3;
+ (unsigned int)genChannelExposeSeqId;
+ (void)reportRecFlowCardOptype:(unsigned int)arg1 recoFlowSectionData:(id)arg2 cellView:(id)arg3 extInfo:(id)arg4;
+ (void)reportRecoFlowExpandMoreCellActionType:(unsigned int)arg1 position:(unsigned int)arg2;
+ (void)reportRecoFlowHeaderCellRefreshActionType:(unsigned int)arg1 position:(unsigned int)arg2;
+ (void)report27268FinderCardRecycledWithRecCardWrapperArr:(id)arg1;
+ (void)reportGeneralException:(long long)arg1 data:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)onEnterTL:(unsigned long long)arg1 sessionInfo:(id)arg2 pushInCache:(BOOL)arg3;
- (void)onExitTL;
- (void)onTLDidAppear;
- (void)reportEnterTLLog11404:(id)arg1;
- (int)getCurExptType;
- (void)report28651ExptOnEnter;
- (void)updateExposeMinIndexOnAppear;
- (void)report28651ExptOnExit;
- (void)fill28651ReportItemCommField:(id)arg1;
- (void)onAddMsgInTL;
- (void)onExpandMsg;
- (void)onClickNavMsgBtn;
- (void)onUnfoldRecoFlow;
- (void)onMsgSectionExposeForIndex:(long long)arg1;
- (BOOL)hasSeqLineExposed;
- (void)onSeqLineTypeExpose:(unsigned int)arg1 firstExposeIndex:(unsigned int)arg2;
- (void)reportOptype:(unsigned int)arg1 sectionData:(id)arg2;
- (void)reportOptype:(unsigned int)arg1 sectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)reportOptype:(unsigned int)arg1 readerSectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)reportOptype:(unsigned int)arg1 notifySectionData:(id)arg2 msgIdx:(unsigned int)arg3;
- (void)startRecordTimelineStayTime;
- (void)pauseRecordTimelineStayTime;
- (void)resumeRecordTimelineStayTime;
- (void)abortRecordTimelineStayTime;
- (void)endRecordTimelineStayTime;
- (void)reportEnterPosWithVisibleItemVewModelArr:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExitPosWithVisibleItemVewModelArr:(id)arg1;
- (id)getExposeInfoCache;
- (id)converInfoToReportInfo:(id)arg1;
- (void)sendListExposeRealTimeInfoReportReqForClickWithKey:(id)arg1;
- (void)sendListExposeRealTimeInfoReportReq:(BOOL)arg1;
- (void)clearRealTimeReportCache;
- (id)generateReddotReportItem;
- (void)sendListExposeInfoReportReq;
- (void)recordOftenReadAndLiveBarBrandLiveExposed;
- (void)sendOftenReadReportReq;
- (void)reportExposeItemArr:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (BOOL)isItemValidExpose:(id)arg1;
- (void)reportValidExposeItem:(id)arg1 ratio:(unsigned int)arg2 newMsgSequenceId:(unsigned long long)arg3;
- (BOOL)isExposeWithKey:(id)arg1 isValidExpose:(BOOL)arg2;
- (void)reportClickItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (id)genExposeInfoWithItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (id)genRealTimeExposeInfoWithItem:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeCanvasSection:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (void)reportExposeRecCanvasSection:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (BOOL)isRecCanvasSectioValidExposed:(id)arg1;
- (void)reportValidExposeRecCanvasSection:(id)arg1 ratio:(unsigned int)arg2;
- (id)genExposeInfoWithRecCanvasSection:(id)arg1;
- (id)genRealTimeExposeInfoWithRecCanvasSection:(id)arg1;
- (id)genComExposeInfoForCanvasSection:(id)arg1;
- (void)reportClickCanvasCardItem:(id)arg1;
- (void)reportExposeAdCanvasSection:(id)arg1 newMsgSequenceId:(unsigned long long)arg2;
- (id)genExposeInfoWithAdCanvasSection:(id)arg1;
- (id)genRealTimeExposeInfoWithAdCanvasSection:(id)arg1;
- (BOOL)isAdCanvasSectioValidExposed:(id)arg1;
- (void)reportValidExposeAdCanvasSection:(id)arg1 ratio:(unsigned int)arg2;
- (void)reportExposeRecCard:(id)arg1;
- (void)reportExposeRecommendItemWithViewModel:(id)arg1 newMsgSequenceId:(unsigned long long)arg2 index:(long long)arg3;
- (void)reportClickRecCard:(id)arg1;
- (void)reportClickFinderFixedCard:(id)arg1 index:(long long)arg2;
- (void)reportClickFinderScrollableCard:(id)arg1 index:(long long)arg2;
- (void)reportClickMPInterestData:(id)arg1 interestData:(id)arg2 index:(long long)arg3;
- (void)updateExposeRecCardRecReason:(id)arg1;
- (BOOL)isRecommendCardValidExposed:(id)arg1;
- (BOOL)isRecommendItemValidExposed:(id)arg1 withIndex:(long long)arg2;
- (void)reportRecommendCardValidExposeItem:(id)arg1 withIndex:(long long)arg2;
- (void)reportRecCardVideoItemCellAutoPlayStart:(id)arg1;
- (void)reportRecCardVideoItemCellAutoPlayEnd:(id)arg1;
- (void)reportVideoItemCellAutoPlayStart:(id)arg1;
- (void)reportVideoItemCellAutoPlayEnd:(id)arg1;
- (void)reportBaseVideoItemCellAutoPlayStartWithKey:(id)arg1 logTag:(id)arg2;
- (void)reportBaseVideoItemCellAutoPlayEndWithKey:(id)arg1 itemViewModel:(id)arg2 logTag:(id)arg3;
- (void)reportExposeOftenReadItemViewArr:(id)arg1;
- (void)reportOftenReadSectionDisappear;
- (void)reportClickOftenReadItemView:(id)arg1;
- (id)getContactFromBrandBarItemView:(id)arg1;
- (void)reportExposeNotifyItemWithSectionData:(id)arg1;
- (void)reportClickNotifyItemWithSectionData:(id)arg1;
- (void)reportNotifyItemOnExitTimeline;
- (BOOL)isRecoContentCellView:(id)arg1;
- (id)recoFlowItemIdentifierForCell:(id)arg1;
- (BOOL)isRecoFlowSectionValidExpose:(id)arg1 cellView:(id)arg2;
- (void)reportRecoFlowSectionData:(id)arg1 cellView:(id)arg2 optype:(unsigned int)arg3;
- (void)reportClickCardTitleFinderLive:(id)arg1;
- (void)reportClickLiveBarItemView:(id)arg1;
- (void)reportExposedLiveBarItemView:(id)arg1;
- (void)reportLiveMsgExposed:(id)arg1 viewModel:(id)arg2;
- (void)reportLiveMsgClicked:(id)arg1;
- (void)reportLiveMsgWhenLeave;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)checkCGIBaseRespSuccess:(id)arg1;
- (void)reportExposePersonalCenterEntrance:(long long)arg1;
- (id)reportKv29480:(int)arg1 redDotCount:(long long)arg2;
- (id)exptConfig;
- (void)setExptConfig:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)jump2OldBizList;
- (void)setJump2OldBizList:(BOOL)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (BOOL)pushInCache;
- (void)setPushInCache:(BOOL)arg1;
- (id)dicLiveMsgExposedItem;
- (void)setDicLiveMsgExposedItem:(id)arg1;
- (id)setLiveClickMsgId;
- (void)setSetLiveClickMsgId:(id)arg1;
- (int)exptType;
- (void)setExptType:(int)arg1;
- (long long)exposedMsgMaxIndex;
- (void)setExposedMsgMaxIndex:(long long)arg1;
- (long long)exposedMsgMinIndex;
- (void)setExposedMsgMinIndex:(long long)arg1;
- (unsigned int)msgCntReceiveInBox;
- (void)setMsgCntReceiveInBox:(unsigned int)arg1;
- (unsigned int)sepLineType;
- (void)setSepLineType:(unsigned int)arg1;
- (unsigned int)sepLineFirstExposeIndex;
- (void)setSepLineFirstExposeIndex:(unsigned int)arg1;
- (BOOL)didClickRecoFlowUnfold;
- (void)setDidClickRecoFlowUnfold:(BOOL)arg1;
- (unsigned int)navNewMsgClickCnt;
- (void)setNavNewMsgClickCnt:(unsigned int)arg1;
- (unsigned int)msgExpandMoreCnt;
- (void)setMsgExpandMoreCnt:(unsigned int)arg1;
- (id)personalCenterEntranceExposedItem;
- (void)setPersonalCenterEntranceExposedItem:(id)arg1;
- (void).cxx_destruct;
@end

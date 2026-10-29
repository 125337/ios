@interface WebSearchRedotMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    WSRedPointCtrlInfo * _ctrlInfo; // +0x8
    unsigned long long _reddotTriggerJumpColumn; // +0x10
    FinderSyncTipsShowInfo * _reddotTriggerJumpColumnTipsInfo; // +0x18
    WCFinderRedDotTipsShowInfo * _reddotTriggerJumpColumnShowInfo; // +0x20
    WCFinderRedDotCtrlInfo * _reddotTriggerJumpColumnCtrlInfo; // +0x28
    NewLifeSwitchLogic * _newlifeSwiftLogic; // +0x30
}
+ (unsigned long long)GenReddotVisionTypeFromCategoryNum:(unsigned int)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)loadData;
- (void)migration;
- (BOOL)shouldShowFindFriendTabRedotForRecommend:(BOOL)arg1;
- (BOOL)shouldShowFindFriendTabRedotForSearch:(BOOL)arg1;
- (BOOL)shouldShowFFSearchRedot:(BOOL)arg1;
- (BOOL)shouldShowFFBrowseNumReddotInDiscover;
- (BOOL)shouldShowFFBrowseNumReddotInternal;
- (BOOL)shouldShowFFBrowseRedDot:(BOOL)arg1;
- (BOOL)shouldShowFFBrowseRedot:(id)arg1 forReason:(id *)arg2;
- (BOOL)isReddotEnabled:(id)arg1;
- (BOOL)isReddotEnabled:(id)arg1 forReason:(id *)arg2;
- (BOOL)disableTopRecomemndContentReddotCuzNewlife;
- (BOOL)isFFBrowseRedotClearByConsume;
- (void)clearFFBrowseRedot:(unsigned long long)arg1;
- (void)clearAllBrowseReddot;
- (void)onReddotInfoRemoved;
- (void)clearFFBrowseNumRedot:(id)arg1;
- (void)clearFFSearchRedot;
- (void)clearFFBrowseSettingRedot;
- (void)tryUpdateRecommendReddotClearedTimeStamps:(unsigned int)arg1;
- (void)tryUpdateSearchReddotClearedTimeStamps:(unsigned int)arg1;
- (id)getWeSeeRedPointInfo:(unsigned long long)arg1;
- (id)getActiveReddotInfo:(unsigned long long)arg1;
- (id)getWSRedPointInfo:(BOOL)arg1;
- (id)getWSRecommendNumReddotInfo;
- (unsigned int)getWSRecommendNumReddotCount;
- (id)getWSRecommendNumReddotList;
- (void)updateWowContentWithJsonString:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)parseRedPointCtrlMsg:(id)arg1;
- (void)saveReddotCtrlInfo;
- (void)clearReddotTriggerJumpInfo;
- (void)saveAndCallExtensionOnReceived:(id)arg1;
- (void)dispatchRedDotForSearch:(id)arg1;
- (void)reportRedDotReceivedWithInfo:(id)arg1;
- (void)dispatchRedDotForBrowse:(id)arg1;
- (void)dispatchReddotInfo:(id)arg1;
- (void)checkReport101IfCanDisplay:(id)arg1 reddotType:(unsigned int)arg2;
- (BOOL)handleWowSettingReddot:(id)arg1;
- (BOOL)checkContentReddotTabValid:(id)arg1;
- (BOOL)handleContentReddot:(id)arg1;
- (void)notifyReddotToJs:(id)arg1;
- (BOOL)handleHaoKanNumReddot:(id)arg1;
- (void)reddotReportCloseRecommend:(unsigned int)arg1 reddot:(id)arg2;
- (BOOL)cacheTopStoryContentReddotStamp:(unsigned long long)arg1 timestamp:(unsigned int)arg2;
- (unsigned int)getTopStoryContentReddotStamp:(unsigned long long)arg1;
- (id)getCacheKeyFromReddotType:(unsigned long long)arg1;
- (id)getCurrentWeSeeReddotDisplayInFind;
- (unsigned long long)reddotTriggerJumpColumn;
- (void)setReddotTriggerJumpColumn:(unsigned long long)arg1;
- (id)reddotTriggerJumpColumnTipsInfo;
- (void)setReddotTriggerJumpColumnTipsInfo:(id)arg1;
- (id)reddotTriggerJumpColumnShowInfo;
- (void)setReddotTriggerJumpColumnShowInfo:(id)arg1;
- (id)reddotTriggerJumpColumnCtrlInfo;
- (void)setReddotTriggerJumpColumnCtrlInfo:(id)arg1;
- (id)newlifeSwiftLogic;
- (void)setNewlifeSwiftLogic:(id)arg1;
- (void).cxx_destruct;
@end


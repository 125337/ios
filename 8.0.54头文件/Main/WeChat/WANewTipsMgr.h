@interface WANewTipsMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableDictionary * _id2NextUpdateTimeDic; // +0x8
    NSMutableArray * _updatingTipsKeyList; // +0x10
}
- (void)onServiceInit;
- (void)fetchWeAppRealTimeReddotMsgIfNeeded;
- (void)fetchRealTimeReddotMsgIfNeededWithNewTipsInfo:(id)arg1;
- (void)fetchRealTimeReddotMsgWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2 showType:(unsigned int)arg3 title:(id)arg4 iconUrl:(id)arg5 extInfo:(id)arg6;
- (void)handleGetWeAppCellNotifyMsgResp:(id)arg1;
- (BOOL)isNewTipsInfoNeedRealTimeUpdate:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)reportDiscoveryPageExpose;
- (void)reportDiscoveryTabExpose:(BOOL)arg1;
- (void)reportDiscoveryTabClick:(BOOL)arg1 isNative:(BOOL)arg2;
- (id)genKeyWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (unsigned long long)getNextUpdateTimeWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (void)setNextUpdateTime:(unsigned long long)arg1 tipsId:(unsigned int)arg2 uniqueId:(id)arg3;
- (BOOL)isTipsInfoInUpdatingListWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (void)addTipsInfoToUpdatingListWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (void)removeTipsInfoFromUpdatingLIstWithTipsId:(unsigned int)arg1 uniqueId:(id)arg2;
- (void).cxx_destruct;
@end


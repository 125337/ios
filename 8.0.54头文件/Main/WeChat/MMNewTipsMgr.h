@interface MMNewTipsMgr : MMUserService <MMServiceProtocol, IMsgExt, NewTipsNetworkLogicDelegate, IExptServiceExt>
{
    NewTipsUtils * _tipsUtils; // +0x8
    NewTipsNetworkLogic * _networkLogic; // +0x10
    NSMutableDictionary * _dicTipsInfo; // +0x18
    NSMutableDictionary * _dicPathInfo; // +0x20
}
- (id)getShowInfoWitPathKey:(id)arg1;
- (void)disposeRedPointWithKey:(id)arg1;
- (id)getNewTipsInfoWithId:(unsigned int)arg1;
- (void)onServiceInit;
- (void)updatePathsInfoWithTipsInfo:(id)arg1;
- (void)checkLocalConfigForPath;
- (void)requestLocalTipsWithID:(unsigned int)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onGetNewTipsXml:(id)arg1;
- (void)disposePreviousTipsWithTipsInfo:(id)arg1;
- (void)updateNewTipsInfo:(id)arg1;
- (void)updateAndNotifyPathKeysWithTipsInfo:(id)arg1;
- (void)onServerRejectShowTipsId:(unsigned int)arg1 UID:(id)arg2;
- (void)onExptItemListChange;
- (id)tipsUtils;
- (void)setTipsUtils:(id)arg1;
- (id)networkLogic;
- (void)setNetworkLogic:(id)arg1;
- (id)dicTipsInfo;
- (void)setDicTipsInfo:(id)arg1;
- (id)dicPathInfo;
- (void)setDicPathInfo:(id)arg1;
- (void).cxx_destruct;
@end


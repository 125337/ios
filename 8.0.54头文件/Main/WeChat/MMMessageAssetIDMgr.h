@interface MMMessageAssetIDMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    WCTDatabase * _database; // +0x8
    WCTTable * _table; // +0x10
}
- (void)onServiceInit;
- (void)setMessageSvrID:(long long)arg1 chatName:(id)arg2 forAssetID:(id)arg3;
- (id)assetIDForMessageSvrID:(long long)arg1;
- (void)deleteItemWithMessageSvrID:(long long)arg1;
- (void)deleteItemsWithChatName:(id)arg1;
- (id)getDBPath;
- (void)OnMsgSendSuccess:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)table;
- (void)setTable:(id)arg1;
- (void).cxx_destruct;
@end


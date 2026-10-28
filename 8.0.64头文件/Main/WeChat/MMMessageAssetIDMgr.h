@interface MMMessageAssetIDMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    WCTDatabase * _database; // +0x8
    WCTTable * _table; // +0x10
}
+ (id)extTableName:(id)arg1;
+ (id)md5StringFromUserName:(id)arg1;
- (void)onServiceInit;
- (void)setMessageSvrID:(long long)arg1 chatName:(id)arg2 forAssetID:(id)arg3;
- (id)assetIDForMessageSvrID:(long long)arg1;
- (void)deleteItemWithMessageSvrID:(long long)arg1;
- (void)deleteItemsWithChatName:(id)arg1;
- (void)setDidSaveHDToAlbum:(id)arg1;
- (void)setDidSaveMiddleToAlbum:(id)arg1;
- (id)getExtItem:(id)arg1;
- (void)deleteExtItemWithMessageLocalID:(unsigned int)arg1 chatName:(id)arg2;
- (void)deleteExtItemsWithChatName:(id)arg1;
- (id)getDBPath;
- (id)extTable:(id)arg1;
- (void)OnMsgSendSuccess:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)table;
- (void)setTable:(id)arg1;
- (void).cxx_destruct;
@end

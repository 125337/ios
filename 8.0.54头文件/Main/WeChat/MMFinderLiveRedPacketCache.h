@interface MMFinderLiveRedPacketCache : MMUserService <MMServiceProtocol>
{
    MMFinderLiveRedPacketMessage * _taggedRedPacketMessage; // +0x8
    NSMutableDictionary * _redPacketDictionary; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)mmkvID;
- (id)mmkv;
- (void)addRedPacketItem:(id)arg1 forId:(id)arg2;
- (id)redPacketItemForId:(id)arg1;
- (id)queryRedPacketItemsForTaskId:(id)arg1;
- (void)tagRedPacketWithMessage:(id)arg1;
- (void)clearTagRedPacket;
- (id)mmkvKeyForStatusOpenWithItem:(id)arg1;
- (void)redPacketItemDidOpen:(id)arg1;
- (BOOL)isOpenedForRedPacketItem:(id)arg1;
- (void)clearOutdatedDataForStatusOpenedInMMKV:(id)arg1;
- (id)taggedRedPacketMessage;
- (void)setTaggedRedPacketMessage:(id)arg1;
- (id)redPacketDictionary;
- (void)setRedPacketDictionary:(id)arg1;
- (void).cxx_destruct;
@end


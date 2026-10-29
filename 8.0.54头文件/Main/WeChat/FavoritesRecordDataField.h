@interface FavoritesRecordDataField : FavoritesItemDataField
{
    unsigned int _msgLocalId; // +0x290
    unsigned int _msgCreateTime; // +0x294
    NSString * _chatName; // +0x298
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)GetThumbPath;
- (id)GetDataPath;
- (id)GetMiddleDataPath;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end


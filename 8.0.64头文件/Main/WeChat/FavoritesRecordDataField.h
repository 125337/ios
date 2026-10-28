@interface FavoritesRecordDataField : FavoritesItemDataField
{
    unsigned int _msgLocalId; // +0x2a8
    unsigned int _msgCreateTime; // +0x2ac
    NSString * _chatName; // +0x2b0
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)GetThumbPath;
- (id)GetDataPath;
- (id)GetMiddleDataPath;
- (id)GetLivePhotoVideoPath;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)msgLocalId;
- (void)setMsgLocalId:(unsigned int)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

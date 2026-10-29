@interface MMImageActionFileSource : MMImageActionSheetItem
{
    NSString * _sessionId; // +0x8
    CMessageWrap * _messageWrap; // +0x10
    FavoritesItemDataField * _dataItem; // +0x18
}
- (id)init;
- (void)handleWithImage;
- (BOOL)isHidden;
- (void)setupMsg:(id)arg1 dataItem:(id)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)messageWrap;
- (void)setMessageWrap:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void).cxx_destruct;
@end

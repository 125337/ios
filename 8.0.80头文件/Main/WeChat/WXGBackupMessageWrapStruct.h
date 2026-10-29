@interface WXGBackupMessageWrapStruct : NSObject
{
    BakChatMsgItem * _bakchatMsgItem; // +0x8
    NSArray * _mediaArray; // +0x10
    long long _msgSvrID; // +0x18
}
- (id)bakchatMsgItem;
- (void)setBakchatMsgItem:(id)arg1;
- (id)mediaArray;
- (void)setMediaArray:(id)arg1;
- (long long)msgSvrID;
- (void)setMsgSvrID:(long long)arg1;
- (void).cxx_destruct;
@end

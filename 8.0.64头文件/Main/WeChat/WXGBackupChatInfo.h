@interface WXGBackupChatInfo : NSObject
{
    NSString * _bakChatName; // +0x8
    unsigned long long _msgCount; // +0x10
    unsigned long long _mediaCount; // +0x18
    unsigned long long _mediaSize; // +0x20
    unsigned long long _filterMediaSize; // +0x28
    unsigned long long _filterMediaCount; // +0x30
    NSMutableDictionary * _mediaCntInfo; // +0x38
    NSMutableDictionary * _filterMediaCntInfo; // +0x40
}
- (id)init;
- (id)bakChatName;
- (void)setBakChatName:(id)arg1;
- (unsigned long long)msgCount;
- (void)setMsgCount:(unsigned long long)arg1;
- (unsigned long long)mediaCount;
- (void)setMediaCount:(unsigned long long)arg1;
- (unsigned long long)mediaSize;
- (void)setMediaSize:(unsigned long long)arg1;
- (unsigned long long)filterMediaSize;
- (void)setFilterMediaSize:(unsigned long long)arg1;
- (unsigned long long)filterMediaCount;
- (void)setFilterMediaCount:(unsigned long long)arg1;
- (id)mediaCntInfo;
- (void)setMediaCntInfo:(id)arg1;
- (id)filterMediaCntInfo;
- (void)setFilterMediaCntInfo:(id)arg1;
- (void).cxx_destruct;
@end

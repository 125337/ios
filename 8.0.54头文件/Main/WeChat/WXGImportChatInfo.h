@interface WXGImportChatInfo : NSObject
{
    unsigned int _msgMaxTime; // +0x8
    unsigned int _msgMinTime; // +0xc
    unsigned int _mediaCount; // +0x10
    NSString * _bakChatName; // +0x18
    unsigned long long _msgCount; // +0x20
    unsigned long long _msgListCount; // +0x28
    unsigned long long _msgFilterCount; // +0x30
    unsigned long long _msgSpecialCount; // +0x38
    unsigned long long _msgLocalExistCount; // +0x40
    NSMutableDictionary * _mediaCntInfo; // +0x48
}
- (id)init;
- (void)addMediaForMediaType:(unsigned int)arg1;
- (id)brief;
- (id)bakChatName;
- (void)setBakChatName:(id)arg1;
- (unsigned long long)msgCount;
- (void)setMsgCount:(unsigned long long)arg1;
- (unsigned long long)msgListCount;
- (void)setMsgListCount:(unsigned long long)arg1;
- (unsigned long long)msgFilterCount;
- (void)setMsgFilterCount:(unsigned long long)arg1;
- (unsigned long long)msgSpecialCount;
- (void)setMsgSpecialCount:(unsigned long long)arg1;
- (unsigned long long)msgLocalExistCount;
- (void)setMsgLocalExistCount:(unsigned long long)arg1;
- (unsigned int)msgMaxTime;
- (void)setMsgMaxTime:(unsigned int)arg1;
- (unsigned int)msgMinTime;
- (void)setMsgMinTime:(unsigned int)arg1;
- (unsigned int)mediaCount;
- (void)setMediaCount:(unsigned int)arg1;
- (id)mediaCntInfo;
- (void)setMediaCntInfo:(id)arg1;
- (void).cxx_destruct;
@end


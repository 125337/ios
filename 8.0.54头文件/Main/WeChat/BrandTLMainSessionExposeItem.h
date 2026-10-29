@interface BrandTLMainSessionExposeItem : MMObject
{
    unsigned int _position; // +0x8
    unsigned int _uNewNotifyMsgCount; // +0xc
    unsigned int _unReadCount; // +0x10
    unsigned int _liveNotifyType; // +0x14
    unsigned int _brandNotifyType; // +0x18
    CMessageWrap * _msgWrap; // +0x20
    unsigned long long _sessionId; // +0x28
    unsigned long long _startTimeMs; // +0x30
}
- (BOOL)isLiveNotifyMsgExposedItem;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (unsigned long long)sessionId;
- (void)setSessionId:(unsigned long long)arg1;
- (unsigned long long)startTimeMs;
- (void)setStartTimeMs:(unsigned long long)arg1;
- (unsigned int)position;
- (void)setPosition:(unsigned int)arg1;
- (unsigned int)uNewNotifyMsgCount;
- (void)setUNewNotifyMsgCount:(unsigned int)arg1;
- (unsigned int)unReadCount;
- (void)setUnReadCount:(unsigned int)arg1;
- (unsigned int)liveNotifyType;
- (void)setLiveNotifyType:(unsigned int)arg1;
- (unsigned int)brandNotifyType;
- (void)setBrandNotifyType:(unsigned int)arg1;
- (void).cxx_destruct;
@end


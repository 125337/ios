@interface MainPluginReportItem : NSObject
{
    BOOL _isMute; // +0x8
    long long _unreadMsgCount; // +0x10
    long long _recvMsgCount; // +0x18
    unsigned long long _enterBackgroundTime; // +0x20
    long long _lastUnReadCount; // +0x28
    NSString * _name; // +0x30
}
- (id)init;
- (void)reset;
- (void)report;
- (BOOL)isMute;
- (void)setIsMute:(BOOL)arg1;
- (long long)unreadMsgCount;
- (void)setUnreadMsgCount:(long long)arg1;
- (long long)recvMsgCount;
- (void)setRecvMsgCount:(long long)arg1;
- (unsigned long long)enterBackgroundTime;
- (void)setEnterBackgroundTime:(unsigned long long)arg1;
- (long long)lastUnReadCount;
- (void)setLastUnReadCount:(long long)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void).cxx_destruct;
@end

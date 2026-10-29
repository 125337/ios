@interface MainSessionReportItem : NSObject
{
    BOOL _isFirstReportExit; // +0x8
    BOOL _isMute; // +0x9
    long long _chatType; // +0x10
    unsigned long long _exitTime; // +0x18
    unsigned long long _enterTime; // +0x20
    long long _unreadMsgCountAtEnter; // +0x28
    long long _unreadSessionCountAtEnter; // +0x30
    long long _unreadMsgCountAtExit; // +0x38
    long long _unreadSessionCountAtExit; // +0x40
    long long _recvMsgCount; // +0x48
    long long _clearMsgCount; // +0x50
    long long _maxEntrySessionIndex; // +0x58
    NSMutableSet * _recvMsgSessions; // +0x60
    NSMutableSet * _enterSessions; // +0x68
    NSMutableSet * _clearUnreadSessions; // +0x70
    long long _topSessionCount; // +0x78
    NSMutableArray * _sessionDetails; // +0x80
}
- (id)init;
- (void)reset;
- (void)reportAt:(long long)arg1;
- (id)genSessionDetails;
- (BOOL)isFirstReportExit;
- (void)setIsFirstReportExit:(BOOL)arg1;
- (long long)chatType;
- (void)setChatType:(long long)arg1;
- (unsigned long long)exitTime;
- (void)setExitTime:(unsigned long long)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (BOOL)isMute;
- (void)setIsMute:(BOOL)arg1;
- (long long)unreadMsgCountAtEnter;
- (void)setUnreadMsgCountAtEnter:(long long)arg1;
- (long long)unreadSessionCountAtEnter;
- (void)setUnreadSessionCountAtEnter:(long long)arg1;
- (long long)unreadMsgCountAtExit;
- (void)setUnreadMsgCountAtExit:(long long)arg1;
- (long long)unreadSessionCountAtExit;
- (void)setUnreadSessionCountAtExit:(long long)arg1;
- (long long)recvMsgCount;
- (void)setRecvMsgCount:(long long)arg1;
- (long long)clearMsgCount;
- (void)setClearMsgCount:(long long)arg1;
- (long long)maxEntrySessionIndex;
- (void)setMaxEntrySessionIndex:(long long)arg1;
- (id)recvMsgSessions;
- (void)setRecvMsgSessions:(id)arg1;
- (id)enterSessions;
- (void)setEnterSessions:(id)arg1;
- (id)clearUnreadSessions;
- (void)setClearUnreadSessions:(id)arg1;
- (long long)topSessionCount;
- (void)setTopSessionCount:(long long)arg1;
- (id)sessionDetails;
- (void)setSessionDetails:(id)arg1;
- (void).cxx_destruct;
@end


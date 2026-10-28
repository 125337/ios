@interface WNContentOperationRecord : NSObject
{
    NSDate * _operationTime; // +0x8
    WNContentStorage * _preContent; // +0x10
    NSMutableArray * _preSessions; // +0x18
    WNContentStorage * _nextContent; // +0x20
    NSMutableArray * _nextSessions; // +0x28
    _NSRange _preRange; // +0x30
    _NSRange _nextRange; // +0x40
}
- (id)operationTime;
- (void)setOperationTime:(id)arg1;
- (id)preContent;
- (void)setPreContent:(id)arg1;
- (_NSRange)preRange;
- (void)setPreRange:(_NSRange)arg1;
- (id)preSessions;
- (void)setPreSessions:(id)arg1;
- (id)nextContent;
- (void)setNextContent:(id)arg1;
- (_NSRange)nextRange;
- (void)setNextRange:(_NSRange)arg1;
- (id)nextSessions;
- (void)setNextSessions:(id)arg1;
- (void).cxx_destruct;
@end

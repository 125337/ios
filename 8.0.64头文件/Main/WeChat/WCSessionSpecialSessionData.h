@interface WCSessionSpecialSessionData : MMObject <NSCopying>
{
    unsigned int _logID; // +0x8
    NSString * _sid; // +0x10
    NSString * _sessionId; // +0x18
    NSString * _pageName; // +0x20
    unsigned long long _enterTimestampMs; // +0x28
    unsigned long long _quitTimestampMs; // +0x30
    unsigned long long _interval; // +0x38
    unsigned long long _hashcode; // +0x40
    NSString * _finderContextID; // +0x48
}
- (id)toString;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sid;
- (void)setSid:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (unsigned long long)enterTimestampMs;
- (void)setEnterTimestampMs:(unsigned long long)arg1;
- (unsigned long long)quitTimestampMs;
- (void)setQuitTimestampMs:(unsigned long long)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (unsigned long long)hashcode;
- (void)setHashcode:(unsigned long long)arg1;
- (id)finderContextID;
- (void)setFinderContextID:(id)arg1;
- (unsigned int)logID;
- (void)setLogID:(unsigned int)arg1;
- (void).cxx_destruct;
@end

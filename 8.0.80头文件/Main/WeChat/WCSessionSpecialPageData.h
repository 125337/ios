@interface WCSessionSpecialPageData : MMObject <NSCopying>
{
    unsigned int _logID; // +0x8
    NSString * _sid; // +0x10
    NSString * _sessionId; // +0x18
    NSString * _pageName; // +0x20
    unsigned long long _enterTimestampMs; // +0x28
    unsigned long long _quitTimestampMs; // +0x30
    unsigned long long _interval; // +0x38
    unsigned long long _dramaTabEnterType; // +0x40
    NSString * _finderTabContextID; // +0x48
    NSString * _finderContextID; // +0x50
    unsigned long long _pageInType; // +0x58
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
- (unsigned int)logID;
- (void)setLogID:(unsigned int)arg1;
- (unsigned long long)dramaTabEnterType;
- (void)setDramaTabEnterType:(unsigned long long)arg1;
- (id)finderTabContextID;
- (void)setFinderTabContextID:(id)arg1;
- (id)finderContextID;
- (void)setFinderContextID:(id)arg1;
- (unsigned long long)pageInType;
- (void)setPageInType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

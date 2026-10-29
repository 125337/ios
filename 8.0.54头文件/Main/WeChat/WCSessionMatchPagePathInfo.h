@interface WCSessionMatchPagePathInfo : MMObject <NSCopying>
{
    NSString * _sessionId; // +0x8
    NSString * _lastSessionId; // +0x10
    NSString * _sid; // +0x18
    NSString * _pagePathId; // +0x20
    NSString * _sessionPageId; // +0x28
    unsigned long long _enterTimestampMs; // +0x30
    unsigned long long _quitTimestampMs; // +0x38
    unsigned long long _interval; // +0x40
    NSMutableArray * _pagePaths; // +0x48
}
- (id)init;
- (id)toString;
- (id)getAttrDictionary;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)lastSessionId;
- (void)setLastSessionId:(id)arg1;
- (id)sid;
- (void)setSid:(id)arg1;
- (id)pagePathId;
- (void)setPagePathId:(id)arg1;
- (id)sessionPageId;
- (void)setSessionPageId:(id)arg1;
- (unsigned long long)enterTimestampMs;
- (void)setEnterTimestampMs:(unsigned long long)arg1;
- (unsigned long long)quitTimestampMs;
- (void)setQuitTimestampMs:(unsigned long long)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (id)pagePaths;
- (void)setPagePaths:(id)arg1;
- (void).cxx_destruct;
@end


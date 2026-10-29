@interface WCSessionFlowSessionInfo : MMObject <NSCopying>
{
    unsigned int _seq; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _lastSessionId; // +0x18
    NSString * _prePage; // +0x20
    unsigned long long _enterTimestampMs; // +0x28
    unsigned long long _quitTimestampMs; // +0x30
    unsigned long long _interval; // +0x38
    NSString * _pageName; // +0x40
    unsigned long long _hashCode; // +0x48
    NSString * _sid; // +0x50
    NSMutableArray * _pagePaths; // +0x58
    NSMutableArray * _markPagePathInfos; // +0x60
}
- (id)init;
- (id)toString;
- (id)getSessionSingleAttrDictionary;
- (id)getSessionPagePathsAttrDictionary;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)lastSessionId;
- (void)setLastSessionId:(id)arg1;
- (id)prePage;
- (void)setPrePage:(id)arg1;
- (unsigned long long)enterTimestampMs;
- (void)setEnterTimestampMs:(unsigned long long)arg1;
- (unsigned long long)quitTimestampMs;
- (void)setQuitTimestampMs:(unsigned long long)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (unsigned int)seq;
- (void)setSeq:(unsigned int)arg1;
- (id)pageName;
- (void)setPageName:(id)arg1;
- (unsigned long long)hashCode;
- (void)setHashCode:(unsigned long long)arg1;
- (id)sid;
- (void)setSid:(id)arg1;
- (id)pagePaths;
- (void)setPagePaths:(id)arg1;
- (id)markPagePathInfos;
- (void)setMarkPagePathInfos:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCFinderContextIdToken : NSObject
{
    NSString * _contextId; // +0x8
    NSString * _tabSessionId; // +0x10
}
- (id)description;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (id)tabSessionId;
- (void)setTabSessionId:(id)arg1;
- (void).cxx_destruct;
@end


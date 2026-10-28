@interface QDBStatement : NSObject
{
    void * _statement; // +0x8
    NSString * _query; // +0x10
    BOOL _inUse; // +0x18
}
- (void)dealloc;
- (void)close;
- (void)reset;
- (id)query;
- (void)setQuery:(id)arg1;
- (void *)statement;
- (void)setStatement:(void *)arg1;
- (BOOL)inUse;
- (void)setInUse:(BOOL)arg1;
- (void).cxx_destruct;
@end

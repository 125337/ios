@interface WCFinderLoadReporter : NSObject
{
    NSMutableDictionary * _loadInfoDict; // +0x8
}
- (void)addLoadInfo:(id)arg1;
- (void)removeLoadInfoWithTid:(id)arg1;
- (id)loadInfoWithTid:(id)arg1;
- (void)reportLoadInfoWithTid:(id)arg1;
- (id)loadInfoDict;
- (void)setLoadInfoDict:(id)arg1;
- (void).cxx_destruct;
@end


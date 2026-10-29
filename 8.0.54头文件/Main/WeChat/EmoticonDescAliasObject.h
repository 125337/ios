@interface EmoticonDescAliasObject : NSObject
{
    int _resultCacheVersion; // +0x8
    NSSet * _descList; // +0x10
    NSMutableSet * _resultCache; // +0x18
}
- (id)descList;
- (void)setDescList:(id)arg1;
- (id)resultCache;
- (void)setResultCache:(id)arg1;
- (int)resultCacheVersion;
- (void)setResultCacheVersion:(int)arg1;
- (void).cxx_destruct;
@end


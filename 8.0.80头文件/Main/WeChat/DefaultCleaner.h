@interface DefaultCleaner : NSObject <MMCacheCleaner>
{
    int _policy; // +0x8
    NSArray * _paths; // +0x10
    id /* block */ _cleanBlock; // +0x18
}
+ (id)makePolicy:(int)arg1 andPath:(id)arg2;
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
- (id)paths;
- (void)setPaths:(id)arg1;
- (int)policy;
- (void)setPolicy:(int)arg1;
- (id /* block */)cleanBlock;
- (void)setCleanBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

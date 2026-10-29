@interface MMFlutterHybridNavStackCache : MMRootService <MMServiceProtocol>
{
    NSMutableDictionary * _stackCache; // +0x8
}
- (void)onServiceInit;
- (void)dealloc;
- (id)ofEngineGroupId:(id)arg1;
- (void)removeByEngineGroupId:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderReuseQueue : NSObject
{
    multimap<NSString *, NSObject *, WCFinderMapStringKey, std::allocator<std::pair<NSString *const, NSObject *>>> reuseQueue; // +0x8
    NSMutableDictionary * _registerInfos; // +0x20
}
- (id)init;
- (WCFinderReuseConfig)registerClass:(Class)arg1 forIdentifier:(id)arg2;
- (id)dequeueObject:(id)arg1;
- (void)enqueueObject:(id)arg1;
- (id)registerInfos;
- (void)setRegisterInfos:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


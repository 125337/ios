@interface TextState3rdPartyLiveCache : NSObject
{
    NSMutableDictionary * _cache; // +0x8
}
+ (id)sharedInstance;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (void).cxx_destruct;
@end

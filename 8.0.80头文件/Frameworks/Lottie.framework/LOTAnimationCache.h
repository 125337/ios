@interface LOTAnimationCache : NSObject
{
    NSMutableDictionary * animationsCache_; // +0x8
    NSMutableArray * lruOrderArray_; // +0x10
}
+ (id)sharedCache;
- (id)init;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)clearCache;
- (void)removeAnimationForKey:(id)arg1;
- (void)disableCaching;
- (void).cxx_destruct;
@end

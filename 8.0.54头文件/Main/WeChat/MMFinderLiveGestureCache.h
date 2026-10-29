@interface MMFinderLiveGestureCache : MMUserService <MMServiceProtocol>
{
    NSArray * _gestureDefaultEnabledLiveTags; // +0x8
    NSMutableDictionary * _gesturesDict; // +0x10
    NSMutableDictionary * _anchorSupportedGesturesDict; // +0x18
    NSMutableArray * _validateCompletionQueue; // +0x20
    NSMutableArray * _cacheUpdateQueue; // +0x28
}
- (id)gestures;
- (id)anchorSupportedGestures;
- (void)cachedGesturesWithCompletionBlock:(id /* block */)arg1;
- (id)cachedGestureWithId:(id)arg1;
- (void)updateCacheWithUpdateDirectives:(id)arg1;
- (void)onServiceInit;
- (void)validateCachedGesturesWithCompletionBlock:(id /* block */)arg1;
- (void)dequeueCacheUpdateWithUpdateDirectives:(id)arg1;
- (void)updateCacheWithUpdateDirectivesEx:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)gestureDefaultEnabledLiveTags;
- (void)setGestureDefaultEnabledLiveTags:(id)arg1;
- (id)gesturesDict;
- (void)setGesturesDict:(id)arg1;
- (id)anchorSupportedGesturesDict;
- (void)setAnchorSupportedGesturesDict:(id)arg1;
- (id)validateCompletionQueue;
- (void)setValidateCompletionQueue:(id)arg1;
- (id)cacheUpdateQueue;
- (void)setCacheUpdateQueue:(id)arg1;
- (void).cxx_destruct;
@end


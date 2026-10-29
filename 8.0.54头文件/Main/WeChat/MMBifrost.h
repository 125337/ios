@interface MMBifrost : NSObject
{
    NSMutableDictionary * _trackCacheDict; // +0x8
}
+ (id)sharedInstance;
+ (void)cacheTrack:(id)arg1;
+ (id)trackForProtocolName:(id)arg1 selectorName:(id)arg2;
+ (id)responderTargetsForSource:(id)arg1 protocol:(id)arg2 selector:(SEL)arg3;
+ (id)_trackCacheKeyWithProtocolName:(id)arg1 selector:(id)arg2;
- (id)trackCacheDict;
- (void)setTrackCacheDict:(id)arg1;
- (void).cxx_destruct;
@end


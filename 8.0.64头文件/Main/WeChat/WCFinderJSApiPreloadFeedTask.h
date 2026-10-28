@interface WCFinderJSApiPreloadFeedTask : NSObject
{
    NSMutableSet * _pending; // +0x8
    NSSet * _faileds; // +0x10
    NSSet * _fetching; // +0x18
    id /* block */ _complete; // +0x20
}
+ (id)taskWithIds:(id)arg1;
- (id)pending;
- (void)setPending:(id)arg1;
- (id)faileds;
- (void)setFaileds:(id)arg1;
- (id)fetching;
- (void)setFetching:(id)arg1;
- (id /* block */)complete;
- (void)setComplete:(id /* block */)arg1;
- (void).cxx_destruct;
@end

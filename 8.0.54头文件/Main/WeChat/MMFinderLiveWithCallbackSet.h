@interface MMFinderLiveWithCallbackSet : NSObject
{
    id /* block */ _callback; // +0x8
    NSMutableSet * _realSet; // +0x10
}
- (id)init;
- (id)values;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg1;
- (id)realSet;
- (void)setRealSet:(id)arg1;
- (void).cxx_destruct;
@end


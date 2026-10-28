@interface WAEJObjectMemoryMgr : NSObject
{
    NSMutableDictionary * _bindingObjects; // +0x8
    long long _frameTick; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)reset;
- (void)addBindingObject:(id)arg1 jsObject:(id)arg2;
- (void)removeBindingObject:(id)arg1 jsObject:(id)arg2;
- (id)getBindingObjects;
@end

@interface MMFinderLiveCSHookItem : NSObject
{
    Class _targetClass; // +0x8
    SEL _selector; // +0x10
    NSString * _tag; // +0x18
    unsigned long long _kind; // +0x20
    unsigned long long _nodeType; // +0x28
}
+ (id)itemWithClass:(Class)arg1 selector:(SEL)arg2 tag:(id)arg3 kind:(unsigned long long)arg4 nodeType:(unsigned long long)arg5;
- (Class)targetClass;
- (void)setTargetClass:(Class)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (id)tag;
- (void)setTag:(id)arg1;
- (unsigned long long)kind;
- (void)setKind:(unsigned long long)arg1;
- (unsigned long long)nodeType;
- (void)setNodeType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

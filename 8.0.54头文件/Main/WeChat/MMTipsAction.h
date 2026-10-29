@interface MMTipsAction : NSObject
{
    NSString * _title; // +0x8
    id _target; // +0x10
    SEL _selector; // +0x18
    id /* block */ _handler; // +0x20
    long long _style; // +0x28
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void).cxx_destruct;
@end


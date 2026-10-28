@interface ZZNPAopEvent : NSObject
{
    NSString * _tag; // +0x8
    id _action; // +0x10
}
+ (id)createWithTag:(id)arg1 action:(id)arg2;
- (id)tag;
- (void)setTag:(id)arg1;
- (id)action;
- (void)setAction:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderActionSet : NSObject
{
    NSMutableSet * _actions; // +0x8
}
- (void)add:(id)arg1 action:(SEL)arg2;
- (void)remove:(id)arg1 action:(SEL)arg2;
- (void)invoke;
- (void)invoke:(id)arg1;
- (void)invoke:(id)arg1 arg2:(id)arg2;
- (id)actions;
- (void)setActions:(id)arg1;
- (void).cxx_destruct;
@end

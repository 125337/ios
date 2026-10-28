@interface YYTransaction : NSObject
{
    id _target; // +0x8
    SEL _selector; // +0x10
}
+ (void)load;
+ (id)transactionWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)commit;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)selector;
- (void)setSelector:(SEL)arg1;
- (void).cxx_destruct;
@end

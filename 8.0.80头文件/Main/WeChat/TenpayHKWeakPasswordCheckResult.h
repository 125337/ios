@interface TenpayHKWeakPasswordCheckResult : NSObject
{
    BOOL _complete; // +0x8
    BOOL _weakPwd; // +0x9
}
- (id)initWithComplete:(BOOL)arg1 weakPwd:(BOOL)arg2;
- (BOOL)isComplete;
- (BOOL)isWeakPwd;
@end

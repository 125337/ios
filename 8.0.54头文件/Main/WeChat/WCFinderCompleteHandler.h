@interface WCFinderCompleteHandler : NSObject
{
    BOOL _success; // +0x8
    BOOL _isCanceled; // +0x9
    id _userInfo; // +0x10
    id /* block */ _completeBlock; // +0x18
}
+ (id)handlerWithComplete:(id /* block */)arg1;
- (void)dealloc;
- (void)commit:(BOOL)arg1 userInfo:(id)arg2;
- (void)_invokeComplete;
- (void)cancel;
- (BOOL)isValid;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id /* block */)completeBlock;
- (void)setCompleteBlock:(id /* block */)arg1;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (void).cxx_destruct;
@end


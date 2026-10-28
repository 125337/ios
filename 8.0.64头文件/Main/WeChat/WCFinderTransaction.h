@interface WCFinderTransaction : NSObject
{
    BOOL _autoCommitWhenDealloc; // +0x8
    id _userInfo; // +0x10
    long long _state; // +0x18
    id _extObj1; // +0x20
    id /* block */ _block; // +0x28
}
+ (id)transactionAction:(id /* block */)arg1 autoCommit:(BOOL)arg2;
+ (id)transactionAction:(id /* block */)arg1;
- (void)dealloc;
- (void)commit:(long long)arg1;
- (void)commit;
- (void)commitCancel;
- (BOOL)isPending;
- (BOOL)isCancel;
- (BOOL)isDone;
- (id)description;
- (id)stringForState:(long long)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (BOOL)autoCommitWhenDealloc;
- (void)setAutoCommitWhenDealloc:(BOOL)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (id)extObj1;
- (void)setExtObj1:(id)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

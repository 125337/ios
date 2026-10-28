@interface WCFinderAction : NSObject
{
    unsigned long long _hashValue; // +0x8
    id _target; // +0x10
    SEL _action; // +0x18
}
+ (id)new:(id)arg1 action:(SEL)arg2;
+ (id)new:(id)arg1 action:(SEL)arg2 detach:(id /* block */)arg3;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (unsigned long long)calculateHash;
- (BOOL)isEqual:(id)arg1;
- (void)invoke;
- (void)invoke:(id)arg1;
- (void)invoke:(id)arg1 arg2:(id)arg2;
- (void)invoke:(id)arg1 arg2:(id)arg2 arg3:(id)arg3;
- (unsigned long long)hashValue;
- (void)setHashValue:(unsigned long long)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (void).cxx_destruct;
@end

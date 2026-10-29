@interface TPPlayerStateWrapper : NSObject
{
    id <ITPPlayerStateWrapperDelegate> _delegate; // +0x8
    unsigned long long _currentState; // +0x10
    unsigned long long _preState; // +0x18
    unsigned long long _currentInnerState; // +0x20
    unsigned long long _preInnerState; // +0x28
}
+ (id)stringForPlayerState:(unsigned long long)arg1;
+ (id)stringForInnerState:(unsigned long long)arg1;
- (void)changeToState:(unsigned long long)arg1;
- (void)changeInnerToState:(unsigned long long)arg1;
- (BOOL)isNormalInnerState;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)currentState;
- (void)setCurrentState:(unsigned long long)arg1;
- (unsigned long long)preState;
- (void)setPreState:(unsigned long long)arg1;
- (unsigned long long)currentInnerState;
- (void)setCurrentInnerState:(unsigned long long)arg1;
- (unsigned long long)preInnerState;
- (void)setPreInnerState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


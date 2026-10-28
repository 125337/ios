@interface MMNoRetainTimerTarget : NSObject
{
    SEL _targetAction; // +0x8
    id _target; // +0x10
}
- (id)initWithTarget:(id)arg1 withAction:(SEL)arg2;
- (void)onNoRetainTimer:(id)arg1;
- (SEL)targetAction;
- (void)setTargetAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (void).cxx_destruct;
@end

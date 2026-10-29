@interface WCAdvertiseOperationLogicBase : MMObject <MMLiteAppHalfScreenStatusChangeListener>
{
    YYWeakProxy * _halfScreenListenerProxy; // +0x8
}
- (void)dealloc;
- (void)startLoadingWithText:(id)arg1 delayAnimation:(double)arg2 autoHideInterval:(double)arg3;
- (void)stopLoading;
- (id)halfScreenStatusChangeListener;
- (void)onCloseAnimEnd;
- (id)halfScreenListenerProxy;
- (void)setHalfScreenListenerProxy:(id)arg1;
- (void).cxx_destruct;
@end

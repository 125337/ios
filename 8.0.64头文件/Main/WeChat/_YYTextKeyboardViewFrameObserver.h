@interface _YYTextKeyboardViewFrameObserver : NSObject
{
    UIView * _keyboardView; // +0x8
    id /* block */ _notifyBlock; // +0x10
}
+ (id)observerForView:(id)arg1;
- (void)addToKeyboardView:(id)arg1;
- (void)removeFrameObserver;
- (void)addFrameObserver;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id /* block */)notifyBlock;
- (void)setNotifyBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

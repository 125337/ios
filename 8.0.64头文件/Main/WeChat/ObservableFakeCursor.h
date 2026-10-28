@interface ObservableFakeCursor : UIView
{
    id _observeTarget; // +0x8
    id _observeObject; // +0x10
    NSString * _keyPath; // +0x18
}
- (void)dealloc;
- (void)registerObserverTarget:(id)arg1 object:(id)arg2 keyPath:(id)arg3;
- (id)observeTarget;
- (id)observeObject;
- (id)keyPath;
- (void).cxx_destruct;
@end

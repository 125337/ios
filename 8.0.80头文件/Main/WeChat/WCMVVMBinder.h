@interface WCMVVMBinder : NSObject
{
    NSMutableDictionary * _keyPathMapping; // +0x8
    NSObject * _viewComponent; // +0x10
}
- (id)initWithViewComponent:(id)arg1;
- (void)dealloc;
- (void)bindViewModelWithKeyPath:(id)arg1 forObservingPropertyKeyPaths:(id)arg2;
- (void)unbindViewModelWithKeyPath:(id)arg1;
- (void)bindViewModelWithSelector:(SEL)arg1 forObservingPropertyKeyPaths:(id)arg2;
- (void)unbindViewModelWithSelector:(SEL)arg1;
- (void)_didChangeViewModelWithVMKeyPath:(id)arg1 fromOldObject:(id)arg2 toNewObject:(id)arg3;
- (void)_viewModel:(id)arg1 didChangeProperty:(id)arg2 fromOldValue:(id)arg3 toNewValue:(id)arg4;
- (id)getObjectFromChange:(id)arg1 forKey:(id)arg2;
- (id)viewComponent;
- (void).cxx_destruct;
@end

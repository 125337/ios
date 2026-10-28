@interface FlutterUndoManagerPlugin : NSObject
{
    id <FlutterUndoManagerDelegate> _undoManagerDelegate; // +0x8
    FlutterViewController * _viewController; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (id)undoManager;
- (void)resetUndoManager;
- (void)registerUndoWithDirection:(long long)arg1;
- (void)registerRedo;
- (void)setUndoState:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
@end

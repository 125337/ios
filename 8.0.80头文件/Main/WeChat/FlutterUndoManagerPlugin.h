@interface FlutterUndoManagerPlugin : NSObject
{
    id <FlutterUndoManagerDelegate> _undoManagerDelegate; // +0x8
    NSUndoManager * _undoManager; // +0x10
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)resetUndoManager;
- (void)registerUndoWithDirection:(long long)arg1;
- (void)registerRedo;
- (void)setUndoState:(id)arg1;
- (id)undoManagerDelegate;
- (id)undoManager;
- (void)setUndoManager:(id)arg1;
- (void).cxx_destruct;
@end

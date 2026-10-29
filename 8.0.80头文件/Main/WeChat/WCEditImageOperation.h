@interface WCEditImageOperation : NSObject
{
    id /* block */ _undoBlock; // +0x8
    id /* block */ _redoBlock; // +0x10
    unsigned long long _operationType; // +0x18
}
- (void)undo;
- (void)redo;
- (id /* block */)undoBlock;
- (void)setUndoBlock:(id /* block */)arg1;
- (id /* block */)redoBlock;
- (void)setRedoBlock:(id /* block */)arg1;
- (unsigned long long)operationType;
- (void)setOperationType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

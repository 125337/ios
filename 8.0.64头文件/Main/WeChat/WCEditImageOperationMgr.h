@interface WCEditImageOperationMgr : NSObject
{
    NSMutableArray * _operations; // +0x8
    long long _currentIndex; // +0x10
}
- (id)init;
- (void)addAnOperaion:(id)arg1;
- (BOOL)canUndo;
- (void)undo;
- (BOOL)canRedo;
- (void)redo;
- (void)undoOperationWithType:(unsigned long long)arg1;
- (id)operations;
- (void)setOperations:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (void).cxx_destruct;
@end

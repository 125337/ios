@interface TXCVideoStreamSnapshot : TXCVideoBindableObject
{
    TXCDispatchQueue * _queue; // +0x8
    NSMutableArray * _snapshotBlocks; // +0x10
}
- (id)initWithQueue:(id)arg1;
- (void)processVideoFrame:(id)arg1 onComplete:(id /* block */)arg2;
- (void)addSnapshotBlocks:(id /* block */)arg1;
- (void)callbackNilOnTimeout:(id /* block */)arg1;
- (void)callbackSnapshotIfNeeded:(__CVBuffer *)arg1;
- (id)queue;
- (id)snapshotBlocks;
- (void).cxx_destruct;
@end


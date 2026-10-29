@interface TXCHardwareVideoFrameSorter : NSObject
{
    unsigned long long _maxNumRefFrames; // +0x8
    NSMutableArray * _waitingArray; // +0x10
    NSMutableArray * _sortedArray; // +0x18
}
- (id)init;
- (void)pushFrameInfo:(id)arg1;
- (id)popSortedFrameInfo;
- (void)dealloc;
- (unsigned long long)maxNumRefFrames;
- (void)setMaxNumRefFrames:(unsigned long long)arg1;
- (id)waitingArray;
- (void)setWaitingArray:(id)arg1;
- (id)sortedArray;
- (void)setSortedArray:(id)arg1;
- (void).cxx_destruct;
@end


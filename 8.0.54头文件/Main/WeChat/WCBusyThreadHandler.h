@interface WCBusyThreadHandler : NSObject
{
    int _size; // +0x8
    int _tailIndex; // +0xc
    NSMutableArray * _cycleArray; // +0x10
    NSLock * _lock; // +0x18
}
- (id)initWithCycleArraySize:(int)arg1;
- (void)recordBusyThreads;
- (id)makeCallTrees;
- (int)size;
- (void)setSize:(int)arg1;
- (int)tailIndex;
- (void)setTailIndex:(int)arg1;
- (id)cycleArray;
- (void)setCycleArray:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end


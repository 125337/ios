@interface WANativeBufferItem : NSObject
{
    NSData * _buffer; // +0x8
    NSMutableArray * _waitingBlock; // +0x10
}
- (id)init;
- (id)initWithLock;
- (id)buffer;
- (void)setBuffer:(id)arg1;
- (id)waitingBlock;
- (void)setWaitingBlock:(id)arg1;
- (void).cxx_destruct;
@end


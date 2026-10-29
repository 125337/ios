@interface WALockItem : NSObject
{
    BOOL _writeLock; // +0x8
    unsigned int _itemId; // +0xc
    unsigned int _block; // +0x10
    unsigned int _workerId; // +0x14
    JSContext * _context; // +0x18
}
- (unsigned int)itemId;
- (void)setItemId:(unsigned int)arg1;
- (BOOL)writeLock;
- (void)setWriteLock:(BOOL)arg1;
- (unsigned int)block;
- (void)setBlock:(unsigned int)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (void).cxx_destruct;
@end


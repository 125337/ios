@interface NSENewSyncKey : NSObject <PBCoding>
{
    NSData * _syncBufferKey; // +0x8
    NSData * _syncUniqKeyBuf; // +0x10
}
+ (void)PBArrayAdd_syncBufferKey;
+ (void)PBArrayAdd_syncUniqKeyBuf;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithSyncBufferKey:(id)arg1 syncUniqKeyBuf:(id)arg2;
- (id)syncBufferKey;
- (void)setSyncBufferKey:(id)arg1;
- (id)syncUniqKeyBuf;
- (void)setSyncUniqKeyBuf:(id)arg1;
- (void).cxx_destruct;
@end

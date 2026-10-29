@interface WCFinderSyncKeyBufHandler : NSObject
{
    NSData * _keyBuf; // +0x8
    id /* block */ _bufferSaveBlock; // +0x10
    id /* block */ _bufferLoadBlock; // +0x18
}
+ (id)handlerForFinderSync;
+ (id)handlerForLbsLifeSync;
- (id)initWithBufferSaver:(id /* block */)arg1 bufferLoader:(id /* block */)arg2;
- (id)getKeyBuffer;
- (id)getKeyBufferForPB;
- (id)getKeyBufferMD5;
- (void)mergeKeyBuffer:(id)arg1;
- (void)reinitKeyBuffer;
- (void)reinitMemoryKeyBuffer;
- (id)keyBuf;
- (void)setKeyBuf:(id)arg1;
- (id /* block */)bufferSaveBlock;
- (void)setBufferSaveBlock:(id /* block */)arg1;
- (id /* block */)bufferLoadBlock;
- (void)setBufferLoadBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end


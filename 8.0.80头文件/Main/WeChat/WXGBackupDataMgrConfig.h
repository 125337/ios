@interface WXGBackupDataMgrConfig : NSObject
{
    unsigned int _oneMediaSize; // +0x8
    long long _maxProducerSize; // +0x10
    long long _maxBufferSize; // +0x18
    long long _maxConsumerSize; // +0x20
}
- (id)init;
- (long long)maxProducerSize;
- (void)setMaxProducerSize:(long long)arg1;
- (long long)maxBufferSize;
- (void)setMaxBufferSize:(long long)arg1;
- (long long)maxConsumerSize;
- (void)setMaxConsumerSize:(long long)arg1;
- (unsigned int)oneMediaSize;
- (void)setOneMediaSize:(unsigned int)arg1;
@end

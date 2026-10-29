@interface WXGBackupMsgMgrConfig : NSObject
{
    unsigned int _msgListMsgCountLimit; // +0x8
    unsigned long long _msgListTotalSizeLimit; // +0x10
    unsigned long long _filterFileSize; // +0x18
    long long _maxProducerSize; // +0x20
    long long _maxBufferSize; // +0x28
    long long _maxConsumerSize; // +0x30
}
- (id)init;
- (id)description;
- (unsigned int)msgListMsgCountLimit;
- (void)setMsgListMsgCountLimit:(unsigned int)arg1;
- (unsigned long long)msgListTotalSizeLimit;
- (void)setMsgListTotalSizeLimit:(unsigned long long)arg1;
- (unsigned long long)filterFileSize;
- (void)setFilterFileSize:(unsigned long long)arg1;
- (long long)maxProducerSize;
- (void)setMaxProducerSize:(long long)arg1;
- (long long)maxBufferSize;
- (void)setMaxBufferSize:(long long)arg1;
- (long long)maxConsumerSize;
- (void)setMaxConsumerSize:(long long)arg1;
@end

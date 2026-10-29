@interface TPAssetResourceLoadingDataRequest : NSObject
{
    BOOL _requestsAllDataToEndOfResource; // +0x8
    int _requestNum; // +0xc
    int _taskId; // +0x10
    long long _requestedOffset; // +0x18
    long long _requestedLength; // +0x20
    long long _currentOffset; // +0x28
    NSRecursiveLock * _recursiveLock; // +0x30
    NSString * _nsDataWritePath; // +0x38
    NSString * _fileName; // +0x40
    unsigned long long _fileLen; // +0x48
    long long _realOffset; // +0x50
    TPWorkerQueue * _dataWriteQueue; // +0x58
    id <TPAssetResourceLoadingDataRequestDelegate> _delegate; // +0x60
}
- (id)initWithOffset:(long long)arg1 length:(long long)arg2 endOfResource:(BOOL)arg3;
- (void)setDataWritePath:(id)arg1;
- (void)setDataWriteQueue:(id)arg1;
- (void)setDataRequestNum:(int)arg1;
- (void)setTaskId:(int)arg1;
- (id)getFileName;
- (void)setFileName:(id)arg1;
- (void)setDataRequestDelegate:(id)arg1;
- (void)setRequestedLength:(long long)arg1;
- (id)recursiveLock;
- (long long)currentOffset;
- (void)respondWithData:(id)arg1;
- (void)notifyDataReady:(long long)arg1 length:(unsigned long long)arg2;
- (id)description;
- (long long)requestedOffset;
- (long long)requestedLength;
- (BOOL)requestsAllDataToEndOfResource;
- (void)setCurrentOffset:(long long)arg1;
- (void)setRecursiveLock:(id)arg1;
- (id)nsDataWritePath;
- (void)setNsDataWritePath:(id)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (unsigned long long)fileLen;
- (void)setFileLen:(unsigned long long)arg1;
- (int)requestNum;
- (void)setRequestNum:(int)arg1;
- (int)taskId;
- (void)setTaskId:(int)arg1;
- (long long)realOffset;
- (void)setRealOffset:(long long)arg1;
- (id)dataWriteQueue;
- (void)setDataWriteQueue:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

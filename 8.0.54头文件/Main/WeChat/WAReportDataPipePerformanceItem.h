@interface WAReportDataPipePerformanceItem : WAReportBaseItem
{
    BOOL _isConcurrent; // +0x8
    BOOL _needConfirm; // +0x9
    unsigned int _publibVersion; // +0xc
    unsigned int _dataLengthInBytes; // +0x10
    unsigned int _currentQueueNum; // +0x14
    unsigned long long _enqueueTimeInMs; // +0x18
    unsigned long long _dequeueTimeInMs; // +0x20
    unsigned long long _queueWaitTimeInMs; // +0x28
    unsigned long long _confirmTimeInMs; // +0x30
    unsigned long long _confirmResponseTimeInMs; // +0x38
    unsigned long long _dataResponseTimeInMs; // +0x40
    unsigned long long _requestTotalTimeInMs; // +0x48
}
- (int)reportID;
- (id)reportString;
- (unsigned int)publibVersion;
- (void)setPublibVersion:(unsigned int)arg1;
- (BOOL)isConcurrent;
- (void)setIsConcurrent:(BOOL)arg1;
- (unsigned int)dataLengthInBytes;
- (void)setDataLengthInBytes:(unsigned int)arg1;
- (unsigned int)currentQueueNum;
- (void)setCurrentQueueNum:(unsigned int)arg1;
- (unsigned long long)enqueueTimeInMs;
- (void)setEnqueueTimeInMs:(unsigned long long)arg1;
- (unsigned long long)dequeueTimeInMs;
- (void)setDequeueTimeInMs:(unsigned long long)arg1;
- (unsigned long long)queueWaitTimeInMs;
- (void)setQueueWaitTimeInMs:(unsigned long long)arg1;
- (BOOL)needConfirm;
- (void)setNeedConfirm:(BOOL)arg1;
- (unsigned long long)confirmTimeInMs;
- (void)setConfirmTimeInMs:(unsigned long long)arg1;
- (unsigned long long)confirmResponseTimeInMs;
- (void)setConfirmResponseTimeInMs:(unsigned long long)arg1;
- (unsigned long long)dataResponseTimeInMs;
- (void)setDataResponseTimeInMs:(unsigned long long)arg1;
- (unsigned long long)requestTotalTimeInMs;
- (void)setRequestTotalTimeInMs:(unsigned long long)arg1;
@end


@interface WXGBackupDataMgr : NSObject
{
    BOOL _bPurgeMediaInPath; // +0x8
    BOOL _bSupportFilterFile; // +0x9
    BOOL _bProducing; // +0xa
    id <WXGBackupDataMgrDelegate> _delegate; // +0x10
    unsigned long long _produceSessionCount; // +0x18
    unsigned long long _produceMsgCount; // +0x20
    WXGBackupMgrAnalyseInfo * _analyseInfo; // +0x28
    WXGBackupDataMgrConfig * _dataMgrConfig; // +0x30
    NSMutableArray * _backupInfoDataArray; // +0x38
    NSLock * _backupInfoLock; // +0x40
    WXGBackupMsgMgr * _msgMgr; // +0x48
    NSCondition * _conditionBuffer; // +0x50
    NSMutableArray * _producerArray; // +0x58
    NSMutableArray * _consumeArray; // +0x60
    NSMutableArray * _bufferArray; // +0x68
    NSObject<OS_dispatch_queue> * _getDataQueue; // +0x70
    unsigned long long _consumerWait; // +0x78
    unsigned long long _producerWait; // +0x80
    long long _producerSize; // +0x88
    long long _bufferSize; // +0x90
    long long _consumerSize; // +0x98
    NSData * _encryptKey; // +0xa0
    NSObject<OS_dispatch_semaphore> * _waitFilterSemaphore; // +0xa8
    PacketFilterResponse * _filterResponse; // +0xb0
    double _waitFilterStartTime; // +0xb8
}
- (void)dealloc;
- (id)init;
- (id)initWithEncrytKey:(id)arg1;
- (void)inputWithBackupDataInfo:(id)arg1;
- (id)getNextOutput;
- (void)startProduce;
- (void)stopProduce;
- (void)filterFileWithResponse:(id)arg1;
- (void)purgeMedia:(id)arg1 outputPath:(BOOL)arg2 filterMedia:(id)arg3;
- (void)purgeMsgList:(id)arg1;
- (void)purgeTag:(id)arg1;
- (void)p_producerAddOutput:(id)arg1;
- (void)p_producerAddDataToBuffer;
- (void)p_bufferAddDataToConsumer;
- (id)p_getDataFromConsumer;
- (int)p_getSizeOfBakcupOutput:(id)arg1;
- (void)p_addMsgCount:(unsigned int)arg1 chatName:(id)arg2;
- (void)p_addMediaType:(unsigned int)arg1 chatName:(id)arg2 mediaSize:(unsigned long long)arg3;
- (void)p_addFilterMediaForChatName:(id)arg1 mediaSize:(unsigned long long)arg2 mediaType:(unsigned int)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bPurgeMediaInPath;
- (void)setBPurgeMediaInPath:(BOOL)arg1;
- (BOOL)bSupportFilterFile;
- (void)setBSupportFilterFile:(BOOL)arg1;
- (unsigned long long)produceSessionCount;
- (void)setProduceSessionCount:(unsigned long long)arg1;
- (unsigned long long)produceMsgCount;
- (void)setProduceMsgCount:(unsigned long long)arg1;
- (id)analyseInfo;
- (void)setAnalyseInfo:(id)arg1;
- (id)dataMgrConfig;
- (void)setDataMgrConfig:(id)arg1;
- (id)backupInfoDataArray;
- (void)setBackupInfoDataArray:(id)arg1;
- (id)backupInfoLock;
- (void)setBackupInfoLock:(id)arg1;
- (id)msgMgr;
- (void)setMsgMgr:(id)arg1;
- (BOOL)bProducing;
- (void)setBProducing:(BOOL)arg1;
- (id)conditionBuffer;
- (void)setConditionBuffer:(id)arg1;
- (id)producerArray;
- (void)setProducerArray:(id)arg1;
- (id)consumeArray;
- (void)setConsumeArray:(id)arg1;
- (id)bufferArray;
- (void)setBufferArray:(id)arg1;
- (id)getDataQueue;
- (void)setGetDataQueue:(id)arg1;
- (unsigned long long)consumerWait;
- (void)setConsumerWait:(unsigned long long)arg1;
- (unsigned long long)producerWait;
- (void)setProducerWait:(unsigned long long)arg1;
- (long long)producerSize;
- (void)setProducerSize:(long long)arg1;
- (long long)bufferSize;
- (void)setBufferSize:(long long)arg1;
- (long long)consumerSize;
- (void)setConsumerSize:(long long)arg1;
- (id)encryptKey;
- (void)setEncryptKey:(id)arg1;
- (id)waitFilterSemaphore;
- (void)setWaitFilterSemaphore:(id)arg1;
- (id)filterResponse;
- (void)setFilterResponse:(id)arg1;
- (double)waitFilterStartTime;
- (void)setWaitFilterStartTime:(double)arg1;
- (void).cxx_destruct;
@end


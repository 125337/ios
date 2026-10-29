@interface WXGBackupMsgMgr : NSObject
{
    BOOL _bSupportFilterFile; // +0x8
    BOOL _bProducing; // +0x9
    WXGBackupMsgMgrConfig * _msgMgrConfig; // +0x10
    NSObject<OS_dispatch_queue> * _getMsgQueue; // +0x18
    NSMutableArray * _inputData; // +0x20
    NSLock * _inputDataLock; // +0x28
    WXGBackupMMDB * _backupDB; // +0x30
    NSCondition * _bufferCondition; // +0x38
    NSMutableArray * _bufferArray; // +0x40
    NSMutableArray * _producerArray; // +0x48
    NSMutableArray * _consumerArray; // +0x50
    unsigned long long _consumerWait; // +0x58
    unsigned long long _producerWait; // +0x60
    WXGBackupMessageWrapHandler * _msgWrapHandler; // +0x68
    BakChatMsgList * _currentMsgList; // +0x70
    NSMutableArray * _currentMsgWrapList; // +0x78
    unsigned long long _currentMediaDataSize; // +0x80
    NSMutableArray * _currentMediaArray; // +0x88
    NSMutableArray * _currentBigMediaArray; // +0x90
    long long _producerSize; // +0x98
    long long _bufferSize; // +0xa0
    long long _consumerSize; // +0xa8
}
- (id)init;
- (void)inputWithBackupDataInfo:(id)arg1;
- (id)getNextOutput;
- (void)startProduce;
- (void)stopProduce;
- (void)p_addInputDataWithBackupInfoArray:(id)arg1;
- (id)p_getOneBackupDataInfoAndDelete;
- (void)getMsgForBackupDataInfo:(id)arg1;
- (void)p_purgeMsgListDataInfoWithChatName:(id)arg1 withStartTime:(long long)arg2 withEndTime:(long long)arg3;
- (void)p_producerAddDataToBuffer;
- (void)p_bufferAddDataToConsume;
- (id)p_getDataFromCosumer;
- (BOOL)isBakChatMessage:(id)arg1 limitMsgType:(id)arg2 filterForChatSync:(BOOL)arg3;
- (BOOL)p_isBakChatMessage:(id)arg1 limitMsgType:(id)arg2;
- (BOOL)p_isBakChatMessage:(id)arg1;
- (BOOL)bSupportFilterFile;
- (void)setBSupportFilterFile:(BOOL)arg1;
- (id)msgMgrConfig;
- (void)setMsgMgrConfig:(id)arg1;
- (BOOL)bProducing;
- (void)setBProducing:(BOOL)arg1;
- (id)getMsgQueue;
- (void)setGetMsgQueue:(id)arg1;
- (id)inputData;
- (void)setInputData:(id)arg1;
- (id)inputDataLock;
- (void)setInputDataLock:(id)arg1;
- (id)backupDB;
- (void)setBackupDB:(id)arg1;
- (id)bufferCondition;
- (void)setBufferCondition:(id)arg1;
- (id)bufferArray;
- (void)setBufferArray:(id)arg1;
- (id)producerArray;
- (void)setProducerArray:(id)arg1;
- (id)consumerArray;
- (void)setConsumerArray:(id)arg1;
- (unsigned long long)consumerWait;
- (void)setConsumerWait:(unsigned long long)arg1;
- (unsigned long long)producerWait;
- (void)setProducerWait:(unsigned long long)arg1;
- (id)msgWrapHandler;
- (void)setMsgWrapHandler:(id)arg1;
- (id)currentMsgList;
- (void)setCurrentMsgList:(id)arg1;
- (id)currentMsgWrapList;
- (void)setCurrentMsgWrapList:(id)arg1;
- (unsigned long long)currentMediaDataSize;
- (void)setCurrentMediaDataSize:(unsigned long long)arg1;
- (id)currentMediaArray;
- (void)setCurrentMediaArray:(id)arg1;
- (id)currentBigMediaArray;
- (void)setCurrentBigMediaArray:(id)arg1;
- (long long)producerSize;
- (void)setProducerSize:(long long)arg1;
- (long long)bufferSize;
- (void)setBufferSize:(long long)arg1;
- (long long)consumerSize;
- (void)setConsumerSize:(long long)arg1;
- (void).cxx_destruct;
@end


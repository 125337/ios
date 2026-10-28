@interface UploadStreamVoiceDataMgr : MMObject <PBMessageObserverDelegate>
{
    unsigned int _addTaskCount; // +0x8
    unsigned int _uploadTaskCount; // +0xc
    NSDate * m_dtStopRecordTime; // +0x10
    NSMutableSet * m_setEndFlagList; // +0x18
    BOOL m_bCheckTransResult; // +0x20
    BOOL m_bReportEnd; // +0x21
    BOOL _useBackendEVAD; // +0x22
    BOOL _canShowSimplifyButton; // +0x23
    float _transTimeoutInsec; // +0x24
    unsigned int _currentInputId; // +0x28
    unsigned int _maxPacketSize; // +0x2c
    unsigned int _languageType; // +0x30
    unsigned int _cgiTotalTimeOut; // +0x34
    unsigned int _cgiRetryCount; // +0x38
    id <UploadStreamVoiceDataMgrDelegate> _delegate; // +0x40
    long long _scene; // +0x48
    NSData * _extraData; // +0x50
    NSString * _simplifyButtonText; // +0x58
    NSString * _cancelSimplifyButtonText; // +0x60
    MMTimer * _checkUploadQueueTimer; // +0x68
    NSMutableArray * _runningQueue; // +0x70
    NSMutableArray * _waitingQueue; // +0x78
    unsigned long long _nextCheckResultTime; // +0x80
    double _uploadInterval; // +0x88
    NSMutableSet * _processingVoiceIds; // +0x90
    NSMutableDictionary * _sequenceMap; // +0x98
    NSString * _lastVoiceId; // +0xa0
    NSData * _lastBuffer; // +0xa8
}
+ (BOOL)voiceMsgNewCgi;
- (id)init;
- (void)setScene:(long long)arg1;
- (void)dealloc;
- (void)Start:(unsigned int)arg1;
- (void)Stop;
- (void)AddNewPart:(id)arg1;
- (void)ClearLastUploadData;
- (void)notifyRecordStop;
- (void)resetUploadTimer;
- (void)safeStopUploadTimer;
- (void)stopUploadTask;
- (BOOL)canMergeItem:(id)arg1 withItem:(id)arg2;
- (void)mergeItem:(id)arg1 withItem:(id)arg2;
- (void)addItem:(id)arg1;
- (void)addVoiceIdToProcessingQueue:(id)arg1;
- (void)checkUploadQueue;
- (void)stopUploadTaskWithErr:(int)arg1;
- (void)onCgiError:(long long)arg1 ret:(long long)arg2 isResposeEmpty:(BOOL)arg3;
- (BOOL)tryAddNewUploadTask;
- (BOOL)useNewCgi;
- (BOOL)doUpload:(id)arg1;
- (BOOL)_doUploadNew:(id)arg1;
- (BOOL)_doUpload:(id)arg1;
- (void)RemoveFromRunningQueueForSeq:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkUploadResultWithInterval:(int)arg1;
- (void)handleVoiceRecognizeResponse:(id)arg1;
- (void)handleVoiceTransResponse:(id)arg1;
- (unsigned int)genSquenceByVoiceId:(id)arg1;
- (BOOL)useBackendEVAD;
- (void)setUseBackendEVAD:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)scene;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (float)transTimeoutInsec;
- (void)setTransTimeoutInsec:(float)arg1;
- (BOOL)canShowSimplifyButton;
- (id)simplifyButtonText;
- (id)cancelSimplifyButtonText;
- (id)checkUploadQueueTimer;
- (void)setCheckUploadQueueTimer:(id)arg1;
- (id)runningQueue;
- (void)setRunningQueue:(id)arg1;
- (id)waitingQueue;
- (void)setWaitingQueue:(id)arg1;
- (unsigned int)currentInputId;
- (void)setCurrentInputId:(unsigned int)arg1;
- (unsigned int)maxPacketSize;
- (void)setMaxPacketSize:(unsigned int)arg1;
- (unsigned int)languageType;
- (void)setLanguageType:(unsigned int)arg1;
- (unsigned long long)nextCheckResultTime;
- (void)setNextCheckResultTime:(unsigned long long)arg1;
- (double)uploadInterval;
- (void)setUploadInterval:(double)arg1;
- (id)processingVoiceIds;
- (void)setProcessingVoiceIds:(id)arg1;
- (id)sequenceMap;
- (void)setSequenceMap:(id)arg1;
- (id)lastVoiceId;
- (void)setLastVoiceId:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned int)cgiTotalTimeOut;
- (void)setCgiTotalTimeOut:(unsigned int)arg1;
- (unsigned int)cgiRetryCount;
- (void)setCgiRetryCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

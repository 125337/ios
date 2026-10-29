@interface RingToneProduceReporter_38015 : KvReportBaseItem
{
    BOOL _downloadHitCache; // +0x8
    BOOL _isSuccess; // +0x9
    unsigned int _downloadCostMs; // +0xc
    unsigned int _cropCostMs; // +0x10
    unsigned int _copySoundsCostMs; // +0x14
    unsigned int _totalCostMs; // +0x18
    NSString * _ringID; // +0x20
    unsigned long long _feedType; // +0x28
    unsigned long long _usageRange; // +0x30
    unsigned long long _trigger; // +0x38
    unsigned long long _downloadedFileSize; // +0x40
    unsigned long long _croppedFileSize; // +0x48
    unsigned long long _soundsFileSize; // +0x50
    unsigned long long _finalStage; // +0x58
    long long _errorCode; // +0x60
    unsigned long long _ringType; // +0x68
    unsigned long long _ringDuration; // +0x70
    unsigned long long _currentNetType; // +0x78
    unsigned long long _flowStartTs; // +0x80
    unsigned long long _lastStageEndTs; // +0x88
}
- (unsigned int)reportKvId;
- (unsigned int)reportNSStringPreprocessType;
- (id)reportOrderedFieldNameArr;
- (void)markFlowStart;
- (void)markStageEnd:(unsigned long long)arg1;
- (void)recordFileSize:(unsigned long long)arg1 forStage:(unsigned long long)arg2;
- (void)resolveRingTypeFromPath:(id)arg1;
- (void)configureWithRing:(id)arg1;
- (void)reportFailureWithError:(id)arg1 atStage:(unsigned long long)arg2;
- (void)reportSuccess;
- (id)ringID;
- (void)setRingID:(id)arg1;
- (unsigned long long)feedType;
- (void)setFeedType:(unsigned long long)arg1;
- (unsigned long long)usageRange;
- (void)setUsageRange:(unsigned long long)arg1;
- (unsigned long long)trigger;
- (void)setTrigger:(unsigned long long)arg1;
- (unsigned int)downloadCostMs;
- (void)setDownloadCostMs:(unsigned int)arg1;
- (unsigned int)cropCostMs;
- (void)setCropCostMs:(unsigned int)arg1;
- (unsigned int)copySoundsCostMs;
- (void)setCopySoundsCostMs:(unsigned int)arg1;
- (unsigned int)totalCostMs;
- (void)setTotalCostMs:(unsigned int)arg1;
- (unsigned long long)downloadedFileSize;
- (void)setDownloadedFileSize:(unsigned long long)arg1;
- (unsigned long long)croppedFileSize;
- (void)setCroppedFileSize:(unsigned long long)arg1;
- (unsigned long long)soundsFileSize;
- (void)setSoundsFileSize:(unsigned long long)arg1;
- (BOOL)downloadHitCache;
- (void)setDownloadHitCache:(BOOL)arg1;
- (unsigned long long)finalStage;
- (void)setFinalStage:(unsigned long long)arg1;
- (BOOL)isSuccess;
- (void)setIsSuccess:(BOOL)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (unsigned long long)ringType;
- (void)setRingType:(unsigned long long)arg1;
- (unsigned long long)ringDuration;
- (void)setRingDuration:(unsigned long long)arg1;
- (unsigned long long)currentNetType;
- (void)setCurrentNetType:(unsigned long long)arg1;
- (unsigned long long)flowStartTs;
- (void)setFlowStartTs:(unsigned long long)arg1;
- (unsigned long long)lastStageEndTs;
- (void)setLastStageEndTs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

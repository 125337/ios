@interface WCFinderShareLoadCycle : NSObject
{
    BOOL _completed; // +0x8
    BOOL _sourceFailed; // +0x9
    BOOL _reported; // +0xa
    unsigned int _loadingTimeMs; // +0xc
    unsigned long long _identifier; // +0x10
    unsigned long long _footerExposureTime; // +0x18
    unsigned long long _status; // +0x20
    NSString * _reason; // +0x28
    NSData * _debugMessage; // +0x30
    unsigned long long _pendingSources; // +0x38
}
- (id)initWithIdentifier:(unsigned long long)arg1;
- (BOOL)isEnter;
- (void)addPendingSource:(unsigned long long)arg1;
- (void)completeSource:(unsigned long long)arg1 ready:(BOOL)arg2 success:(BOOL)arg3 timestamp:(unsigned long long)arg4 reason:(id)arg5;
- (void)markFooterExposureAtTimestamp:(unsigned long long)arg1;
- (void)finishWithStatus:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 reason:(id)arg3;
- (BOOL)takeReport;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (unsigned long long)footerExposureTime;
- (void)setFooterExposureTime:(unsigned long long)arg1;
- (unsigned int)loadingTimeMs;
- (void)setLoadingTimeMs:(unsigned int)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (id)debugMessage;
- (void)setDebugMessage:(id)arg1;
- (unsigned long long)pendingSources;
- (void)setPendingSources:(unsigned long long)arg1;
- (BOOL)sourceFailed;
- (void)setSourceFailed:(BOOL)arg1;
- (BOOL)reported;
- (void)setReported:(BOOL)arg1;
- (void).cxx_destruct;
@end

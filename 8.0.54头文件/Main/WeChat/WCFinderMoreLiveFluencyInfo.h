@interface WCFinderMoreLiveFluencyInfo : NSObject
{
    unsigned long long _enterTimestamp; // +0x8
    unsigned long long _getLiveTabsFinishTimestamp; // +0x10
    ProtobufCGIProfile * _cgiProfile; // +0x18
    long long _startScene; // +0x20
    unsigned long long _finishScene; // +0x28
    unsigned long long _pullStreamCGITimestamp; // +0x30
    unsigned long long _pullCGIFinishTimestamp; // +0x38
    unsigned long long _uiStartLoadingTimestamp; // +0x40
    unsigned long long _uiFinishLoadingTimestamp; // +0x48
    NSData * _debugMessage; // +0x50
    unsigned long long _localOperationFinishTimestamp; // +0x58
    unsigned long long _showUIFinishTimestamp; // +0x60
}
- (id)genFluencyInfo;
- (BOOL)isReadyForReporting;
- (void)clear;
- (unsigned long long)globalInitTime;
- (unsigned long long)pullCGITime;
- (BOOL)setDebugMessageIfCan:(id)arg1;
- (unsigned long long)localOperationTime;
- (unsigned long long)showUITime;
- (BOOL)setUIStartLoadingTimeIfCan:(unsigned long long)arg1;
- (BOOL)setUIFinishLoadingTimeIfCan:(unsigned long long)arg1;
- (unsigned long long)totalTime;
- (unsigned long long)loadingTime;
- (BOOL)setStartSceneIfCan:(long long)arg1;
- (BOOL)setFinishSceneIfCan:(unsigned long long)arg1;
- (BOOL)setEnterTimestampIfCan:(unsigned long long)arg1;
- (BOOL)setPullStreamCGITimeIfCan:(unsigned long long)arg1;
- (BOOL)setPullCGIFinishTimeIfCan:(unsigned long long)arg1;
- (BOOL)setPullCGIFinishProfileIfCan:(id)arg1;
- (BOOL)setLocalOperationFinishTimeIfCan:(unsigned long long)arg1;
- (BOOL)setShowUIFinishTimeIfCan:(unsigned long long)arg1;
- (BOOL)setGetLiveTabCGIFinishTimeIfCan:(unsigned long long)arg1;
- (unsigned long long)enterTimestamp;
- (void)setEnterTimestamp:(unsigned long long)arg1;
- (unsigned long long)getLiveTabsFinishTimestamp;
- (void)setGetLiveTabsFinishTimestamp:(unsigned long long)arg1;
- (id)cgiProfile;
- (void)setCgiProfile:(id)arg1;
- (long long)startScene;
- (void)setStartScene:(long long)arg1;
- (unsigned long long)finishScene;
- (void)setFinishScene:(unsigned long long)arg1;
- (unsigned long long)pullStreamCGITimestamp;
- (void)setPullStreamCGITimestamp:(unsigned long long)arg1;
- (unsigned long long)pullCGIFinishTimestamp;
- (void)setPullCGIFinishTimestamp:(unsigned long long)arg1;
- (unsigned long long)uiStartLoadingTimestamp;
- (void)setUiStartLoadingTimestamp:(unsigned long long)arg1;
- (unsigned long long)uiFinishLoadingTimestamp;
- (void)setUiFinishLoadingTimestamp:(unsigned long long)arg1;
- (id)debugMessage;
- (void)setDebugMessage:(id)arg1;
- (unsigned long long)localOperationFinishTimestamp;
- (void)setLocalOperationFinishTimestamp:(unsigned long long)arg1;
- (unsigned long long)showUIFinishTimestamp;
- (void)setShowUIFinishTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


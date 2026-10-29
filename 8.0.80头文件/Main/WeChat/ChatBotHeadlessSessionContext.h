@interface ChatBotHeadlessSessionContext : NSObject
{
    BOOL _shouldRestoreAppBypass; // +0x8
    BOOL _isExternalSession; // +0x9
    BOOL _halfScreenPresented; // +0xa
    BOOL _waitingForOpenMicSuccess; // +0xb
    BOOL _micMuted; // +0xc
    BOOL _expectFollowUpFunctionCall; // +0xd
    BOOL _longPressSuccReported; // +0xe
    int _appUiState; // +0x10
    ChatBotVoIPSession * _session; // +0x18
    ChatBotHeadlessSessionDelegate * _delegate; // +0x20
    id /* block */ _enterRoomCallback; // +0x28
    id /* block */ _resultBlock; // +0x30
    NSData * _originalAppBypassData; // +0x38
    ChatBotBaseVoIPViewController * _preCreatedHalfScreenVC; // +0x40
    id /* block */ _presentVCBlock; // +0x48
    id /* block */ _halfScreenDecisionHandler; // +0x50
    long long _lastQueryId; // +0x58
    NSString * _lastTraceId; // +0x60
    NSString * _askXiaoweiSrcInfo; // +0x68
    ChatBotHeadlessChainCostTracker * _chainCost; // +0x70
}
- (id)session;
- (void)setSession:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)enterRoomCallback;
- (void)setEnterRoomCallback:(id /* block */)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (int)appUiState;
- (void)setAppUiState:(int)arg1;
- (id)originalAppBypassData;
- (void)setOriginalAppBypassData:(id)arg1;
- (BOOL)shouldRestoreAppBypass;
- (void)setShouldRestoreAppBypass:(BOOL)arg1;
- (BOOL)isExternalSession;
- (void)setIsExternalSession:(BOOL)arg1;
- (id)preCreatedHalfScreenVC;
- (void)setPreCreatedHalfScreenVC:(id)arg1;
- (id /* block */)presentVCBlock;
- (void)setPresentVCBlock:(id /* block */)arg1;
- (BOOL)halfScreenPresented;
- (void)setHalfScreenPresented:(BOOL)arg1;
- (BOOL)waitingForOpenMicSuccess;
- (void)setWaitingForOpenMicSuccess:(BOOL)arg1;
- (BOOL)micMuted;
- (void)setMicMuted:(BOOL)arg1;
- (id /* block */)halfScreenDecisionHandler;
- (void)setHalfScreenDecisionHandler:(id /* block */)arg1;
- (BOOL)expectFollowUpFunctionCall;
- (void)setExpectFollowUpFunctionCall:(BOOL)arg1;
- (long long)lastQueryId;
- (void)setLastQueryId:(long long)arg1;
- (id)lastTraceId;
- (void)setLastTraceId:(id)arg1;
- (id)askXiaoweiSrcInfo;
- (void)setAskXiaoweiSrcInfo:(id)arg1;
- (BOOL)longPressSuccReported;
- (void)setLongPressSuccReported:(BOOL)arg1;
- (id)chainCost;
- (void)setChainCost:(id)arg1;
- (void).cxx_destruct;
@end

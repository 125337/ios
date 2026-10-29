@interface CameraScanCodeVerifier : NSObject
{
    BOOL _rejectCrossSessionEnabled; // +0x8
    BOOL _rejectDuplicateConsumeEnabled; // +0x9
    unsigned int _uiSessionId; // +0xc
    unsigned long long _currentSessionId; // +0x10
    NSString * _resultSourceList; // +0x18
    NSString * _resultOriginFrameList; // +0x20
}
- (BOOL)startSessionWithId:(unsigned long long)arg1 uiSessionId:(unsigned int)arg2;
- (vector<QBAR_INFO, std::allocator<QBAR_INFO>>)verifyResults:(const void *)arg1 totalFrames:(unsigned int)arg2;
- (void)reportVerifyResult:(id)arg1 totalFrames:(unsigned int)arg2;
- (unsigned long long)currentSessionId;
- (void)setCurrentSessionId:(unsigned long long)arg1;
- (id)resultSourceList;
- (void)setResultSourceList:(id)arg1;
- (id)resultOriginFrameList;
- (void)setResultOriginFrameList:(id)arg1;
- (unsigned int)uiSessionId;
- (void)setUiSessionId:(unsigned int)arg1;
- (BOOL)rejectCrossSessionEnabled;
- (void)setRejectCrossSessionEnabled:(BOOL)arg1;
- (BOOL)rejectDuplicateConsumeEnabled;
- (void)setRejectDuplicateConsumeEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

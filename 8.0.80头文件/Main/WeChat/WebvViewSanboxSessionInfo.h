@interface WebvViewSanboxSessionInfo : MMObject
{
    BOOL _hasInjectSessionOpenTagFrame; // +0x8
    NSString * _sanboxId; // +0x10
    NSString * _sanboxUrl; // +0x18
    NSString * _verifyAppId; // +0x20
    NSString * _debugConfigHost; // +0x28
    NSMutableDictionary * _dictSandboxAppTask; // +0x30
    NSMutableDictionary * _dictWebComInfos; // +0x38
    unsigned long long _performance_evalMainFrameTagsJsBeginTs; // +0x40
    unsigned long long _performance_evalMainFrameTagsJsEndTs; // +0x48
    WebvViewWebComPublicLibInfo * _sessionPublicInfo; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)releaseSession;
- (void)onSessionResume;
- (id)tryGenAndGetNewSessionPublicInfo;
- (id)sanboxId;
- (void)setSanboxId:(id)arg1;
- (id)sanboxUrl;
- (void)setSanboxUrl:(id)arg1;
- (id)verifyAppId;
- (void)setVerifyAppId:(id)arg1;
- (BOOL)hasInjectSessionOpenTagFrame;
- (void)setHasInjectSessionOpenTagFrame:(BOOL)arg1;
- (id)debugConfigHost;
- (void)setDebugConfigHost:(id)arg1;
- (id)dictSandboxAppTask;
- (void)setDictSandboxAppTask:(id)arg1;
- (id)dictWebComInfos;
- (void)setDictWebComInfos:(id)arg1;
- (unsigned long long)performance_evalMainFrameTagsJsBeginTs;
- (void)setPerformance_evalMainFrameTagsJsBeginTs:(unsigned long long)arg1;
- (unsigned long long)performance_evalMainFrameTagsJsEndTs;
- (void)setPerformance_evalMainFrameTagsJsEndTs:(unsigned long long)arg1;
- (id)sessionPublicInfo;
- (void)setSessionPublicInfo:(id)arg1;
- (void).cxx_destruct;
@end

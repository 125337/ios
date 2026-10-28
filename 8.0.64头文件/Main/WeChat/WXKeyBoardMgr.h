@interface WXKeyBoardMgr : MMUserService <MMServiceProtocol>
{
    void * _sharedFile; // +0x8
    MMWormhole * _wormhole; // +0x10
    id <WXKeyBoardActiveReceiver> _receiver; // +0x18
    NSString * _sessionId; // +0x20
    NSSet * _supportMessageTypes; // +0x28
}
+ (id)sharedFilePath;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)setActiveReceiver:(id)arg1;
- (BOOL)isInstalled;
- (unsigned int)installState;
- (BOOL)isFunctionOn;
- (void)handleRequireAbility:(id)arg1;
- (void)handleCommunicateData:(id)arg1;
- (void)handleMessageAction:(id)arg1;
- (void)handleSnsAction:(id)arg1;
- (id)getContext;
- (void)syncSharedFile;
- (void)onInputModeDidChange:(id)arg1;
- (id)wormhole;
- (void)setWormhole:(id)arg1;
- (id)receiver;
- (void)setReceiver:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)supportMessageTypes;
- (void)setSupportMessageTypes:(id)arg1;
- (void).cxx_destruct;
@end

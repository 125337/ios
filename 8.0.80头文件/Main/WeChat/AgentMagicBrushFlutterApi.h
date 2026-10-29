@interface AgentMagicBrushFlutterApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onCardReadyContainerId:(long long)arg1 textureId:(long long)arg2 width:(double)arg3 height:(double)arg4 completion:(id /* block */)arg5;
- (void)onSizeChangedContainerId:(long long)arg1 width:(double)arg2 height:(double)arg3 completion:(id /* block */)arg4;
- (void)onTextureSizeChangedContainerId:(long long)arg1 width:(double)arg2 height:(double)arg3 completion:(id /* block */)arg4;
- (void)onErrorError:(id)arg1 completion:(id /* block */)arg2;
- (void)onUpstreamMessageMethod:(id)arg1 params:(id)arg2 sessionId:(id)arg3 appId:(id)arg4 voipSessionID:(id)arg5 completion:(id /* block */)arg6;
- (void)onFollowupMessageText:(id)arg1 containerId:(long long)arg2 sessionId:(id)arg3 method:(id)arg4 params:(id)arg5 appId:(id)arg6 source:(id)arg7 voipSessionID:(id)arg8 completion:(id /* block */)arg9;
- (void)onCoverViewComponentStateChangedContainerId:(long long)arg1 hasComponents:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onCardExpiredContainerId:(long long)arg1 expiredText:(id)arg2 completion:(id /* block */)arg3;
- (void)onUpdateCardRelatedPageContainerId:(long long)arg1 appId:(id)arg2 path:(id)arg3 envVersion:(id)arg4 completion:(id /* block */)arg5;
- (void)onCardRenderedContainerId:(long long)arg1 completion:(id /* block */)arg2;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end

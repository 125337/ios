@interface BrandServiceCallbackApi : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onConversationChangeWithCompletion:(id /* block */)arg1;
- (void)onNotifyFlutterDeleteUserName:(id)arg1 completion:(id /* block */)arg2;
- (void)onUpdateTemplateMsgScopeGlobalRecvUsername:(id)arg1 isGlobalRecv:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onUpdateTemplateMsgScopeItemListUsername:(id)arg1 scopeItemList:(id)arg2 completion:(id /* block */)arg3;
- (void)onUpdatePrivateMsgNotifyStatusUsername:(id)arg1 isOpen:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)onBoxPlacedTopInvalidatedWithCompletion:(id /* block */)arg1;
- (void)onLikeStatChangedBizUin:(id)arg1 msgId:(id)arg2 idx:(id)arg3 isLiked:(BOOL)arg4 likeCount:(long long)arg5 completion:(id /* block */)arg6;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end

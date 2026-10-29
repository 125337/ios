@interface ChatbotForwardPlugin : NSObject <MMFlutterPlugin>
{
    FlutterMethodChannel * _channel; // +0x8
    CBTAsstBoardForwardManager * _timelineForwardManager; // +0x10
    id /* block */ _pendingShareResult; // +0x18
    NSString * _pendingShareAction; // +0x20
    NSString * _pendingTargetUserName; // +0x28
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)_onChatBotAsstForwardDidFinish:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)handleShareToFriend:(id)arg1 result:(id /* block */)arg2;
- (void)handleShareToMoment:(id)arg1 result:(id /* block */)arg2;
- (void)handleForwardToUser:(id)arg1 result:(id /* block */)arg2;
- (void)handleShareFromHistory:(id)arg1 result:(id /* block */)arg2;
- (void)handleShareFromHistoryToMoment:(id)arg1 result:(id /* block */)arg2;
- (void)handleForwardText:(id)arg1 result:(id /* block */)arg2;
- (id)payloadsFromArgs:(id)arg1;
- (id)_historyInfoFromPayloads:(id)arg1;
- (id)_topViewController;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)timelineForwardManager;
- (void)setTimelineForwardManager:(id)arg1;
- (id /* block */)pendingShareResult;
- (void)setPendingShareResult:(id /* block */)arg1;
- (id)pendingShareAction;
- (void)setPendingShareAction:(id)arg1;
- (id)pendingTargetUserName;
- (void)setPendingTargetUserName:(id)arg1;
- (void).cxx_destruct;
@end

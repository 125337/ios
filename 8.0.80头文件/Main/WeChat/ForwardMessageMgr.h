@interface ForwardMessageMgr : MMUserService <SharePreConfirmSheetViewExt, MMServiceProtocol, ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController * m_forwardLogicController; // +0x8
    UIViewController * m_forwardFromViewController; // +0x10
    NSMutableDictionary * _forwardMessageLogics; // +0x18
    NSMutableArray * _sessionStackPages; // +0x20
    NSMutableArray * _shareSheetStack; // +0x28
    NSString * _chatBotAsstForwardSource; // +0x30
}
- (BOOL)isChatBotAsstForwardLogic:(id)arg1;
- (void)notifyChatBotAsstForwardDidFinishWithLogic:(id)arg1 success:(BOOL)arg2;
- (BOOL)isChatBotAsstForwardViewController:(id)arg1;
- (BOOL)containsChatBotAsstForwardViewController:(id)arg1;
- (void)markCurrentForwardAsChatBotAsstWithSource:(id)arg1;
- (void)configureForwardSuccessToastIfNeededForLogic:(id)arg1 fromViewController:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getCurrentViewController;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 toContact:(id)arg3;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 forwardType:(long long)arg3;
- (void)forwardMessageList:(id)arg1 fromViewController:(id)arg2 toContact:(id)arg3 forwardType:(long long)arg4;
- (void)forwardMessageList:(id)arg1 fromViewController:(id)arg2 toContact:(id)arg3 forwardType:(long long)arg4 multiForwardType:(unsigned long long)arg5;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2 toContact:(id)arg3 forwardType:(long long)arg4;
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)reportFinderFeedShare:(id)arg1 toContact:(id)arg2 shareSuccessful:(BOOL)arg3;
- (void)onEnterSessionPage:(id)arg1;
- (void)onLeaveSessionPage:(id)arg1;
- (void)OnSharePreConfirmSheetViewShow:(id)arg1;
- (void)OnSharePreConfirmSheetViewClose:(id)arg1;
- (id)currentLogicController;
- (id)forwardMessageLogics;
- (void)setForwardMessageLogics:(id)arg1;
- (id)sessionStackPages;
- (void)setSessionStackPages:(id)arg1;
- (id)shareSheetStack;
- (void)setShareSheetStack:(id)arg1;
- (id)chatBotAsstForwardSource;
- (void)setChatBotAsstForwardSource:(id)arg1;
- (void).cxx_destruct;
@end

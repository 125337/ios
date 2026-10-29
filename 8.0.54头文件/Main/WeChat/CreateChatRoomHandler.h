@interface CreateChatRoomHandler : BaseOpenSDKHandler <MMWebViewDelegate, PBMessageObserverDelegate, ShareConfirmViewDelegate>
{
    NSString * _groupId; // +0x8
    NSString * _openId; // +0x10
    NSString * _chatRoomName; // +0x18
    NSString * _chatRoomNickName; // +0x20
    NSString * _extMsg; // +0x28
    ShareConfirmView * _confirmView; // +0x30
}
- (void)dealloc;
- (void)realHandleReqAfterermissionValidation;
- (void)sendRespAndReturnTo3rdApp:(id)arg1 errCode:(int)arg2;
- (void)openCreateChatRoomH5:(id)arg1;
- (void)showSucessView;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)backTo3rdApp:(int)arg1;
- (void)onLeaveWebviewAndJumpToViewConroller;
- (void)OnBackToApp:(id)arg1;
- (void)OnStayAtWeChat:(id)arg1;
- (void).cxx_destruct;
@end


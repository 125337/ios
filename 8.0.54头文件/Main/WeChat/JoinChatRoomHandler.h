@interface JoinChatRoomHandler : BaseOpenSDKHandler <MMWebViewDelegate, PBMessageObserverDelegate, ShareConfirmViewDelegate>
{
    NSString * _groupId; // +0x8
    NSString * _openId; // +0x10
    NSString * _chatRoomNickName; // +0x18
    NSString * _extMsg; // +0x20
    ShareConfirmView * _confirmView; // +0x28
}
- (void)dealloc;
- (void)realHandleReqAfterermissionValidation;
- (void)sendRespAndReturnTo3rdApp:(id)arg1 errCode:(int)arg2;
- (void)openJoinChatRoomH5:(id)arg1;
- (void)showSucessView;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)backTo3rdApp:(int)arg1;
- (void)onLeaveWebviewAndJumpToViewConroller;
- (void)OnBackToApp:(id)arg1;
- (void)OnStayAtWeChat:(id)arg1;
- (void).cxx_destruct;
@end


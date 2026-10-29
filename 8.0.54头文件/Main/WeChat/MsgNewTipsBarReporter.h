@interface MsgNewTipsBarReporter : NSObject
{
    NSString * _chatName; // +0x8
    unsigned long long _userRole; // +0x10
    unsigned long long _roomMemberCount; // +0x18
    unsigned long long _tipsBarCount; // +0x20
}
- (void)reportTipsBarExpandViewActionShow;
- (void)reportTipsBarExpandViewActionHide;
- (void)reportSimpleAction:(unsigned long long)arg1;
- (void)reportBarRelatedAction:(unsigned long long)arg1 tipsItem:(id)arg2 barPositionIndex:(unsigned long long)arg3;
- (void)reportBarCloseActionWithTipsItem:(id)arg1 barPositionIndex:(unsigned long long)arg2 barCloseScene:(unsigned long long)arg3;
- (void)reportBarRelatedAction:(unsigned long long)arg1 tipsItem:(id)arg2 barPositionIndex:(unsigned long long)arg3 barCloseScene:(unsigned long long)arg4;
- (void)reportTopMessageRelatedAction:(unsigned long long)arg1 topItemId:(id)arg2 topMsgWrap:(id)arg3;
- (void)reportTopMessageRelatedAction:(unsigned long long)arg1 topItemId:(id)arg2 topMsgWrap:(id)arg3 barPositionIndex:(unsigned long long)arg4 barCloseScene:(unsigned long long)arg5 topMsgRechableType:(unsigned long long)arg6;
- (void)reportAction:(unsigned long long)arg1 barItemType:(unsigned long long)arg2 barPositionIndex:(unsigned long long)arg3 barCloseScene:(unsigned long long)arg4 topItemId:(id)arg5 liveId:(id)arg6 topMsgType:(unsigned long long)arg7 topMsgSubType:(unsigned long long)arg8 topMsgBizType:(unsigned long long)arg9 topMsgId:(long long)arg10 topMsgRechableType:(unsigned long long)arg11;
- (void)reportAction:(unsigned long long)arg1 userRole:(unsigned long long)arg2 chatName:(id)arg3 chatRoomUV:(unsigned long long)arg4 barItemType:(unsigned long long)arg5 barPositionIndex:(unsigned long long)arg6 barListLength:(unsigned long long)arg7 barCloseScene:(unsigned long long)arg8 topItemId:(id)arg9 liveId:(id)arg10 topMsgType:(unsigned long long)arg11 topMsgSubType:(unsigned long long)arg12 topMsgBizType:(unsigned long long)arg13 topMsgId:(long long)arg14 topMsgRechableType:(unsigned long long)arg15 actionTs:(unsigned long long)arg16;
- (unsigned long long)reportTypeForTipsItem:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned long long)userRole;
- (void)setUserRole:(unsigned long long)arg1;
- (unsigned long long)roomMemberCount;
- (void)setRoomMemberCount:(unsigned long long)arg1;
- (unsigned long long)tipsBarCount;
- (void)setTipsBarCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


@interface ChatMessageReportMgr : MMUserService <BaseMsgViewControllerExt, IMsgExt, MMServiceProtocol>
{
    BOOL _isMsgActionReportEnable; // +0x8
    BOOL _isMsgClickReportEnable; // +0x9
    unsigned int _firstUnreadMsgTime; // +0xc
    long long _msgFilterDuration; // +0x10
    long long _disappearFilterDurationMs; // +0x18
    NSMutableSet * _visitedMsgKeys; // +0x20
    NSMutableSet * _unexposeMsgKeys; // +0x28
    NSString * _currChatname; // +0x30
    NSMutableDictionary * _currVisitItems; // +0x38
    NSMutableDictionary * _currUnexposeItems; // +0x40
}
- (void)onServiceInit;
- (void)reportClickMsg:(id)arg1;
- (void)recordFirstUnreadMsg:(id)arg1;
- (void)reportClickJumpTargetMsg:(id)arg1 currItem:(id)arg2;
- (void)reportExposeJumpTargetMsg:(id)arg1 currItem:(id)arg2;
- (void)reportJumpTargetMsg:(id)arg1 currItem:(id)arg2 event:(id)arg3;
- (void)recordExposeMsg:(id)arg1;
- (void)recordUnexposeMsg:(id)arg1;
- (long long)getMsgRedTipsReportType:(long long)arg1;
- (void)onWillEnterBaseMsgSession:(id)arg1;
- (void)onExitBaseMsgSession:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)messageKey:(id)arg1;
- (BOOL)isMsgActionReportEnable;
- (void)setIsMsgActionReportEnable:(BOOL)arg1;
- (BOOL)isMsgClickReportEnable;
- (void)setIsMsgClickReportEnable:(BOOL)arg1;
- (long long)msgFilterDuration;
- (void)setMsgFilterDuration:(long long)arg1;
- (long long)disappearFilterDurationMs;
- (void)setDisappearFilterDurationMs:(long long)arg1;
- (id)visitedMsgKeys;
- (void)setVisitedMsgKeys:(id)arg1;
- (id)unexposeMsgKeys;
- (void)setUnexposeMsgKeys:(id)arg1;
- (id)currChatname;
- (void)setCurrChatname:(id)arg1;
- (id)currVisitItems;
- (void)setCurrVisitItems:(id)arg1;
- (id)currUnexposeItems;
- (void)setCurrUnexposeItems:(id)arg1;
- (unsigned int)firstUnreadMsgTime;
- (void)setFirstUnreadMsgTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

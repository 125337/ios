@interface ilinkMultiSelectLogic : NSObject <RoomContactSelectDelegate, ilinkMultiSelectContactsViewControllerDelegate, SharePreConfirmSheetViewDelegate, MultiSelectContactsViewControllerDelegate, VoIPMultiSelectContactsViewControllerSelectionDelegate, VoIPInviteSelectPageExitDelegate>
{
    ilinkMultiSelectContactsViewController * m_vc; // +0x8
    NSMutableDictionary * m_dicWillAdd; // +0x10
    BOOL _isSelfInChatRoom; // +0x18
    id <ilinkMultiSelectLogicDelegate> m_delegate; // +0x20
    CContact * _m_roomContact; // +0x28
    unsigned long long _fromScene; // +0x30
    NSMutableDictionary * _m_dicDisabledContact; // +0x38
    unsigned long long _dialEntranceType; // +0x40
    NSDictionary * _chatroomReportCtx; // +0x48
    NSString * _chatUsername; // +0x50
    SharePreConfirmSheetView * _confirmSheetView; // +0x58
    NSDictionary * _inviteSelectionSourceMapSnapshot; // +0x60
    NSMutableDictionary * _m_dicAllInVoipGroup; // +0x68
    MultiTalkJumpAppInfo * _jumpAppInfo; // +0x70
    NSMutableDictionary * _selectionSourceMap; // +0x78
    VoIPInviteMemberReportStruct * _inviteMemberReportStruct; // +0x80
    unsigned long long _maxMultiTalkMemberCount; // +0x88
}
+ (void)inviteReportDualTalkInviteBlockedWithFailType:(int)arg1;
- (void)inviteReportClickInviteBtn;
- (void)inviteReportInvitePageIn;
- (void)inviteReportInvitePageOutWithExitReason:(unsigned long long)arg1;
- (void)inviteReportInviteNextWithMembers:(id)arg1;
- (void)inviteReportInviteConfirmWithMembers:(id)arg1;
- (void)inviteReportInviteFailWithType:(int)arg1;
- (void)inviteReportInviteBlockedWithFailType:(int)arg1;
- (void)inviteReportDialEntrance;
- (void)inviteUpdateSelectionData;
- (int)inviteReportUserTypeForUserName:(id)arg1;
- (id)buildInvitedUserInfoArrayWithMembers:(id)arg1;
- (id)init;
- (void)start;
- (void)updateAddMembersInfo;
- (void)startMultiSelectForInGroup;
- (void)startMultiSelectForNotInGroup;
- (BOOL)getIfMemberInChatGroup:(id)arg1;
- (unsigned long long)getMembersLimitNum;
- (id)getAllMembersInVoipGroup;
- (id)getMembersHasSelectBefore;
- (void)onMultiSelectContactOutsideRoomReturn:(id)arg1 removeContacts:(id)arg2;
- (id)inviteSelectedUserNames;
- (void)preSetupSearchPanelView;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onDidSelectNormalContact:(id)arg1;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)didSelectContact:(id)arg1 fromSource:(long long)arg2;
- (void)onCancelSelectContact;
- (void)makeCell:(id)arg1 contact:(id)arg2 indexPath:(id)arg3;
- (BOOL)needShowSelectStatusForCell:(id)arg1;
- (BOOL)getIfMemberAlreadyInVoipGroup:(id)arg1;
- (BOOL)shouldShowRecentInviteArea;
- (BOOL)checkOnSelectContactWithContact:(id)arg1 inViewController:(id)arg2;
- (void)inviteMembersJoinCall:(id)arg1;
- (void)inviteMembersJoinCall;
- (void)updateRightBtn;
- (void)onInviteContactSubpageWillPresent;
- (void)onInviteContactSubpageDidPopWithExitReason:(unsigned long long)arg1;
- (void)onInviteSelectPageDidPopWithExitReason:(unsigned long long)arg1;
- (void)onInviteSelectContact:(id)arg1 fromSource:(long long)arg2;
- (void)configInviteReportWithRoomId:(unsigned long long)arg1 roomType:(int)arg2 callType:(int)arg3 isCaller:(BOOL)arg4 inviteScene:(int)arg5;
- (void)cleanupInviteSession;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_roomContact;
- (void)setM_roomContact:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (BOOL)isSelfInChatRoom;
- (void)setIsSelfInChatRoom:(BOOL)arg1;
- (id)m_dicDisabledContact;
- (void)setM_dicDisabledContact:(id)arg1;
- (unsigned long long)dialEntranceType;
- (void)setDialEntranceType:(unsigned long long)arg1;
- (id)chatroomReportCtx;
- (void)setChatroomReportCtx:(id)arg1;
- (id)chatUsername;
- (void)setChatUsername:(id)arg1;
- (id)confirmSheetView;
- (void)setConfirmSheetView:(id)arg1;
- (id)inviteSelectionSourceMapSnapshot;
- (void)setInviteSelectionSourceMapSnapshot:(id)arg1;
- (id)m_dicAllInVoipGroup;
- (void)setM_dicAllInVoipGroup:(id)arg1;
- (id)jumpAppInfo;
- (void)setJumpAppInfo:(id)arg1;
- (id)selectionSourceMap;
- (void)setSelectionSourceMap:(id)arg1;
- (id)inviteMemberReportStruct;
- (void)setInviteMemberReportStruct:(id)arg1;
- (unsigned long long)maxMultiTalkMemberCount;
- (void).cxx_destruct;
@end

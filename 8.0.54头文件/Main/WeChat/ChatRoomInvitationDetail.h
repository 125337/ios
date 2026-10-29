@interface ChatRoomInvitationDetail : NSObject <PBCoding, WCTColumnCoding>
{
    NSArray * _invitationReasonList; // +0x8
    NSString * _content; // +0x10
    NSString * _roomUsrName; // +0x18
    CMessageWrap * _msgWrap; // +0x20
    ChatRoomInvitationWrap * _invitationWrap; // +0x28
}
+ (void)PBArrayAdd_invitationReasonList;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_roomUsrName;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (void)setContent:(id)arg1;
- (id)msgWrap;
- (long long)getSvrId;
- (id)invitationReasonList;
- (void)setInvitationReasonList:(id)arg1;
- (id)content;
- (id)roomUsrName;
- (void)setRoomUsrName:(id)arg1;
- (void)setMsgWrap:(id)arg1;
- (id)invitationWrap;
- (void)setInvitationWrap:(id)arg1;
- (void).cxx_destruct;
@end


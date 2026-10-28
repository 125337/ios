@interface CExtendInfoOfSysNewXmlForBiz : NSObject <IMessageWrapForBizExt, IMsgExtendOperation, ISysNewXmlMsgExtendOperation, NSCopying>
{
    NSMutableString * m_showContent; // +0x8
    NSMutableString * m_sessionShowContent; // +0x10
    NSString * m_newXmlType; // +0x18
    long long m_msgInnerType; // +0x20
    NSMutableArray * m_arrMembers; // +0x28
    NSString * m_qrCode; // +0x30
    NSString * m_url; // +0x38
    BOOL m_hasParsedForDisplay; // +0x40
    BOOL m_bNewInv; // +0x41
    BOOL m_bNewApprove; // +0x42
    BOOL m_bHasApprove; // +0x43
    BOOL m_bNeedReloadSubView; // +0x44
    BOOL m_bCanFold; // +0x45
    BOOL m_bFolded; // +0x46
    BOOL m_bIsUpdatableMsgSubscribeMsg; // +0x47
    BOOL m_bHadAddNewHistoryMsg; // +0x48
    unsigned int m_updatableMsgType; // +0x4c
    unsigned int m_inviterQRCodeExpiredTime; // +0x50
    unsigned int m_inviterJoinScene; // +0x54
    unsigned int _m_revokedMsgInnerType; // +0x58
    CMessageWrap * m_refMessageWrap; // +0x60
    NSString * m_inviterName; // +0x68
    NSMutableArray * m_arrInviteeMembers; // +0x70
    NSString * m_nsInviteTickets; // +0x78
    NSString * m_fromChatUserName; // +0x80
    NSString * m_nsInviteReason; // +0x88
    NSString * m_nsRevokeContent; // +0x90
    CContact * m_inviterContact; // +0x98
    CMessageWrap * m_historyRecordMsg; // +0xa0
    HistoryMsgsInfo * m_historyMsgsInfo; // +0xa8
    unsigned long long m_ui64MassMsgSvrID; // +0xb0
    MMFinderLiveRedPacketMessage * m_liveRedPacketMessage; // +0xb8
    WCFinderClubSystemMessage * m_finderClubMessage; // +0xc0
    NSArray * m_mergeArrReaderWaps; // +0xc8
    NSString * m_inviterQRCode; // +0xd0
    NSString * _m_reportExtraData; // +0xd8
    NSMutableDictionary * _m_dicQuitRoomInfo; // +0xe0
    unsigned long long _m_revokedReferSvrid; // +0xe8
    NSString * _m_revokedAtUserList; // +0xf0
}
+ (void)CreateExtendInfoWithTypeForBiz:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isQRCodeScene:(id)arg1;
- (BOOL)isInvitationScene:(id)arg1;
- (BOOL)isAdminExplainScene:(id)arg1;
- (BOOL)isSucceedContactScene:(id)arg1;
- (BOOL)isNewSucceedContactScene:(id)arg1;
- (BOOL)isWebviewScene:(id)arg1;
- (BOOL)isInviterScene:(id)arg1;
- (BOOL)isApproveScene:(id)arg1;
- (BOOL)isOpenIMApproveScene:(id)arg1;
- (BOOL)isApproveToInviterScene:(id)arg1;
- (BOOL)isProfileScene:(id)arg1;
- (BOOL)isJumpChatScene:(id)arg1;
- (BOOL)isEditRevokeContentScene:(id)arg1;
- (BOOL)isChatroomMuteExptScene:(id)arg1;
- (BOOL)isChatroomHistoryRecordScene:(id)arg1;
- (BOOL)isCreateFinderClubAcccountScene:(id)arg1;
- (BOOL)isTransferFinderClubAcccountScene:(id)arg1;
- (BOOL)isFinderClubFeedScene:(id)arg1;
- (BOOL)isFinderClubProfileScene:(id)arg1;
- (void)parseTextNode:(XmlReaderNode_t *)arg1;
- (void)parseLinkNode:(XmlReaderNode_t *)arg1;
- (XmlReaderNode_t *)parseFirstChild:(XmlReaderNode_t *)arg1;
- (XmlReaderNode_t *)parseNextSibling:(XmlReaderNode_t *)arg1;
- (void)ChangeForDisplayAnyhow;
- (void)ChangeForDisplay;
- (id)GetDisplayContent;
- (id)GetDisplaySessionContent;
- (void)parseCommonNewXmlMsg:(XmlReaderNode_t *)arg1;
- (void)parseTemplateNewXmlMsg:(XmlReaderNode_t *)arg1;
- (void)parseTemplateContentNode:(XmlReaderNode_t *)arg1;
- (XmlReaderNode_t *)getXMLNodeWithName:(const char *)arg1 fromNode:(XmlReaderNode_t *)arg2 useOwnMsgType:(unsigned long long)arg3;
- (void)requestFinderClubInfoIfNeeded:(BOOL)arg1;
- (id)parseTextNodeSucceedContact:(XmlReaderNode_t *)arg1 isNewSucceed:(BOOL)arg2;
- (id)getResultWithRegularInString:(id)arg1 WithPatterns:(id)arg2;
- (void)parseAAUnpayNotifyNewXmlMsg;
- (id)m_finderClubMessage;
- (id)m_historyRecordMsg;
- (void)parseHistoryRecord;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (id)m_showContent;
- (void)setM_showContent:(id)arg1;
- (id)m_arrMembers;
- (void)setM_arrMembers:(id)arg1;
- (id)m_qrCode;
- (void)setM_qrCode:(id)arg1;
- (id)m_url;
- (void)setM_url:(id)arg1;
- (id)m_sessionShowContent;
- (void)setM_sessionShowContent:(id)arg1;
- (id)m_newXmlType;
- (void)setM_newXmlType:(id)arg1;
- (long long)m_msgInnerType;
- (void)setM_msgInnerType:(long long)arg1;
- (id)m_inviterName;
- (void)setM_inviterName:(id)arg1;
- (id)m_arrInviteeMembers;
- (void)setM_arrInviteeMembers:(id)arg1;
- (id)m_nsInviteTickets;
- (void)setM_nsInviteTickets:(id)arg1;
- (BOOL)m_bNewInv;
- (void)setM_bNewInv:(BOOL)arg1;
- (BOOL)m_bNewApprove;
- (void)setM_bNewApprove:(BOOL)arg1;
- (BOOL)m_bHasApprove;
- (void)setM_bHasApprove:(BOOL)arg1;
- (BOOL)m_bNeedReloadSubView;
- (void)setM_bNeedReloadSubView:(BOOL)arg1;
- (id)m_fromChatUserName;
- (void)setM_fromChatUserName:(id)arg1;
- (id)m_nsInviteReason;
- (void)setM_nsInviteReason:(id)arg1;
- (id)m_nsRevokeContent;
- (void)setM_nsRevokeContent:(id)arg1;
- (BOOL)m_bCanFold;
- (void)setM_bCanFold:(BOOL)arg1;
- (BOOL)m_bFolded;
- (void)setM_bFolded:(BOOL)arg1;
- (BOOL)m_bIsUpdatableMsgSubscribeMsg;
- (void)setM_bIsUpdatableMsgSubscribeMsg:(BOOL)arg1;
- (unsigned int)m_updatableMsgType;
- (void)setM_updatableMsgType:(unsigned int)arg1;
- (id)m_inviterContact;
- (void)setM_inviterContact:(id)arg1;
- (void)setM_historyRecordMsg:(id)arg1;
- (id)m_historyMsgsInfo;
- (void)setM_historyMsgsInfo:(id)arg1;
- (unsigned long long)m_ui64MassMsgSvrID;
- (void)setM_ui64MassMsgSvrID:(unsigned long long)arg1;
- (BOOL)m_bHadAddNewHistoryMsg;
- (void)setM_bHadAddNewHistoryMsg:(BOOL)arg1;
- (id)m_liveRedPacketMessage;
- (void)setM_liveRedPacketMessage:(id)arg1;
- (void)setM_finderClubMessage:(id)arg1;
- (id)m_mergeArrReaderWaps;
- (void)setM_mergeArrReaderWaps:(id)arg1;
- (id)m_inviterQRCode;
- (void)setM_inviterQRCode:(id)arg1;
- (unsigned int)m_inviterQRCodeExpiredTime;
- (void)setM_inviterQRCodeExpiredTime:(unsigned int)arg1;
- (unsigned int)m_inviterJoinScene;
- (void)setM_inviterJoinScene:(unsigned int)arg1;
- (id)m_reportExtraData;
- (void)setM_reportExtraData:(id)arg1;
- (id)m_dicQuitRoomInfo;
- (void)setM_dicQuitRoomInfo:(id)arg1;
- (unsigned long long)m_revokedReferSvrid;
- (void)setM_revokedReferSvrid:(unsigned long long)arg1;
- (id)m_revokedAtUserList;
- (void)setM_revokedAtUserList:(id)arg1;
- (unsigned int)m_revokedMsgInnerType;
- (void)setM_revokedMsgInnerType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

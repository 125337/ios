@interface NewChatRoomMemberItemView : MMUIView
{
    UIButton * m_addMemberBtn; // +0x8
    UIButton * m_deleteMemberBtn; // +0x10
    UIButton * m_actionBtn; // +0x18
    MMHeadImageView * m_headImageView; // +0x20
    MMCPLabel * m_labelDisplayName; // +0x28
    MMCPLabel * m_labelSubDesc; // +0x30
    UIImageView * m_trackIcon; // +0x38
    UIButton * m_smallDeleteBtn; // +0x40
    CContact * m_contact; // +0x48
    CContact * m_groupContact; // +0x50
    UIImageView * m_chatBotIcon; // +0x58
    id <NewChatRoomMemberItemViewDelegate> m_delegate; // +0x60
    SEL m_updateItemViewForDeleteSel; // +0x68
    BOOL m_bDeleteStatus; // +0x70
    unsigned int m_uiIndex; // +0x74
    UIColor * m_textColor; // +0x78
    double m_fLeftMargin; // +0x80
    double m_fRightMargin; // +0x88
    BOOL m_noDisplayName; // +0x90
    NSString * m_cpKeyForNickname; // +0x98
    NSString * m_cpKeyForChatRoomDisplayName; // +0xa0
    BOOL m_isNickNameUnsafe; // +0xa8
    BOOL m_isChatRoomDisplayNameUnsafe; // +0xa9
    BOOL _wrapItemAccessibilityElement; // +0xaa
    BOOL _isShowOpenIMTypeInGroupContact; // +0xab
    unsigned int _m_scence; // +0xac
}
- (void)OnClickHeadImage;
- (void)OnClickDeleteBtn;
- (void)shakeHeadForType:(unsigned long long)arg1;
- (id)headImageView;
- (void)updateContact;
- (void)updateAddItemViewForDelete;
- (void)updateDeleteItemViewForDelete;
- (void)updateContactItemViewForDelete;
- (void)updateItemViewForDelete:(BOOL)arg1;
- (void)setTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)updateOpenim;
- (void)showTrackFlag;
- (void)handleLongPressEx:(id)arg1;
- (void)updateAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)hiddenAllSubViews;
- (void)updateWithContactEx:(id)arg1 atIndex:(unsigned long long)arg2 withColumn:(unsigned long long)arg3;
- (void)updateWithAddMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateWithDeleteMemberBtnAtIndexEx:(unsigned long long)arg1 withColumn:(unsigned long long)arg2;
- (void)updateContactItemSubview;
- (id)initViewInChatRoomProfile;
- (id)initViewInChatRoomProfile:(double)arg1 nameSize:(double)arg2;
- (void)setNoDisplayName:(BOOL)arg1;
- (void)updateCPState;
- (BOOL)isDisplayNameUnsafe;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_groupContact;
- (void)setM_groupContact:(id)arg1;
- (unsigned int)m_uiIndex;
- (void)setM_uiIndex:(unsigned int)arg1;
- (double)m_fLeftMargin;
- (double)m_fRightMargin;
- (unsigned int)m_scence;
- (void)setM_scence:(unsigned int)arg1;
- (BOOL)wrapItemAccessibilityElement;
- (void)setWrapItemAccessibilityElement:(BOOL)arg1;
- (BOOL)isShowOpenIMTypeInGroupContact;
- (void)setIsShowOpenIMTypeInGroupContact:(BOOL)arg1;
- (void).cxx_destruct;
@end

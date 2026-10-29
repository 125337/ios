@interface NewChatRoomInvitationMultiMenuTableViewCell : ChatRoomInvitationMultiMenuTableViewCell <ILinkEventExt>
{
    CContact * m_inviterContact; // +0x40
    double m_nickNameSuffixWidth; // +0x48
    NSString * m_nsInviteesNickName; // +0x50
    NSString * m_nsInviteesNickNameSuffix; // +0x58
    MMUIView * m_invitedHeadImageContainView; // +0x60
    MMHeadImageView * m_invitedFirstHeadImageView; // +0x68
    MMHeadImageView * m_invitedSecondHeadImageView; // +0x70
    MMHeadImageView * m_invitedHeadImageView; // +0x78
    MMUIButton * m_nickNameButton; // +0x80
    UITapGestureRecognizer * m_headImageTapGesture; // +0x88
    ChatRoomInvitationFocusView * _focusView; // +0x90
    NSArray * _voElements; // +0x98
}
- (void)initView;
- (void)initAccessibilityFocusView;
- (void)initData;
- (void)initInvitedHeadImage;
- (void)initNickNameView;
- (void)makeCellForInvitationWrap:(id)arg1;
- (void)setupLayout;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)doApplyLayout;
- (id)modifyReason:(id)arg1;
- (id)getHasApprovedLabelFont;
- (id)getTitleString;
- (id)getInviteeNickNameString;
- (Class)getChatRoomInvitationCellQuitRoomInfoViewClass;
- (id)getInviteeNickNameStringInArea:(double)arg1;
- (void)onClickHeadImageView;
- (void)onTapMultiPersonHeadImage;
- (void)onClickNickNameButton:(id)arg1;
- (void)resetNickNameButtonSelect;
- (void)openContactProfile;
- (void)showContactListPageSheet;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)updateCellAccessibility;
- (void)updateAccessibilityLabel;
- (void)updateAccessibilityFocusView;
- (id)buildAccessibilityLabel;
- (id)inviterDisplayName;
- (id)inviteesDisplayName;
- (id)buildAccessibilityCustomActions;
- (BOOL)onAccessibilityViewInviter:(id)arg1;
- (BOOL)onAccessibilityViewInvitee:(id)arg1;
- (BOOL)onAccessibilityApprove:(id)arg1;
- (void)updateAction;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)invitedHeadImageContainView;
- (void)setInvitedHeadImageContainView:(id)arg1;
- (id)invitedFirstHeadImageView;
- (void)setInvitedFirstHeadImageView:(id)arg1;
- (id)invitedSecondHeadImageView;
- (void)setInvitedSecondHeadImageView:(id)arg1;
- (id)invitedHeadImageView;
- (void)setInvitedHeadImageView:(id)arg1;
- (id)nickNameButton;
- (void)setNickNameButton:(id)arg1;
- (id)headImageTapGesture;
- (void)setHeadImageTapGesture:(id)arg1;
- (id)focusView;
- (void)setFocusView:(id)arg1;
- (id)voElements;
- (void)setVoElements:(id)arg1;
- (void).cxx_destruct;
@end

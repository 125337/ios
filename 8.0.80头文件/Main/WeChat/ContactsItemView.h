@interface ContactsItemView : MMUIView
{
    MMHeadImageView * m_headImage; // +0x8
    MMCPLabel * m_nickNameLabel; // +0x10
    UILabel * m_labelNamePostfix; // +0x18
    MMImageView * m_iconNamePostfix; // +0x20
    AttributeLabel * m_descLabel; // +0x28
    UIButton * m_rightButton; // +0x30
    UILabel * m_rightLabel; // +0x38
    id m_data; // +0x40
    id <ContactsItemViewDelegate> m_delegate; // +0x48
    CContact * m_contact; // +0x50
    SearchMatchTip * m_matchTip; // +0x58
    NSString * m_cpKeyForNickname; // +0x60
    BOOL m_isNicknameUnsafe; // +0x68
    TextStateItemView * m_textStateView; // +0x70
    MMUIImageView * m_rightViewPrefixIcon; // +0x78
    BOOL m_bShowHeadImage; // +0x80
    BOOL m_bShowUserDescription; // +0x81
    BOOL m_bShowSearchResult; // +0x82
    BOOL _m_bShowChatRoomCount; // +0x83
    BOOL _m_bShowChatRoomFriendCount; // +0x84
    BOOL _m_bHideOpenIMDesc; // +0x85
    BOOL _m_bShowOpenIMPostfixIcon; // +0x86
    BOOL _m_bShowOpenIMPostfixIconBeforeNamePostfixLabel; // +0x87
    BOOL _m_bShowMobileDisplayName; // +0x88
    BOOL _bShowTextState; // +0x89
    BOOL _bShowRightArrow; // +0x8a
    BOOL _bUseMultiLineDescLabel; // +0x8b
    BOOL _bDescLabelIsExpand; // +0x8c
    BOOL _bShowOpenIMKeFuDesc; // +0x8d
    double m_nickNameDiffWidth; // +0x90
    double _descLabelMarginRight; // +0x98
    UIImageView * _arrowImageView; // +0xa0
    UIButton * _descExpandButton; // +0xa8
    double _cachedNickNameMinMaxWidth; // +0xb0
    NSString * _postfixText; // +0xb8
    NSString * _truncatedPostfixText; // +0xc0
    double _messageSearchDetailMaxWidth; // +0xc8
}
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)initHeadImage:(id)arg1 withUrl:(id)arg2;
- (void)initHeadImage:(id)arg1;
- (void)initHeadImageForContact:(id)arg1;
- (BOOL)isShowMobileName:(id)arg1 mobileName:(id)arg2;
- (void)initView:(id)arg1;
- (void)initView:(id)arg1 showChatRoomName:(id)arg2;
- (void)showChatRoomMemberContactsItemView:(id)arg1 chatContact:(id)arg2;
- (void)initNamePostfixLabel:(id)arg1 color:(id)arg2;
- (void)initNamePostfixLabel:(id)arg1 color:(id)arg2 truncatedText:(id)arg3;
- (void)initNamePostfixLabel:(id)arg1;
- (void)initNamePostfixIcon;
- (void)updateMatchLabel;
- (double)messageSearchDescLabelMaxWidth;
- (double)calNameMaxWidth;
- (void)initNickNameLabel:(id)arg1;
- (void)initRightLabel:(id)arg1 color:(id)arg2 width:(double)arg3;
- (void)initRightLabel:(id)arg1;
- (void)onRightBtnAction;
- (void)initRightButton:(id)arg1 title:(id)arg2;
- (void)initGreyRightButton:(id)arg1;
- (void)initGreenRightButton:(id)arg1;
- (void)initDescLabel:(id)arg1 color:(id)arg2;
- (void)onTapExpandButton:(id)arg1;
- (void)setBDescLabelIsExpand:(BOOL)arg1;
- (void)initDescLabel:(id)arg1;
- (void)initRightViewPrefixIcon:(id)arg1;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (BOOL)m_bShowHeadImage;
- (void)setM_bShowHeadImage:(BOOL)arg1;
- (id)m_nickNameLabel;
- (void)setM_nickNameLabel:(id)arg1;
- (id)m_headImage;
- (void)setM_headImage:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_data;
- (void)setM_data:(id)arg1;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (BOOL)m_bShowUserDescription;
- (void)setM_bShowUserDescription:(BOOL)arg1;
- (BOOL)m_bShowSearchResult;
- (void)setM_bShowSearchResult:(BOOL)arg1;
- (double)m_nickNameDiffWidth;
- (void)setM_nickNameDiffWidth:(double)arg1;
- (id)m_matchTip;
- (void)setM_matchTip:(id)arg1;
- (BOOL)m_bShowChatRoomCount;
- (void)setM_bShowChatRoomCount:(BOOL)arg1;
- (BOOL)m_bShowChatRoomFriendCount;
- (void)setM_bShowChatRoomFriendCount:(BOOL)arg1;
- (BOOL)m_bHideOpenIMDesc;
- (void)setM_bHideOpenIMDesc:(BOOL)arg1;
- (BOOL)m_bShowOpenIMPostfixIcon;
- (void)setM_bShowOpenIMPostfixIcon:(BOOL)arg1;
- (BOOL)m_bShowOpenIMPostfixIconBeforeNamePostfixLabel;
- (void)setM_bShowOpenIMPostfixIconBeforeNamePostfixLabel:(BOOL)arg1;
- (BOOL)m_bShowMobileDisplayName;
- (void)setM_bShowMobileDisplayName:(BOOL)arg1;
- (BOOL)bShowTextState;
- (void)setBShowTextState:(BOOL)arg1;
- (BOOL)bShowRightArrow;
- (void)setBShowRightArrow:(BOOL)arg1;
- (BOOL)bUseMultiLineDescLabel;
- (void)setBUseMultiLineDescLabel:(BOOL)arg1;
- (BOOL)bDescLabelIsExpand;
- (double)descLabelMarginRight;
- (void)setDescLabelMarginRight:(double)arg1;
- (BOOL)bShowOpenIMKeFuDesc;
- (void)setBShowOpenIMKeFuDesc:(BOOL)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)descExpandButton;
- (void)setDescExpandButton:(id)arg1;
- (double)cachedNickNameMinMaxWidth;
- (void)setCachedNickNameMinMaxWidth:(double)arg1;
- (id)postfixText;
- (void)setPostfixText:(id)arg1;
- (id)truncatedPostfixText;
- (void)setTruncatedPostfixText:(id)arg1;
- (double)messageSearchDetailMaxWidth;
- (void)setMessageSearchDetailMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end

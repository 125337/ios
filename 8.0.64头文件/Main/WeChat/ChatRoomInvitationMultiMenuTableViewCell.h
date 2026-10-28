@interface ChatRoomInvitationMultiMenuTableViewCell : MMMultiMenuTableViewCell <ILinkEventExt, ChatRoomInvitationCellQuitRoomInfoViewDelegate>
{
    id <ChatRoomInvitationMultiMenuTableViewCellDelegate> _delegate; // +0x40
    UIView * _cardView; // +0x48
    MMHeadImageView * _inviterHeadImageView; // +0x50
    ChatRoomInvitationWrap * _invitationWrap; // +0x58
    RichTextView * _titleView; // +0x60
    UIButton * _approveButton; // +0x68
    UILabel * _hasApprovedLabel; // +0x70
    UIView * _separatorLineView; // +0x78
    NSMutableArray * _reasonViews; // +0x80
    NSMutableArray * _quitRoomInfoViews; // +0x88
}
+ (double)estimatedHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)initData;
- (void)initSeparatorLineView;
- (void)initCardView;
- (void)initTopView;
- (id)getHasApprovedLabelFont;
- (void)makeReasonViews;
- (id)modifyReason:(id)arg1;
- (void)makeQuitRoomInfoViews;
- (void)setupLayout;
- (void)layoutSubviews;
- (void)doApplyLayout;
- (void)makeCellForInvitationWrap:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onApprove;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onQuitRoomInfoView:(id)arg1 tapViewMsgHistoryButton:(id)arg2;
- (void)onTapHeadImage;
- (void)openContactProfile:(id)arg1;
- (id)getTitleString;
- (Class)getChatRoomInvitationCellQuitRoomInfoViewClass;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)inviterHeadImageView;
- (void)setInviterHeadImageView:(id)arg1;
- (id)invitationWrap;
- (void)setInvitationWrap:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)approveButton;
- (void)setApproveButton:(id)arg1;
- (id)hasApprovedLabel;
- (void)setHasApprovedLabel:(id)arg1;
- (id)separatorLineView;
- (void)setSeparatorLineView:(id)arg1;
- (id)reasonViews;
- (void)setReasonViews:(id)arg1;
- (id)quitRoomInfoViews;
- (void)setQuitRoomInfoViews:(id)arg1;
- (void).cxx_destruct;
@end

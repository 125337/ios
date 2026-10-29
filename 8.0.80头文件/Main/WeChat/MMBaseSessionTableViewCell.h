@interface MMBaseSessionTableViewCell : MMMultiMenuTableViewCell <IBaseSessionCellExt>
{
    UILabel * m_msgLabel; // +0x40
    MMBaseSessionCellData * m_cellData; // +0x48
    SessionCellLayoutParam * m_layoutParam; // +0x50
    UIView * m_backgroudView; // +0x58
    MMHeadImageView * m_headView; // +0x60
    MMBadgeView * m_msgCountView; // +0x68
    UIImageView * m_statusView; // +0x70
    UIImageView * m_originalIconView; // +0x78
    UILabel * m_nicknameLabel; // +0x80
    UIView * m_nicknameTailView; // +0x88
    UILabel * m_alertLabel; // +0x90
    UILabel * m_timeLabel; // +0x98
    UIImageView * m_chatNotPushView; // +0xa0
    UIImageView * m_blockMessageView; // +0xa8
    UILabel * m_fromBusinessLabel; // +0xb0
    MMCPLabel * m_descPostfix; // +0xb8
    UIImageView * m_starView; // +0xc0
    UIImageView * m_namePostIconView; // +0xc8
    CGSize _blockMessageIconSize; // +0xd0
    BOOL _isSubscribeBrandContact; // +0xe0
    BOOL _isBrandServiceContact; // +0xe1
    BOOL _isNeedSetSmallDot; // +0xe2
    id <MMBaseSessionCellDelegate> _delegate; // +0xe8
}
+ (double)cellHeightForLayoutParam:(id)arg1;
- (id)initWithLayoutParam:(id)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)updateWithSessionCellData:(id)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)setHeadCategory:(unsigned char)arg1;
- (void)useRoundHeadImage;
- (void)useRoundCornorHeadImage;
- (void)resetNormalHeadImage;
- (void)layoutSubviews;
- (id)createMsgLabel;
- (void)prepareForReuse;
- (void)updateHeadViewWithSessionCellData:(id)arg1;
- (void)updateTimeLabelWithSessionCellData:(id)arg1;
- (void)updateNameLabelWithSessionCellData:(id)arg1;
- (void)updateNamePostIconViewWithSessionCellData:(id)arg1;
- (void)updateUnReadCountWithSessionCellData:(id)arg1;
- (void)setNeedSetSmallDot:(BOOL)arg1;
- (void)updateAlertLabelWithSessionCellData:(id)arg1;
- (void)updateStatusWithSessionCellData:(id)arg1;
- (void)updateOriginalIconWithSessionCellData:(id)arg1;
- (void)updateMsgLabelWithSessionCellData:(id)arg1;
- (void)updateChatNotPushWithSessionCellData:(id)arg1;
- (void)updateBlockMessageWithSessionCellData:(id)arg1;
- (void)updateFromBusinessLabelWithSessionCellData:(id)arg1;
- (void)updateStarMarkWithSessionCellData:(id)arg1;
- (double)rightBoundOfStatusImage;
- (double)rightBoundOfAlertLabelOrStatusImage;
- (void)initSubView;
- (void)onMenuTransitionToConfirmState:(long long)arg1;
- (void)onMultiMenuAppear;
- (void)onUpdateCellWithCellData:(id)arg1;
- (id)accessibilityLabel;
- (id)GetNickNameTailView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

@interface EnterpriseSessionItemView : MMMultiMenuTableViewCell
{
    EnterpriseSessionCellData * _cellData; // +0x40
    EnterpriseSessionCellLayoutParam * _layoutParam; // +0x48
    UIView * _backgroudView; // +0x50
    MMHeadImageView * _headView; // +0x58
    MMBadgeView * _msgCountView; // +0x60
    UIImageView * _statusView; // +0x68
    UILabel * _nicknameLabel; // +0x70
    UILabel * _msgLabel; // +0x78
    UILabel * _alertLabel; // +0x80
    UILabel * _timeLabel; // +0x88
    UIImageView * _chatNotPushView; // +0x90
    BOOL bAlertToRight; // +0x98
    BOOL _isSubscribeBrandContact; // +0x99
}
+ (double)cellHeight;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)initSubView;
- (void)layoutSubviews;
- (void)updateWithSessionCellData:(id)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)setHeadCategory:(unsigned char)arg1;
- (double)rightBoundOfStatusImage;
- (double)rightBoundOfAlertLabelOrStatusImage;
- (void)updateHeadViewWithSessionCellData:(id)arg1;
- (void)updateTimeLabelWithSessionCellData:(id)arg1;
- (void)updateNameLabelWithSessionCellData:(id)arg1;
- (void)updateUnReadCountWithSessionCellData:(id)arg1;
- (void)updateStatusWithSessionCellData:(id)arg1;
- (void)updateAlertLabelWithSessionCellData:(id)arg1;
- (void)updateMsgLabelWithSessionCellData:(id)arg1;
- (void)updateMoreMenuWithSessionCellData:(id)arg1;
- (void)updateChatNotPushWithSessionCellData:(id)arg1;
- (void)updateBackgroundColorWithSessionCellData:(id)arg1;
- (id)cellSessionDataLastMsg:(id)arg1;
- (void)onUpdateCellWithCellData:(id)arg1;
- (void).cxx_destruct;
@end

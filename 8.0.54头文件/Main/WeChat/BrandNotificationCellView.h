@interface BrandNotificationCellView : MMMultiMenuTableViewCell
{
    BrandNotificationCellViewModel * _viewModel; // +0x40
    RichTextView * _messageLabel; // +0x48
    RichTextView * _contactNameLabel; // +0x50
    MMUILabel * _timeLabel; // +0x58
    MMHeadImageView * _headerView; // +0x60
    CALayer * _bottomLine; // +0x68
}
- (id)initWithModel:(id)arg1;
- (void)updateViewModel:(id)arg1;
- (void)updateTimeLabel;
- (void)initSubViews;
- (void)initHeaderView;
- (void)initContactNameLabel;
- (void)initMessageLabel;
- (void)updateHeaderViewSize;
- (void)layoutSubviews;
- (id)viewModel;
- (id)genMenuItems;
- (id)accessibilityLabel;
- (void)setViewModel:(id)arg1;
- (id)messageLabel;
- (void)setMessageLabel:(id)arg1;
- (id)contactNameLabel;
- (void)setContactNameLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end


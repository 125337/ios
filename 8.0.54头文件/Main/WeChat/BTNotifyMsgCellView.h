@interface BTNotifyMsgCellView : MMTableViewCell
{
    id <BTNotifyMsgCellViewDelegate> _delegate; // +0x8
    BTNotifySectionData * _viewModel; // +0x10
    UIButton * _messageTipsVew; // +0x18
    MMHeadImageView * _headerView; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initSubViews;
- (void)updateWithMsg:(id)arg1 unreadCount:(unsigned int)arg2;
- (void)layoutSubviews;
- (void)onClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)messageTipsVew;
- (void)setMessageTipsVew:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
@end


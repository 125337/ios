@interface MMFinderLiveNoticePromoteListTableViewCell : UITableViewCell
{
    BOOL _added; // +0x8
    id <MMFinderLiveNoticePromoteListTableViewCellDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
    UIImageView * _liveIconImageView; // +0x20
    UILabel * _titleLabel; // +0x28
    UILabel * _introLabel; // +0x30
    UILabel * _reserveCountLabel; // +0x38
    UIView * _horizontalSeparatorBar; // +0x40
    MMUIButton * _addButton; // +0x48
    UILabel * _topLabel; // +0x50
    FinderLiveNoticeInfo * _liveNotice; // +0x58
    MMPaddingView * _couponsTitleLabel; // +0x60
    ZZLabelChainModel * _couponsStateModel; // +0x68
}
+ (double)estimatedHeight;
+ (double)exactHeightForLiveNotice:(id)arg1;
+ (id)getReserveString:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateWithLiveNotice:(id)arg1 added:(BOOL)arg2;
- (void)layoutSubviews;
- (void)onAddButtonTapped;
- (id)topLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)liveIconImageView;
- (void)setLiveIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)introLabel;
- (void)setIntroLabel:(id)arg1;
- (id)reserveCountLabel;
- (void)setReserveCountLabel:(id)arg1;
- (id)horizontalSeparatorBar;
- (void)setHorizontalSeparatorBar:(id)arg1;
- (id)addButton;
- (void)setAddButton:(id)arg1;
- (void)setTopLabel:(id)arg1;
- (id)liveNotice;
- (void)setLiveNotice:(id)arg1;
- (id)couponsTitleLabel;
- (void)setCouponsTitleLabel:(id)arg1;
- (id)couponsStateModel;
- (void)setCouponsStateModel:(id)arg1;
- (BOOL)added;
- (void)setAdded:(BOOL)arg1;
- (void).cxx_destruct;
@end

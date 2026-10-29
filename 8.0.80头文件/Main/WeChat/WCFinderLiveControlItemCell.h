@interface WCFinderLiveControlItemCell : UIView <MMLiveControlItemDelegate>
{
    BOOL _isActionDisabled; // +0x8
    BOOL _isImageMirrored; // +0x9
    MMLiveControlItem * _controlItem; // +0x10
    UIView * _itemCell; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _iconImageView; // +0x28
    id <WCFinderLiveControlItemCellDelegate> _cellDelegate; // +0x30
    NSString * _redDotPath; // +0x38
    UIView * _badgeView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 MMLiveControlItem:(id)arg2;
- (void)layoutSubviews;
- (void)updateRedPacketChatroomSelectionStyle:(long long)arg1;
- (void)initView;
- (void)onClickToControlItem;
- (void)setIsActionDisabled:(BOOL)arg1;
- (void)onBadgeEnablementChangedForItem:(id)arg1;
- (id)controlItem;
- (void)setControlItem:(id)arg1;
- (id)itemCell;
- (void)setItemCell:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (BOOL)isActionDisabled;
- (BOOL)isImageMirrored;
- (void)setIsImageMirrored:(BOOL)arg1;
- (id)redDotPath;
- (void)setRedDotPath:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (void).cxx_destruct;
@end

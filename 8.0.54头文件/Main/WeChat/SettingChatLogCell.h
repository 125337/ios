@interface SettingChatLogCell : UITableViewCell <WXGRoamBannerViewDelegate>
{
    NSString * _iconName; // +0x8
    NSString * _titleString; // +0x10
    NSString * _detailString; // +0x18
    UIImageView * _iconImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _detailLabel; // +0x30
    UIImageView * _arrowImageView; // +0x38
    UIView * _myBackgroundView; // +0x40
    long long _cellType; // +0x48
    UIView * _backupBannerView; // +0x50
    WXGRoamBannerView * _bannerView; // +0x58
    unsigned long long _cellHeight; // +0x60
    id /* block */ _reloadBlock; // +0x68
}
+ (double)cellHeight:(id)arg1 maxWidth:(double)arg2;
+ (double)cellMaxDetailWidth:(double)arg1;
+ (double)heightForDetailLabel:(id)arg1 maxWidth:(double)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initView;
- (void)updateView;
- (void)setupBannerAndCellHeight;
- (void)updateFrames;
- (void)onTapBanner;
- (void)onRoamBannerViewShow;
- (void)onRoamBannerViewHidden;
- (id)iconName;
- (void)setIconName:(id)arg1;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (id)detailString;
- (void)setDetailString:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)myBackgroundView;
- (void)setMyBackgroundView:(id)arg1;
- (long long)cellType;
- (void)setCellType:(long long)arg1;
- (id)backupBannerView;
- (void)setBackupBannerView:(id)arg1;
- (id)bannerView;
- (void)setBannerView:(id)arg1;
- (unsigned long long)cellHeight;
- (void)setCellHeight:(unsigned long long)arg1;
- (id /* block */)reloadBlock;
- (void)setReloadBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end


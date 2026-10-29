@interface MJShootTemplatePanelItemCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    UILabel * _versionLabel; // +0x10
    UILabel * _titleLabel; // +0x18
    MMWebImageView * _iconImageView; // +0x20
    UIView * _borderView; // +0x28
    UIView * _progressBGView; // +0x30
    MJCircleProgressView * _progressView; // +0x38
    MMCameraTemplateItem * _item; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)configCellWithItem:(id)arg1;
- (void)setIsCellSelected:(BOOL)arg1;
- (void)setDownloadingProgress:(float)arg1;
- (void)showLoadingUI;
- (void)removeLoadingUI;
- (id)versionLabel;
- (void)setVersionLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (BOOL)isCellSelected;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)progressBGView;
- (void)setProgressBGView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end


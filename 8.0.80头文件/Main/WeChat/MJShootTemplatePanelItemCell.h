@interface MJShootTemplatePanelItemCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    UILabel * _versionLabel; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMWebImageView * _iconImageView; // +0x20
    MMUIImageView * _arrowIconImageView; // +0x28
    UIView * _borderView; // +0x30
    UIView * _progressBGView; // +0x38
    MJCircleProgressView * _progressView; // +0x40
    MMCameraTemplateItem * _item; // +0x48
    NSString * _searchWord; // +0x50
}
+ (id)highlightFirstMatchInName:(id)arg1 withKeyword:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)layoutViews;
- (void)prepareForReuse;
- (void)configCellWithItem:(id)arg1;
- (void)configCellWithItem:(id)arg1 searchWord:(id)arg2;
- (void)setupTitleEntryButton;
- (void)layoutTitleWithArrow;
- (void)layoutTitleWithoutArrow;
- (void)setIsCellSelected:(BOOL)arg1;
- (void)updateTitleLabelTextColor;
- (void)setDownloadingProgress:(float)arg1;
- (void)showLoadingUI;
- (void)removeLoadingUI;
- (id)versionLabel;
- (void)setVersionLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)arrowIconImageView;
- (void)setArrowIconImageView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)progressBGView;
- (void)setProgressBGView:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)searchWord;
- (void)setSearchWord:(id)arg1;
- (BOOL)isCellSelected;
- (void).cxx_destruct;
@end

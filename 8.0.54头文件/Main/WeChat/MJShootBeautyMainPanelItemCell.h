@interface MJShootBeautyMainPanelItemCell : UICollectionViewCell <MJMaterialLoadingStatusView>
{
    BOOL _isCellSelected; // +0x8
    id <MJShootBeautyMainPanelItemCellDelegate> _delegate; // +0x10
    MMUIView * _iconContainerView; // +0x18
    MMWebImageView * _iconImageView; // +0x20
    MMUIView * _loadingView; // +0x28
    MMUIView * _blurView; // +0x30
    MMUIView * _borderView; // +0x38
    MMUILabel * _titleLabel; // +0x40
    UIControl * _detailAdjustControl; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)configWithItem:(id)arg1;
- (void)setIsCellSelected:(BOOL)arg1 ableToEdit:(BOOL)arg2;
- (void)detailAdjustControlDidTap:(id)arg1;
- (id)mj_loadingContainerView;
- (id)iconContainerView;
- (id)iconImageView;
- (id)loadingView;
- (id)blurView;
- (id)borderView;
- (id)titleLabel;
- (id)detailAdjustControl;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isCellSelected;
- (void)setIconContainerView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setBorderView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailAdjustControl:(id)arg1;
- (void).cxx_destruct;
@end


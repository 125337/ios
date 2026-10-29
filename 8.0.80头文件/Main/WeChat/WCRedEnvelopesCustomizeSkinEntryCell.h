@interface WCRedEnvelopesCustomizeSkinEntryCell : UICollectionViewCell
{
    BOOL _isSmallPicMode; // +0x8
    id <WCRedEnvelopesCustomizeSkinEntryCellDelegate> _delegate; // +0x10
    HbEnvelopSource * _viewData; // +0x18
    UIView * _contentBkgView; // +0x20
    UIView * _borderView; // +0x28
    UIImageView * _iconImgView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    UIImageView * _arrowImgView; // +0x40
    UIButton * _titleButton; // +0x48
    MMUILabel * _descLabel; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateCellData:(id)arg1 delegate:(id)arg2;
- (void)updateCellData:(id)arg1 delegate:(id)arg2 isSmallPicMode:(BOOL)arg3;
- (void)layoutSubviews;
- (void)setupContentView;
- (void)titleEntryButtonClick;
- (void)titleEntryButtonTouchDown;
- (void)titleEntryButtonTouchUp;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (id)contentBkgView;
- (void)setContentBkgView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)iconImgView;
- (void)setIconImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)titleButton;
- (void)setTitleButton:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (BOOL)isSmallPicMode;
- (void)setIsSmallPicMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

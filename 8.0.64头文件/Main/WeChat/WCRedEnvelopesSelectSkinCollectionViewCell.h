@interface WCRedEnvelopesSelectSkinCollectionViewCell : UICollectionViewCell <WCRedEnvelopesReceiveHomeTemplateViewDelegate, ILinkEventExt>
{
    BOOL _isSkinSelected; // +0x8
    BOOL _isDisabled; // +0x9
    BOOL _isSmallMode; // +0xa
    BOOL _isLeft; // +0xb
    id <WCRedEnvelopesSelectSkinCollectionViewCellDelegate> _m_delegate; // +0x10
    UIView * _skinBackgroundView; // +0x18
    UIImageView * _templateView; // +0x20
    UILabel * _corporationLabel; // +0x28
    UIImageView * _selectedImageView; // +0x30
    UILabel * _selectLabel; // +0x38
    UILabel * _overtimeLabel; // +0x40
    UIButton * _selectButton; // +0x48
    unsigned long long _cellType; // +0x50
    WCRedEnvelopesReceiveHomeTemplateItem * _templateItem; // +0x58
    HbEnvelopSource * _hbShowResource; // +0x60
    UIImage * _skinImage; // +0x68
    UIView * _downloadImageStatusMaskView; // +0x70
    MMUIActivityIndicatorView * _imageDownloadingView; // +0x78
    WCRedEnvelopesReceiveHomeTemplateView * _templateItemView; // +0x80
    UIView * _borderView; // +0x88
    unsigned long long _viewStatus; // +0x90
    UIImageView * _reloadImageView; // +0x98
    UILabel * _tryReloadImageLabel; // +0xa0
    UILabel * _descriptLabel; // +0xa8
    UIView * _rightUpTagView; // +0xb0
    UILabel * _expiredTimeLabel; // +0xb8
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateBackgroundView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)canTouch;
- (void)setSkinSelected:(BOOL)arg1;
- (void)updateCellData:(id)arg1;
- (id)getTemplateItemData:(id)arg1;
- (void)updateSmallSelectSkinCellData:(id)arg1;
- (void)updateExpiredSkinCellData:(id)arg1;
- (void)updateSmallSelectSkinCellView;
- (void)updateExpireView;
- (void)updateExpiredSkinBackgroundView;
- (double)onelineHeight:(id)arg1;
- (void)skinImageDownloadOK;
- (void)skinImageDownloadFail;
- (void)updateMaskView;
- (void)playPag;
- (void)stopPag;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)skinBackgroundView;
- (void)setSkinBackgroundView:(id)arg1;
- (id)templateView;
- (void)setTemplateView:(id)arg1;
- (id)corporationLabel;
- (void)setCorporationLabel:(id)arg1;
- (id)selectedImageView;
- (void)setSelectedImageView:(id)arg1;
- (id)selectLabel;
- (void)setSelectLabel:(id)arg1;
- (id)overtimeLabel;
- (void)setOvertimeLabel:(id)arg1;
- (id)selectButton;
- (void)setSelectButton:(id)arg1;
- (BOOL)isSkinSelected;
- (void)setIsSkinSelected:(BOOL)arg1;
- (BOOL)isDisabled;
- (void)setIsDisabled:(BOOL)arg1;
- (BOOL)isSmallMode;
- (void)setIsSmallMode:(BOOL)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (BOOL)isLeft;
- (void)setIsLeft:(BOOL)arg1;
- (id)templateItem;
- (void)setTemplateItem:(id)arg1;
- (id)hbShowResource;
- (void)setHbShowResource:(id)arg1;
- (id)skinImage;
- (void)setSkinImage:(id)arg1;
- (id)downloadImageStatusMaskView;
- (void)setDownloadImageStatusMaskView:(id)arg1;
- (id)imageDownloadingView;
- (void)setImageDownloadingView:(id)arg1;
- (id)templateItemView;
- (void)setTemplateItemView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (unsigned long long)viewStatus;
- (void)setViewStatus:(unsigned long long)arg1;
- (id)reloadImageView;
- (void)setReloadImageView:(id)arg1;
- (id)tryReloadImageLabel;
- (void)setTryReloadImageLabel:(id)arg1;
- (id)descriptLabel;
- (void)setDescriptLabel:(id)arg1;
- (id)rightUpTagView;
- (void)setRightUpTagView:(id)arg1;
- (id)expiredTimeLabel;
- (void)setExpiredTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end

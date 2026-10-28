@interface WCAlbumPickerCollectionCellView : UICollectionViewCell <WCImageViewDelegate, WCAlbumPickerExt>
{
    BOOL _isInPreview; // +0x8
    BOOL _enabled; // +0x9
    BOOL _isSelected; // +0xa
    id <WCAlbumPickerCollectionCellViewDelegate> _delegate; // +0x10
    id <MMAssetPickerControllerFinderAssetDelegate> _finderDelegate; // +0x18
    WCMediaItem * _mediaItem; // +0x20
    WCImageView * _thumbImageView; // +0x28
    UIView * _selectionBgView; // +0x30
    MMUILabel * _nameLabel; // +0x38
    MMUILabel * _sizeLabel; // +0x40
    UIView * _disabledMaskView; // +0x48
    UIView * _tagBackgroundView; // +0x50
    UILabel * _lengthLabel; // +0x58
    UIView * _videoLogoView; // +0x60
    UIView * _editImageView; // +0x68
    UIImageView * _privateImageView; // +0x70
    MMAssetSelectCheckButton * _selectCheckButton; // +0x78
    double _imgHeight; // +0x80
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)commInit;
- (id)privateImageView;
- (void)setMediaItem:(id)arg1;
- (void)updatePrivacyIcon;
- (void)prepareForReuse;
- (void)updateAssetInfo;
- (double)tagLogoLBMargin;
- (void)showTagBGView;
- (void)showVideoLogoViewWithTime:(id)arg1;
- (void)showEditedLogoView;
- (void)showAseetNameAndSize;
- (void)setIsInPreview:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)updateEnabledState;
- (BOOL)isCurrentAssetEnable;
- (void)updateAssetViewEnabledWithSelectedCount:(unsigned long long)arg1;
- (BOOL)accessibilityPerformMagicTap;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (CGPoint)accessibilityActivationPoint;
- (void)showedSelectedMarkWithIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)toggleSelection;
- (void)updateBgMaskView;
- (id)timeStringBySeconds:(double)arg1;
- (void)onWCAlbumPickerControllerChangeSelectInfo:(id)arg1 index:(long long)arg2;
- (void)onWCAlbumPickerControllerChangeSelectInfosOrder;
- (void)onWCAlbumPickerControllerFinishEditMedia:(id)arg1;
- (void)onWCAlbumPickerControllerUpdateAllAssetViewBorderWithMedia:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)finderDelegate;
- (void)setFinderDelegate:(id)arg1;
- (id)mediaItem;
- (BOOL)isInPreview;
- (BOOL)enabled;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)selectionBgView;
- (void)setSelectionBgView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)disabledMaskView;
- (void)setDisabledMaskView:(id)arg1;
- (id)tagBackgroundView;
- (void)setTagBackgroundView:(id)arg1;
- (id)lengthLabel;
- (void)setLengthLabel:(id)arg1;
- (id)videoLogoView;
- (void)setVideoLogoView:(id)arg1;
- (id)editImageView;
- (void)setEditImageView:(id)arg1;
- (void)setPrivateImageView:(id)arg1;
- (id)selectCheckButton;
- (void)setSelectCheckButton:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (double)imgHeight;
- (void)setImgHeight:(double)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderFeedPickerCollectionViewCell : UICollectionViewCell
{
    id <WCFinderFeedPickerCollectionViewCellDelegate> _delegate; // +0x8
    WCFinderFeedImageCDNView * _coverImageView; // +0x10
    CAGradientLayer * _maskLayer; // +0x18
    MMUILabel * _timeLabel; // +0x20
    UIView * _unenableMask; // +0x28
    UIView * _selectionBgView; // +0x30
    WCFinderFeedContentVM * _contentVM; // +0x38
    MMAssetSelectCheckButton * _selectCheckButton; // +0x40
    UILabel * _indexLabel; // +0x48
}
+ (id)cellID;
+ (double)cellHeightWidthWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)arg1;
- (void)showedSelectedMarkWithIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)onTapButton;
- (void)updateBgMaskView;
- (void)setSelectEnabled:(BOOL)arg1 selected:(BOOL)arg2;
- (id)contentVM;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)unenableMask;
- (void)setUnenableMask:(id)arg1;
- (id)selectionBgView;
- (void)setSelectionBgView:(id)arg1;
- (void)setContentVM:(id)arg1;
- (id)selectCheckButton;
- (void)setSelectCheckButton:(id)arg1;
- (id)indexLabel;
- (void)setIndexLabel:(id)arg1;
- (void).cxx_destruct;
@end

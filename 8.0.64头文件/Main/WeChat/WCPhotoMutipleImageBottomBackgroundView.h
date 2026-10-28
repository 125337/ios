@interface WCPhotoMutipleImageBottomBackgroundView : UIView
{
    BOOL _fittingSize; // +0x8
    RichTextView * _contentView; // +0x10
    UIImageView * _privateImageView; // +0x18
    WCDataItem * _dataItem; // +0x20
    CAGradientLayer * _backgroundLayer; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2;
- (void)initView;
- (void)initBackgroundLayer;
- (void)initContentView;
- (void)initPrivateImageView;
- (void)updateWithDataItem:(id)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)privateImageView;
- (void)setPrivateImageView:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg1;
- (BOOL)fittingSize;
- (void)setFittingSize:(BOOL)arg1;
- (void).cxx_destruct;
@end

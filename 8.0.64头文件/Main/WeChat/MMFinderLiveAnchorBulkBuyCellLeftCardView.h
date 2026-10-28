@interface MMFinderLiveAnchorBulkBuyCellLeftCardView : UIView
{
    MMFinderLiveGoodsSerialNumberView * _serialNumberView; // +0x8
    MMWebImageView * _imageView; // +0x10
    UILabel * _progressLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithBulkBuy:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)serialNumberView;
- (void)setSerialNumberView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (void).cxx_destruct;
@end

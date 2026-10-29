@interface MMFinderLiveWecoinLabelView : UIView
{
    UILabel * _coinLabel; // +0x8
    UIImageView * _coinImageView; // +0x10
    MMFinderLiveWecoinLabelViewConfig * _config; // +0x18
}
- (id)init;
- (void)initViews;
- (void)setupViews;
- (void)updateWithConfig:(id)arg1;
- (void)setWecoinAmount:(unsigned long long)arg1;
- (void)sizeToFit;
- (void)layoutSubviews;
- (id)coinLabel;
- (void)setCoinLabel:(id)arg1;
- (id)coinImageView;
- (void)setCoinImageView:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end


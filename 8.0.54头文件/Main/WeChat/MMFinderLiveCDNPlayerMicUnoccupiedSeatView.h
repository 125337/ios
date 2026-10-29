@interface MMFinderLiveCDNPlayerMicUnoccupiedSeatView : UIView
{
    MMFinderLiveConnectMicSeatInfo * _micSeatInfo; // +0x8
    UIImageView * _addIconView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configUI;
- (void)layoutUI;
- (id)micSeatInfo;
- (void)setMicSeatInfo:(id)arg1;
- (id)addIconView;
- (void)setAddIconView:(id)arg1;
- (void).cxx_destruct;
@end


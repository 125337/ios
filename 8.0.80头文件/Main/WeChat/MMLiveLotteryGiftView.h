@interface MMLiveLotteryGiftView : UIView <MMFinderLiveGiftResourceMgrExt>
{
    UIImageView * _thumbnailView; // +0x8
    MMUILabel * _giftCountLabel; // +0x10
    MMFinderLiveGiftPacketViewModel * _viewModel; // +0x18
    MMLiveLotteryGiftConfit * _config; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithViewModel:(id)arg1 config:(id)arg2;
- (void)updateProductCount:(unsigned int)arg1;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 resType:(long long)arg2 productId:(id)arg3 downloadUrl:(id)arg4;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)giftCountLabel;
- (void)setGiftCountLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

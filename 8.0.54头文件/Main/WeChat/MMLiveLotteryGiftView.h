@interface MMLiveLotteryGiftView : UIView <MMFinderLiveGiftResourceMgrExt>
{
    UIImageView * _thumbnailView; // +0x8
    MMUILabel * _giftCountLabel; // +0x10
    MMFinderLiveGiftPacketViewModel * _viewModel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)updateProductCount:(unsigned int)arg1;
- (id)getDefaultGiftThumbImage;
- (void)initUI;
- (void)layoutSubviews;
- (void)onLiveGiftResDownloadCompleted:(id)arg1 retry:(unsigned long long)arg2 totalLength:(unsigned long long)arg3 resType:(long long)arg4 productId:(id)arg5 downloadUrl:(id)arg6;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)giftCountLabel;
- (void)setGiftCountLabel:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end


@interface WSSimilarEmotItemView : UIView <MMWebImageViewDelegate>
{
    MMWebImageView * _emoticonThumbView; // +0x8
    MMWebImageView * _emoticonGifView; // +0x10
    WSEmoticonModel * _model; // +0x18
    id <WSSimilarEmotItemDelegate> _delegate; // +0x20
    MMUIActivityIndicatorView * _loadingView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)clickItem:(id)arg1;
- (void)longPressItem:(id)arg1;
- (void)setModel:(id)arg1;
- (void)updateImageData:(id)arg1;
- (void)resizeGifFrame;
- (void)resizeThumbFrame;
- (void)layoutSubviews;
- (void)startLoading;
- (void)stopLoading;
- (void)onLoadImageOK:(id)arg1;
- (id)emoticonThumbView;
- (void)setEmoticonThumbView:(id)arg1;
- (id)emoticonGifView;
- (void)setEmoticonGifView:(id)arg1;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end


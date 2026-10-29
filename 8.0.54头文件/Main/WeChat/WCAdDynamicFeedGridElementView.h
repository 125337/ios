@interface WCAdDynamicFeedGridElementView : WCAdDynamicFeedEmptyLayoutView
{
    WCMediaItem * _mediaItem; // +0x30
    WCDataItem * _dataItem; // +0x38
    unsigned long long _index; // +0x40
    WCImageView * _imageView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 elementInfo:(id)arg2 mediaItem:(id)arg3 dataItem:(id)arg4 index:(unsigned long long)arg5;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)generateGridElement;
- (id)imageView;
- (void)onBackgroundButtonClicked:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void)setImageView:(id)arg1;
- (void).cxx_destruct;
@end


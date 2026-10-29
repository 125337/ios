@interface WCAdDynamicFeedMediaHolderView : WCAdDynamicFeedEmptyLayoutView
{
    WCDataItem * _dataItem; // +0x30
    WCMediaItem * _mediaItem; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 elementInfo:(id)arg2 dataItem:(id)arg3;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)resetSubViews;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (void).cxx_destruct;
@end


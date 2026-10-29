@interface CBTCoopV2TimelineFinderMediaView : MMUIView
{
    BOOL _isVideoFeed; // +0x8
    WCDataItem * _dataItem; // +0x10
    MMWebImageView * _coverView; // +0x18
    UIImageView * _playView; // +0x20
}
+ (BOOL)isPortraitFinderViewModel:(id)arg1;
+ (CGSize)finderPreviewSizeForViewModel:(id)arg1;
+ (CGSize)finderPreviewSizeForDataItem:(id)arg1;
+ (double)renderedHeightForDataItem:(id)arg1;
- (id)initWithDataItem:(id)arg1;
- (void)ensureSubviews;
- (void)layoutSubviews;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)playView;
- (void)setPlayView:(id)arg1;
- (BOOL)isVideoFeed;
- (void)setIsVideoFeed:(BOOL)arg1;
- (void).cxx_destruct;
@end

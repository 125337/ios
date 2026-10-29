@interface CBTCoopV2TimelineVideoMediaView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    WCImageView * _previewView; // +0x10
    UIImageView * _playView; // +0x18
}
+ (BOOL)isPortraitVideoMediaItem:(id)arg1;
+ (CGSize)videoPreviewSizeForMediaItem:(id)arg1;
+ (double)renderedHeightForDataItem:(id)arg1 contentWidth:(double)arg2;
- (id)initWithDataItem:(id)arg1 contentWidth:(double)arg2;
- (void)ensureSubviews;
- (void)layoutSubviews;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)playView;
- (void)setPlayView:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCTimeLineAdLookbookCardBrandNewMediaView : WCTimeLineAdLookbookCardMediaView
{
    id <WCTimeLineAdLookbookCardBrandNewMediaViewDelegate> _brandNewMediaDelegate; // +0x48
    WCAdLookbookBrandNewItem * _brandNewItemInfo; // +0x50
    MMUIButton * _coverButton; // +0x58
}
- (void)generateInitialSubviews;
- (void)layoutSubviews;
- (id)brandNewItemInfo;
- (id)coverButton;
- (id)generateSightViewWithMediaData:(id)arg1 withFrame:(CGRect)arg2 dataItem:(id)arg3 bTimelineScene:(BOOL)arg4;
- (void)onCoverButtonClicked:(id)arg1;
- (void)setBrandNewMediaHighlighted:(BOOL)arg1;
- (void)onPlayEnd:(BOOL)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (id)brandNewMediaDelegate;
- (void)setBrandNewMediaDelegate:(id)arg1;
- (void)setBrandNewItemInfo:(id)arg1;
- (void)setCoverButton:(id)arg1;
- (void).cxx_destruct;
@end

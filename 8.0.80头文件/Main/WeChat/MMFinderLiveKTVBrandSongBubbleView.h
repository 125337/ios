@interface MMFinderLiveKTVBrandSongBubbleView : UIControl
{
    UIView * _bubbleContentView; // +0x8
    UIImageView * _arrowView; // +0x10
    UIView * _highlightedMaskView; // +0x18
}
+ (double)arrowOccupiedWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)setBubbleContentView:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (id)arrowView;
- (id)highlightedMaskView;
- (id)bubbleContentView;
- (void)setArrowView:(id)arg1;
- (void)setHighlightedMaskView:(id)arg1;
- (void).cxx_destruct;
@end

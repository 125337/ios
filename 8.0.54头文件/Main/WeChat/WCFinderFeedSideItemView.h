@interface WCFinderFeedSideItemView : UIButton
{
    BOOL _showHighlight; // +0x8
    WCFinderFeedImageCDNView * _coverView; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    UIView * _highlightView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentVM:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setShowHighlight:(BOOL)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)contentVM;
- (id)highlightView;
- (void)setHighlightView:(id)arg1;
- (BOOL)showHighlight;
- (void).cxx_destruct;
@end


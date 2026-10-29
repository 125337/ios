@interface KindaUIScrollView : UIScrollView
{
    BOOL _isHorizontal; // +0x8
    BOOL _showsScrollIndicator; // +0x9
    BOOL _scrollWhenViewSizeEnough; // +0xa
}
- (id)init;
- (void)setIsHorizontal:(BOOL)arg1;
- (void)setShowsScrollIndicator:(BOOL)arg1;
- (void)setScrollWhenViewSizeEnough:(BOOL)arg1;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (BOOL)isHorizontal;
- (BOOL)showsScrollIndicator;
- (BOOL)scrollWhenViewSizeEnough;
@end

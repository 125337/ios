@interface MultipleTextStateCardFooterDotsView : UIView
{
    BOOL _selected; // +0x8
    unsigned long long _count; // +0x10
    unsigned long long _index; // +0x18
    NSMutableArray * _dotViewList; // +0x20
    UIView * _backgroundBlurView; // +0x28
    _NSRange _slidingWindow; // +0x30
}
+ (id)generateDotView;
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)initBackgroudView;
- (void)initDotViews;
- (void)setCount:(unsigned long long)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (long long)updateSlidingWindowWithOffset;
- (void)updateDotViews;
- (void)updateLayout;
- (void)layoutSubviews;
- (unsigned long long)count;
- (unsigned long long)index;
- (BOOL)isSelected;
- (_NSRange)slidingWindow;
- (void)setSlidingWindow:(_NSRange)arg1;
- (id)dotViewList;
- (void)setDotViewList:(id)arg1;
- (id)backgroundBlurView;
- (void)setBackgroundBlurView:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMScrollStack : UIScrollView
{
    UIStackView * _stackView; // +0x8
    long long _axis; // +0x10
}
- (id)init;
- (id)initWithAxis:(long long)arg1;
- (id)initWithAxis:(long long)arg1 contentMode:(unsigned long long)arg2;
- (id)appendView:(id)arg1 withNextSpace:(double)arg2;
- (void)setActiveLayoutMargins:(UIEdgeInsets)arg1;
- (void)appendSeparator;
- (void)appendSeparatorWithStartPadding:(double)arg1;
- (void)appendSeparatorWithEndPadding:(double)arg1;
- (id)appendSeparatorWithStartPadding:(double)arg1 endPadding:(double)arg2;
- (void)removeAllCells;
- (BOOL)isVertical;
- (long long)alignment;
- (void)setAlignment:(long long)arg1;
- (id)stackView;
- (void)setStackView:(id)arg1;
- (long long)axis;
- (void)setAxis:(long long)arg1;
- (void).cxx_destruct;
@end


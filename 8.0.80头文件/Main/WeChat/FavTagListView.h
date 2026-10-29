@interface FavTagListView : MMUIView
{
    NSMutableArray * m_arrTagButtons; // +0x8
    UIColor * m_defaultButtonTextColor; // +0x10
    id <FavTagEditViewDelegate> m_delegate; // +0x18
    BOOL _alignCenter; // +0x20
    double _buttonCornerRadius; // +0x28
}
- (id)initWithTags:(id)arg1 width:(double)arg2;
- (id)initWithTags:(id)arg1 alignCenter:(BOOL)arg2 width:(double)arg3;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setButtonCornerRadius:(double)arg1;
- (void)setButtonBackground:(id)arg1 chosen:(BOOL)arg2 cornerRadius:(double)arg3;
- (id)addButton:(id)arg1;
- (void)setButtonHighLight:(BOOL)arg1 named:(id)arg2;
- (void)setHighLightKeyword:(id)arg1;
- (void)highLightButtons:(id)arg1;
- (void)unHighLightAll;
- (CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (void)makeButtonCenter;
- (void)buttonClicked:(id)arg1;
- (void)longPressBtn:(id)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)alignCenter;
- (void)setAlignCenter:(BOOL)arg1;
- (double)buttonCornerRadius;
- (void).cxx_destruct;
@end

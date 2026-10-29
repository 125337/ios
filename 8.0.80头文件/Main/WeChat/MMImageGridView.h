@interface MMImageGridView : UIView
{
    CGRect m_startRect; // +0x8
    double m_stepX; // +0x28
    double m_stepY; // +0x30
    long long m_columnCount; // +0x38
    NSMutableArray * m_arrOfViews; // +0x40
}
+ (double)getLayoutHeightForViews:(long long)arg1 columms:(long long)arg2 unitHeight:(double)arg3;
- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (CGSize)getLayoutSize;
- (CGSize)getLayoutSizeWithRefresh;
- (CGSize)getLayoutSizeEx:(BOOL)arg1;
- (CGRect)m_startRect;
- (void)setM_startRect:(CGRect)arg1;
- (double)m_stepX;
- (void)setM_stepX:(double)arg1;
- (double)m_stepY;
- (void)setM_stepY:(double)arg1;
- (long long)m_columnCount;
- (void)setM_columnCount:(long long)arg1;
- (id)m_arrOfViews;
- (void)setM_arrOfViews:(id)arg1;
- (void).cxx_destruct;
@end

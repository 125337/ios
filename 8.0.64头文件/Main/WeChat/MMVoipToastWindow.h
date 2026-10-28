@interface MMVoipToastWindow : MMUIWindow
{
    MMStringToastView * m_stringView; // +0x8
    double _m_fixOriginX; // +0x10
    CGRect m_fixRect; // +0x18
}
- (void)dealloc;
- (void)changeOriginY:(double)arg1;
- (void)clearCurrentString;
- (void)clearAllString;
- (id)initWithFrame:(CGRect)arg1 isUsingMPUI:(BOOL)arg2;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3 isDiff:(BOOL)arg4;
- (void)makeKeyWindow;
- (void)statusBarDidRotate;
- (void)rotateToOrientation:(long long)arg1;
- (id)m_stringView;
- (void)setM_stringView:(id)arg1;
- (CGRect)m_fixRect;
- (void)setM_fixRect:(CGRect)arg1;
- (double)m_fixOriginX;
- (void)setM_fixOriginX:(double)arg1;
- (void).cxx_destruct;
@end

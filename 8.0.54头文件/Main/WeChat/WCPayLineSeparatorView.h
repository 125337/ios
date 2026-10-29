@interface WCPayLineSeparatorView : UIView
{
    BOOL _needLine; // +0x8
    NSArray * _views; // +0x10
    double _interval; // +0x18
    double _lineX; // +0x20
}
- (void)updateViews:(id)arg1 interval:(double)arg2 needLine:(BOOL)arg3;
- (void)updateViews:(id)arg1 interval:(double)arg2 needLine:(BOOL)arg3 lineX:(double)arg4;
- (void)layoutSubviews;
- (void)updateView;
- (id)views;
- (void)setViews:(id)arg1;
- (double)interval;
- (void)setInterval:(double)arg1;
- (BOOL)needLine;
- (void)setNeedLine:(BOOL)arg1;
- (double)lineX;
- (void)setLineX:(double)arg1;
- (void).cxx_destruct;
@end


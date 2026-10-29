@interface MJTrimHandle : UIView
{
    unsigned long long _style; // +0x8
    UIView * _lineView; // +0x10
    UIView * _handleView; // +0x18
    UIImageView * _handleIconView; // +0x20
    MMUIView * _snapIndicatorLine; // +0x28
    MMUIView * _snapIndicatorDot; // +0x30
}
+ (id)trimHandleWithStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)setupViews;
- (void)layoutViews;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)handleView;
- (void)setHandleView:(id)arg1;
- (id)handleIconView;
- (void)setHandleIconView:(id)arg1;
- (id)snapIndicatorLine;
- (void)setSnapIndicatorLine:(id)arg1;
- (id)snapIndicatorDot;
- (void)setSnapIndicatorDot:(id)arg1;
- (void).cxx_destruct;
@end


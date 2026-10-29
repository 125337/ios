@interface MMLiveWeCoinLabel : MMUIView
{
    UIImageView * _wecoinIconView; // +0x8
    MMUILabel * _wecoinIconLabel; // +0x10
    double _padding; // +0x18
}
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setWecoin:(unsigned int)arg1 textFont:(id)arg2 iconSize:(CGSize)arg3 padding:(double)arg4;
- (void)sizeToFit;
- (id)wecoinIconView;
- (id)wecoinIconLabel;
- (void)setWecoinIconView:(id)arg1;
- (void)setWecoinIconLabel:(id)arg1;
- (double)padding;
- (void)setPadding:(double)arg1;
- (void).cxx_destruct;
@end


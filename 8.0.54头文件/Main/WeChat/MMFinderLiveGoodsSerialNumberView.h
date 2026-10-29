@interface MMFinderLiveGoodsSerialNumberView : UIView
{
    UIFont * _font; // +0x8
    unsigned long long _serialNumber; // +0x10
    UILabel * _label; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setSerialNumber:(unsigned long long)arg1;
- (void)setFont:(id)arg1;
- (id)font;
- (unsigned long long)serialNumber;
- (id)label;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end


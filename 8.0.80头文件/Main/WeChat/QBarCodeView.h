@interface QBarCodeView : MMUIView
{
    int _width; // +0x8
    int _height; // +0xc
    vector<unsigned char, std::allocator<unsigned char>> _data; // +0x10
    BOOL _bTwoDimensional; // +0x28
    BOOL _disableDefaultAccessibility; // +0x29
}
- (void)displayQBarCode:(QBAR_IMAGE)arg1 TwoDimensional:(BOOL)arg2;
- (void)drawRect:(CGRect)arg1;
- (BOOL)disableDefaultAccessibility;
- (void)setDisableDefaultAccessibility:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

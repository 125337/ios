@interface WCFinderTabFontFactory : NSObject
{
    double _size; // +0x8
    UIFont * _bold; // +0x10
    UIFont * _regular; // +0x18
    double _boldWeight; // +0x20
    double _regularWeight; // +0x28
}
- (id)initWithSize:(double)arg1;
- (id)fontWithValue:(double)arg1;
- (double)_readFontWeight:(id)arg1;
- (double)size;
- (void)setSize:(double)arg1;
- (id)bold;
- (void)setBold:(id)arg1;
- (id)regular;
- (void)setRegular:(id)arg1;
- (double)boldWeight;
- (void)setBoldWeight:(double)arg1;
- (double)regularWeight;
- (void)setRegularWeight:(double)arg1;
- (void).cxx_destruct;
@end


@interface WAAppMessageTagInfo : NSObject
{
    NSString * _appTagLabelText; // +0x8
    UIColor * _appTagLabelTextColor; // +0x10
    UIFont * _appTagLabelFont; // +0x18
    double _appTagLabelWidth; // +0x20
}
- (id)appTagLabelText;
- (void)setAppTagLabelText:(id)arg1;
- (id)appTagLabelTextColor;
- (void)setAppTagLabelTextColor:(id)arg1;
- (id)appTagLabelFont;
- (void)setAppTagLabelFont:(id)arg1;
- (double)appTagLabelWidth;
- (void)setAppTagLabelWidth:(double)arg1;
- (void).cxx_destruct;
@end

@interface WCArrowDownIconStyle : NSObject <NSCoding>
{
    NSString * _iconUrl; // +0x8
    double _layoutWidth; // +0x10
    double _layoutHeight; // +0x18
    double _paddingBottom; // +0x20
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (double)layoutHeight;
- (void)setLayoutHeight:(double)arg1;
- (double)paddingBottom;
- (void)setPaddingBottom:(double)arg1;
- (void).cxx_destruct;
@end

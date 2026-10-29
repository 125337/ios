@interface WCAdFeedDisplayInfo : NSObject <NSCoding>
{
    int contentDisplayType; // +0x8
    int mediaDisplayMode; // +0xc
    int basicRemWidth; // +0x10
    int basicRootFontSize; // +0x14
    double mediaDisplayWidth; // +0x18
    double mediaDisplayHeight; // +0x20
    NSString * mediaIconUrl; // +0x28
    double mediaIconWidth; // +0x30
    double mediaIconHeight; // +0x38
    double mediaIconPaddingRight; // +0x40
    double mediaIconPaddingBottom; // +0x48
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)contentDisplayType;
- (void)setContentDisplayType:(int)arg1;
- (int)mediaDisplayMode;
- (void)setMediaDisplayMode:(int)arg1;
- (int)basicRemWidth;
- (void)setBasicRemWidth:(int)arg1;
- (int)basicRootFontSize;
- (void)setBasicRootFontSize:(int)arg1;
- (double)mediaDisplayWidth;
- (void)setMediaDisplayWidth:(double)arg1;
- (double)mediaDisplayHeight;
- (void)setMediaDisplayHeight:(double)arg1;
- (id)mediaIconUrl;
- (void)setMediaIconUrl:(id)arg1;
- (double)mediaIconWidth;
- (void)setMediaIconWidth:(double)arg1;
- (double)mediaIconHeight;
- (void)setMediaIconHeight:(double)arg1;
- (double)mediaIconPaddingRight;
- (void)setMediaIconPaddingRight:(double)arg1;
- (double)mediaIconPaddingBottom;
- (void)setMediaIconPaddingBottom:(double)arg1;
- (void).cxx_destruct;
@end


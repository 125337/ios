@interface WCAdSphereCardInfo : NSObject <NSCoding>
{
    unsigned int _displayType; // +0x8
    unsigned int _markMaxAlpha; // +0xc
    unsigned int _titlePosition; // +0x10
    NSString * _title; // +0x18
    NSString * _descriptionText; // +0x20
    unsigned long long _gestureDelayTime; // +0x28
    NSString * _sphereThumbUrl; // +0x30
    NSString * _sphereImageUrl; // +0x38
    double _sphereImageWidth; // +0x40
    double _sphereImageHeight; // +0x48
    NSString * _bgColor; // +0x50
    double _bgColorAlpha; // +0x58
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)displayType;
- (void)setDisplayType:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (unsigned int)markMaxAlpha;
- (void)setMarkMaxAlpha:(unsigned int)arg1;
- (unsigned int)titlePosition;
- (void)setTitlePosition:(unsigned int)arg1;
- (unsigned long long)gestureDelayTime;
- (void)setGestureDelayTime:(unsigned long long)arg1;
- (id)sphereThumbUrl;
- (void)setSphereThumbUrl:(id)arg1;
- (id)sphereImageUrl;
- (void)setSphereImageUrl:(id)arg1;
- (double)sphereImageWidth;
- (void)setSphereImageWidth:(double)arg1;
- (double)sphereImageHeight;
- (void)setSphereImageHeight:(double)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (double)bgColorAlpha;
- (void)setBgColorAlpha:(double)arg1;
- (void).cxx_destruct;
@end


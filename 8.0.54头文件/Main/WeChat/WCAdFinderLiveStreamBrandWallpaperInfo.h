@interface WCAdFinderLiveStreamBrandWallpaperInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _horizontalGravity; // +0x8
    int _verticalGravity; // +0xc
    NSString * _brandWallpaperImageUrl; // +0x10
    NSString * _frontImageUrl; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)brandWallpaperImageUrl;
- (void)setBrandWallpaperImageUrl:(id)arg1;
- (id)frontImageUrl;
- (void)setFrontImageUrl:(id)arg1;
- (int)horizontalGravity;
- (void)setHorizontalGravity:(int)arg1;
- (int)verticalGravity;
- (void)setVerticalGravity:(int)arg1;
- (void).cxx_destruct;
@end


@interface WCAdFinderLiveStreamInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    unsigned int _previewJoinliveAdControlFlag; // +0x8
    int _displayType; // +0xc
    WCAdFinderLiveInfo * _finderLiveInfo; // +0x10
    WCAdFinderLiveStreamBrandWallpaperInfo * _brandWallpaperInfo; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)finderLiveInfo;
- (void)setFinderLiveInfo:(id)arg1;
- (unsigned int)previewJoinliveAdControlFlag;
- (void)setPreviewJoinliveAdControlFlag:(unsigned int)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (id)brandWallpaperInfo;
- (void)setBrandWallpaperInfo:(id)arg1;
- (void).cxx_destruct;
@end


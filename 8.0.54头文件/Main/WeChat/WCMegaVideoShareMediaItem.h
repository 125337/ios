@interface WCMegaVideoShareMediaItem : NSObject <NSCoding, NSCopying, PBCoding>
{
    NSString * _url; // +0x8
    NSString * _thumbUrl; // +0x10
    NSString * _width; // +0x18
    NSString * _height; // +0x20
    NSString * _coverUrl; // +0x28
    NSString * _videoPlayDuration; // +0x30
}
+ (void)PBArrayAdd_url;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_videoPlayDuration;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)toXMLV2;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)videoPlayDuration;
- (void)setVideoPlayDuration:(id)arg1;
- (void).cxx_destruct;
@end


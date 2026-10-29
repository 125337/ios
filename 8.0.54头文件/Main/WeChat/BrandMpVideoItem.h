@interface BrandMpVideoItem : NSObject <NSCopying, PBCoding>
{
    BOOL _bUseExternalVideoPath; // +0x8
    BOOL _bNoNeedRequestNewUrl; // +0x9
    BOOL _forbidForward; // +0xa
    unsigned int _subscene; // +0xc
    NSString * _mpUrl; // +0x10
    NSString * _videoVid; // +0x18
    NSString * _videoUrl; // +0x20
    double _videoDuration; // +0x28
    double _thumbWidth; // +0x30
    double _thumbHeight; // +0x38
    NSString * _videoUrlNew; // +0x40
}
+ (void)PBArrayAdd_mpUrl;
+ (void)PBArrayAdd_videoVid;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_videoDuration;
+ (void)PBArrayAdd_thumbWidth;
+ (void)PBArrayAdd_thumbHeight;
+ (void)PBArrayAdd_bUseExternalVideoPath;
+ (void)PBArrayAdd_subscene;
+ (void)PBArrayAdd_videoUrlNew;
+ (void)PBArrayAdd_forbidForward;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (BOOL)checkData;
- (id)description;
- (id)mpUrl;
- (void)setMpUrl:(id)arg1;
- (id)videoVid;
- (void)setVideoVid:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (double)thumbWidth;
- (void)setThumbWidth:(double)arg1;
- (double)thumbHeight;
- (void)setThumbHeight:(double)arg1;
- (BOOL)bUseExternalVideoPath;
- (void)setBUseExternalVideoPath:(BOOL)arg1;
- (BOOL)bNoNeedRequestNewUrl;
- (void)setBNoNeedRequestNewUrl:(BOOL)arg1;
- (unsigned int)subscene;
- (void)setSubscene:(unsigned int)arg1;
- (id)videoUrlNew;
- (void)setVideoUrlNew:(id)arg1;
- (BOOL)forbidForward;
- (void)setForbidForward:(BOOL)arg1;
- (void).cxx_destruct;
@end


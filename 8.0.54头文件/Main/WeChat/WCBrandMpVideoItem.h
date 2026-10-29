@interface WCBrandMpVideoItem : NSObject <WCContentShareable>
{
    NSString * _bizUsrName; // +0x8
    NSString * _bizNickName; // +0x10
    NSString * _title; // +0x18
    NSString * _mpUrl; // +0x20
    NSString * _videoVid; // +0x28
    NSString * _videoUrl; // +0x30
    double _videoDuration; // +0x38
    NSString * _thumbUrl; // +0x40
    double _thumbWidth; // +0x48
    double _thumbHeight; // +0x50
    NSString * _url; // +0x58
}
+ (void)PBArrayAdd_bizUsrName;
+ (void)PBArrayAdd_bizNickName;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_mpUrl;
+ (void)PBArrayAdd_videoVid;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_videoDuration;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_thumbWidth;
+ (void)PBArrayAdd_thumbHeight;
+ (void)PBArrayAdd_url;
+ (void)initialize;
+ (BOOL)isSupport:(XmlReaderNode_t *)arg1;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)xmlTag;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toXML;
- (BOOL)checkData;
- (id)description;
- (id)bizUsrName;
- (void)setBizUsrName:(id)arg1;
- (id)bizNickName;
- (void)setBizNickName:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)mpUrl;
- (void)setMpUrl:(id)arg1;
- (id)videoVid;
- (void)setVideoVid:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (double)thumbWidth;
- (void)setThumbWidth:(double)arg1;
- (double)thumbHeight;
- (void)setThumbHeight:(double)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end


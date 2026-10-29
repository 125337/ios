@interface WCAdStatePublishInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _imageUrl; // +0x8
    NSString * _videoUrl; // +0x10
    NSString * _videoMd5; // +0x18
    NSString * _iconId; // +0x20
    NSString * _sourceFooterData; // +0x28
    NSString * _sourceVerifyInfo; // +0x30
    NSString * _desc; // +0x38
    NSString * _emoticonUrl; // +0x40
    NSString * _emoticonMd5; // +0x48
    long long _expiredTime; // +0x50
    NSString * _expiredToast; // +0x58
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)videoMd5;
- (void)setVideoMd5:(id)arg1;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (id)sourceFooterData;
- (void)setSourceFooterData:(id)arg1;
- (id)sourceVerifyInfo;
- (void)setSourceVerifyInfo:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)emoticonUrl;
- (void)setEmoticonUrl:(id)arg1;
- (id)emoticonMd5;
- (void)setEmoticonMd5:(id)arg1;
- (long long)expiredTime;
- (void)setExpiredTime:(long long)arg1;
- (id)expiredToast;
- (void)setExpiredToast:(id)arg1;
- (void).cxx_destruct;
@end


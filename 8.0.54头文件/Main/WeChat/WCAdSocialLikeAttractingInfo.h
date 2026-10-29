@interface WCAdSocialLikeAttractingInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    unsigned long long _interval; // +0x8
    NSString * _pagUrl; // +0x10
    NSString * _pagMD5; // +0x18
    double _offsetY; // +0x20
    NSString * _iconPagUrl; // +0x28
    NSString * _iconPagMD5; // +0x30
    NSString * _iconPagDarkUrl; // +0x38
    NSString * _iconPagDarkMD5; // +0x40
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)fetchIconPagUrl:(id *)arg1 pagMD5:(id *)arg2;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (id)pagUrl;
- (void)setPagUrl:(id)arg1;
- (id)pagMD5;
- (void)setPagMD5:(id)arg1;
- (double)offsetY;
- (void)setOffsetY:(double)arg1;
- (id)iconPagUrl;
- (void)setIconPagUrl:(id)arg1;
- (id)iconPagMD5;
- (void)setIconPagMD5:(id)arg1;
- (id)iconPagDarkUrl;
- (void)setIconPagDarkUrl:(id)arg1;
- (id)iconPagDarkMD5;
- (void)setIconPagDarkMD5:(id)arg1;
- (void).cxx_destruct;
@end


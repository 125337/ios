@interface SourceImgInfo : NSObject <PBCoding>
{
    unsigned int _bizType; // +0x8
    NSString * _imgSourceUrl; // +0x10
}
+ (void)PBArrayAdd_imgSourceUrl;
+ (void)PBArrayAdd_bizType;
+ (void)initialize;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (BOOL)isValid;
- (id)toXML;
- (id)description;
- (id)imgSourceUrl;
- (void)setImgSourceUrl:(id)arg1;
- (unsigned int)bizType;
- (void)setBizType:(unsigned int)arg1;
- (void).cxx_destruct;
@end


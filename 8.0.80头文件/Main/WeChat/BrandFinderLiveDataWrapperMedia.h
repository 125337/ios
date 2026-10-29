@interface BrandFinderLiveDataWrapperMedia : NSObject <NSCopying>
{
    NSString * _coverUrl; // +0x8
    double _width; // +0x10
    double _height; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)description;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (void).cxx_destruct;
@end

@interface FirstImageInfo : NSObject <NSCopying, PBCoding>
{
    unsigned int _width; // +0x8
    unsigned int _height; // +0xc
    NSString * _cdnUrl; // +0x10
    NSNumber * _x1; // +0x18
    NSNumber * _y1; // +0x20
    NSNumber * _x2; // +0x28
    NSNumber * _y2; // +0x30
}
+ (void)PBArrayAdd_cdnUrl;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_x1;
+ (void)PBArrayAdd_y1;
+ (void)PBArrayAdd_x2;
+ (void)PBArrayAdd_y2;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)cdnUrl;
- (void)setCdnUrl:(id)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (id)x1;
- (void)setX1:(id)arg1;
- (id)y1;
- (void)setY1:(id)arg1;
- (id)x2;
- (void)setX2:(id)arg1;
- (id)y2;
- (void)setY2:(id)arg1;
- (void).cxx_destruct;
@end

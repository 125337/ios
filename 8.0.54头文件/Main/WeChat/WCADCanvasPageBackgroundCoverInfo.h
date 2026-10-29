@interface WCADCanvasPageBackgroundCoverInfo : NSObject <NSCoding>
{
    int _scaleMode; // +0x8
    NSString * _imageUrl; // +0x10
    NSString * _color; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (int)scaleMode;
- (void)setScaleMode:(int)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (void).cxx_destruct;
@end


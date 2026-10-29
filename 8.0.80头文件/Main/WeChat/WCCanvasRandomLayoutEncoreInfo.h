@interface WCCanvasRandomLayoutEncoreInfo : MMObject <NSCoding>
{
    int _encoreType; // +0x8
    NSString * _title; // +0x10
    NSString * _imageUrl; // +0x18
    double _triggerGForce; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (int)encoreType;
- (void)setEncoreType:(int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (double)triggerGForce;
- (void)setTriggerGForce:(double)arg1;
- (void).cxx_destruct;
@end

@interface EcsGiftAnimationInfo : MMObject <NSCopying>
{
    unsigned int _mbMiniVersion; // +0x8
    NSString * _frontPagResName; // +0x10
    NSString * _backgroundPagResName; // +0x18
    NSString * _mbBasicItemType; // +0x20
    NSString * _mbFlyItemType; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)frontPagResName;
- (void)setFrontPagResName:(id)arg1;
- (id)backgroundPagResName;
- (void)setBackgroundPagResName:(id)arg1;
- (id)mbBasicItemType;
- (void)setMbBasicItemType:(id)arg1;
- (id)mbFlyItemType;
- (void)setMbFlyItemType:(id)arg1;
- (unsigned int)mbMiniVersion;
- (void)setMbMiniVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end

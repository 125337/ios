@interface EmotionDesignerSharedItem : NSObject <PBCoding>
{
    unsigned int _designerUin; // +0x8
    NSString * _oldRedirectUrl; // +0x10
    NSString * _designerName; // +0x18
}
+ (void)PBArrayAdd_designerUin;
+ (void)PBArrayAdd_oldRedirectUrl;
+ (void)PBArrayAdd_designerName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (unsigned int)designerUin;
- (void)setDesignerUin:(unsigned int)arg1;
- (id)oldRedirectUrl;
- (void)setOldRedirectUrl:(id)arg1;
- (id)designerName;
- (void)setDesignerName:(id)arg1;
- (void).cxx_destruct;
@end


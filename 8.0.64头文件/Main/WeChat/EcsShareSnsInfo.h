@interface EcsShareSnsInfo : NSObject <NSCoding, PBCoding>
{
    unsigned int _type; // +0x8
    NSString * _title; // +0x10
    NSString * _productId; // +0x18
    NSString * _ecsJumpInfoBase64; // +0x20
    NSString * _reportData; // +0x28
}
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_productId;
+ (void)PBArrayAdd_ecsJumpInfoBase64;
+ (void)PBArrayAdd_reportData;
+ (void)initialize;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toXML;
- (id)genProductCardReq;
- (BOOL)isValid;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)ecsJumpInfoBase64;
- (void)setEcsJumpInfoBase64:(id)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (void).cxx_destruct;
@end

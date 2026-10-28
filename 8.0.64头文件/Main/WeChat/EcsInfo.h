@interface EcsInfo : NSObject <NSCoding, PBCoding>
{
    NSString * _ecsJumpInfoBase64; // +0x8
}
+ (void)PBArrayAdd_ecsJumpInfoBase64;
+ (void)initialize;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toXML;
- (id)ecsJumpInfoBase64;
- (void)setEcsJumpInfoBase64:(id)arg1;
- (void).cxx_destruct;
@end

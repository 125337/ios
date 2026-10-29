@interface MMResSignatureInfo : MMObject <PBCoding>
{
    unsigned int _version; // +0x8
    NSData * _signatureData; // +0x10
}
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_signatureData;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)signatureData;
- (void)setSignatureData:(id)arg1;
- (void).cxx_destruct;
@end

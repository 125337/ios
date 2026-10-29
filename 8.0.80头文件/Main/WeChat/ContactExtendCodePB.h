@interface ContactExtendCodePB : NSObject <PBCoding>
{
    unsigned int _conType; // +0x8
    unsigned int _certificationFlag; // +0xc
    NSString * _remark; // +0x10
    NSString * _remarkPYFull; // +0x18
}
+ (void)PBArrayAdd_remark;
+ (void)PBArrayAdd_remarkPYFull;
+ (void)PBArrayAdd_conType;
+ (void)PBArrayAdd_certificationFlag;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithContact:(id)arg1;
- (id)encodeData;
- (BOOL)decodeFromData:(id)arg1;
- (id)remark;
- (void)setRemark:(id)arg1;
- (id)remarkPYFull;
- (void)setRemarkPYFull:(id)arg1;
- (unsigned int)conType;
- (void)setConType:(unsigned int)arg1;
- (unsigned int)certificationFlag;
- (void)setCertificationFlag:(unsigned int)arg1;
- (void).cxx_destruct;
@end

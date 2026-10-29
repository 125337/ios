@interface BrandTimelineMsgDBDigestInfoItem : MMObject
{
    BOOL _isBold; // +0x8
    NSString * _digest; // +0x10
}
- (id)genItemAttrDigest;
- (id)genItemAttrDigestWithoutBold;
- (id)genItemReportDigest;
- (id)digest;
- (void)setDigest:(id)arg1;
- (BOOL)isBold;
- (void)setIsBold:(BOOL)arg1;
- (void).cxx_destruct;
@end


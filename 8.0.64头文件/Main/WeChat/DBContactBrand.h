@interface DBContactBrand : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _brandSubscriptionSettings; // +0x8
    NSString * _brandExternalInfo; // +0x10
    NSString * _brandSubscriptConfigUrl; // +0x18
    NSString * _brandIconUrl; // +0x20
    NSString * _certificationInfo; // +0x28
}
+ (void)PBArrayAdd_brandExternalInfo;
+ (void)PBArrayAdd_brandSubscriptConfigUrl;
+ (void)PBArrayAdd_brandSubscriptionSettings;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)PBArrayAdd_certificationInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)brandExternalInfo;
- (void)setBrandExternalInfo:(id)arg1;
- (id)brandSubscriptConfigUrl;
- (void)setBrandSubscriptConfigUrl:(id)arg1;
- (unsigned int)brandSubscriptionSettings;
- (void)setBrandSubscriptionSettings:(unsigned int)arg1;
- (id)brandIconUrl;
- (void)setBrandIconUrl:(id)arg1;
- (id)certificationInfo;
- (void)setCertificationInfo:(id)arg1;
- (void).cxx_destruct;
@end

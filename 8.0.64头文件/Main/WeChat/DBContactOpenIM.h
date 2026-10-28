@interface DBContactOpenIM : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int _customInfoVisible; // +0x8
    unsigned int _enterpriseAuthStatus; // +0xc
    NSString * _openIMDescId; // +0x10
    NSString * _customInfo; // +0x18
    NSString * _finderUsername; // +0x20
    unsigned long long _flags; // +0x28
    NSString * _exposedId; // +0x30
    NSString * _customToolBarInfo; // +0x38
}
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_openIMDescId;
+ (void)PBArrayAdd_customInfoVisible;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_flags;
+ (void)PBArrayAdd_exposedId;
+ (void)PBArrayAdd_customToolBarInfo;
+ (void)PBArrayAdd_enterpriseAuthStatus;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)openIMDescId;
- (void)setOpenIMDescId:(id)arg1;
- (unsigned int)customInfoVisible;
- (void)setCustomInfoVisible:(unsigned int)arg1;
- (id)customInfo;
- (void)setCustomInfo:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned long long)flags;
- (void)setFlags:(unsigned long long)arg1;
- (id)exposedId;
- (void)setExposedId:(id)arg1;
- (id)customToolBarInfo;
- (void)setCustomToolBarInfo:(id)arg1;
- (unsigned int)enterpriseAuthStatus;
- (void)setEnterpriseAuthStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

@interface WAPermissionLaunchRuntimeInfo : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _canShowStartWording; // +0x8
    unsigned int _blockReason; // +0xc
    NSString * _sdkJsapiInfo; // +0x10
}
+ (void)PBArrayAdd_blockReason;
+ (void)PBArrayAdd_canShowStartWording;
+ (void)PBArrayAdd_sdkJsapiInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)description;
- (unsigned int)blockReason;
- (void)setBlockReason:(unsigned int)arg1;
- (BOOL)canShowStartWording;
- (void)setCanShowStartWording:(BOOL)arg1;
- (id)sdkJsapiInfo;
- (void)setSdkJsapiInfo:(id)arg1;
- (void).cxx_destruct;
@end

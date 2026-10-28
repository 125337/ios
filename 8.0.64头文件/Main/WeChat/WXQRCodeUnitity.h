@interface WXQRCodeUnitity : MMObject
+ (BOOL)enableXNetModelUpgrade;
+ (QBAR_MODE)genQBarModeWithModelsInScanMode:(unsigned long long)arg1;
+ (id)pathForQBarLibAIModel:(unsigned long long)arg1;
+ (BOOL)isQRCodeTypeOrWXCodeType:(id)arg1;
@end

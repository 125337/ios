@interface WCFinderGeneralExtConfigModel : NSObject
{
    unsigned long long _extType; // +0x8
    NSString * _extParams; // +0x10
    WCFinderExtPostPreCheckModel * _preCheckModel; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)preCheckModel;
- (unsigned long long)extType;
- (void)setExtType:(unsigned long long)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (void)setPreCheckModel:(id)arg1;
- (void).cxx_destruct;
@end

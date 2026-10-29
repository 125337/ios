@interface WeVisModelListConfig : NSObject <YYModel, NSCopying>
{
    long long _sdkVersion; // +0x8
    long long _configVersion; // +0x10
    NSMutableArray * _modelList; // +0x18
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (id)init;
- (BOOL)isValid;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)modelListInfo;
- (id)invalidModelListInfo;
- (void)reportModelRes:(unsigned int)arg1;
- (long long)sdkVersion;
- (void)setSdkVersion:(long long)arg1;
- (long long)configVersion;
- (void)setConfigVersion:(long long)arg1;
- (id)modelList;
- (void)setModelList:(id)arg1;
- (void).cxx_destruct;
@end


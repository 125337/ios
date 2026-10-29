@interface EmoticonLensItem : NSObject
{
    NSString * _itemPath; // +0x8
    EmoticonLensItemConfig * _config; // +0x10
}
+ (id)buildItemAtDir:(id)arg1 type:(long long)arg2 version:(double)arg3 serverConfigPath:(id)arg4;
+ (id)readItemInDir:(id)arg1;
- (id)initWithConfig:(id)arg1 dir:(id)arg2;
- (void)addResourceDir:(id)arg1 params:(id)arg2;
- (void)pickParams:(id)arg1;
- (void)buildConfigJson;
- (long long)type;
- (BOOL)validate;
- (void)setAutoAdjust:(BOOL)arg1;
- (id)itemPath;
- (void)setItemPath:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

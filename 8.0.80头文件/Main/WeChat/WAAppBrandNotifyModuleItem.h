@interface WAAppBrandNotifyModuleItem : NSObject <PBCoding>
{
    BOOL _independent; // +0x8
    NSString * _name; // +0x10
    NSString * _md5; // +0x18
    NSArray * _aliasList; // +0x20
    NSString * _withoutLibMd5; // +0x28
    NSMutableArray * _arrPluginCodeInfo; // +0x30
    NSString * _debugUrl; // +0x38
    NSMutableArray * _arrWidgetInfo; // +0x40
}
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_independent;
+ (void)PBArrayAdd_aliasList;
+ (void)PBArrayAdd_withoutLibMd5;
+ (void)PBArrayAdd_arrPluginCodeInfo;
+ (void)PBArrayAdd_debugUrl;
+ (void)PBArrayAdd_arrWidgetInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)name;
- (void)setName:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (BOOL)independent;
- (void)setIndependent:(BOOL)arg1;
- (id)aliasList;
- (void)setAliasList:(id)arg1;
- (id)withoutLibMd5;
- (void)setWithoutLibMd5:(id)arg1;
- (id)arrPluginCodeInfo;
- (void)setArrPluginCodeInfo:(id)arg1;
- (id)debugUrl;
- (void)setDebugUrl:(id)arg1;
- (id)arrWidgetInfo;
- (void)setArrWidgetInfo:(id)arg1;
- (void).cxx_destruct;
@end

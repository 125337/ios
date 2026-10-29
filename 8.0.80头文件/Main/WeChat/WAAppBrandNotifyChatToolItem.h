@interface WAAppBrandNotifyChatToolItem : NSObject <PBCoding>
{
    NSString * _desc; // +0x8
    NSString * _entryPagePath; // +0x10
    NSString * _root; // +0x18
    NSArray * _scopes; // +0x20
    NSArray * _supportedMaterials; // +0x28
}
+ (void)PBArrayAdd_desc;
+ (void)PBArrayAdd_entryPagePath;
+ (void)PBArrayAdd_root;
+ (void)PBArrayAdd_scopes;
+ (void)PBArrayAdd_supportedMaterials;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)entryPagePath;
- (void)setEntryPagePath:(id)arg1;
- (id)root;
- (void)setRoot:(id)arg1;
- (id)scopes;
- (void)setScopes:(id)arg1;
- (id)supportedMaterials;
- (void)setSupportedMaterials:(id)arg1;
- (void).cxx_destruct;
@end

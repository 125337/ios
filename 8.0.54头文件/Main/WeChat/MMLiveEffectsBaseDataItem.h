@interface MMLiveEffectsBaseDataItem : NSObject
{
    BOOL _isResourcePrepared; // +0x8
    NSString * _effectID; // +0x10
    NSString * _name; // +0x18
    NSString * _thumbUrl; // +0x20
    NSString * _thumbMd5; // +0x28
    NSString * _resourceUrl; // +0x30
    NSString * _resourceMd5; // +0x38
}
+ (id)dataItemWithResource:(id)arg1;
- (id)materialResourceBaseFolder;
- (id)materialResourceFolderPath;
- (id)materialResourceUnzipTempFolderPath;
- (id)downloadCachingPath:(id)arg1;
- (id)downloadWorkingPath:(id)arg1;
- (BOOL)isDisableItem;
- (id)tempFolder;
- (id)rootFolder;
- (id)effectID;
- (void)setEffectID:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)thumbMd5;
- (void)setThumbMd5:(id)arg1;
- (id)resourceUrl;
- (void)setResourceUrl:(id)arg1;
- (id)resourceMd5;
- (void)setResourceMd5:(id)arg1;
- (BOOL)isResourcePrepared;
- (void)setIsResourcePrepared:(BOOL)arg1;
- (void).cxx_destruct;
@end


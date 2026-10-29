@interface AffEmoticonResourceImpl : NSObject <AffEmoticonResourceBase>
- (id)getEmoticonPathOfMemoryTempDir;
- (id)getEmoticonRootDirOfSharedCacheDir;
- (id)getEmoticonRootDirOfUserCacheDir;
- (id)getEmoticonPathOfUserCoreDir;
- (id)getResourcePathInBundle:(id)arg1;
@end

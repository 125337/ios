@interface MMLiveArchivedResourceFetcherTask : MMLiveResourceFetcherTask
{
    NSString * _unarchiveDestinationPath; // +0x48
    NSString * _manifestPath; // +0x50
}
- (id)initWithResourceUri:(id)arg1 cachingPath:(id)arg2 unarchiveDestinationPath:(id)arg3;
- (id)pinnedPaths;
- (id)unarchiveDestinationPath;
- (void)setUnarchiveDestinationPath:(id)arg1;
- (id)manifestPath;
- (void)setManifestPath:(id)arg1;
- (void).cxx_destruct;
@end


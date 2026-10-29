@interface FavoritesUploadFileSaver : FavoritesUploadBaseProccessor
{
    int _uploadState; // +0x28
}
- (void)addItem:(id)arg1 isPrior:(BOOL)arg2;
- (void)removeItem:(id)arg1;
- (void)tryProccess;
- (void)onProccessEnd:(BOOL)arg1;
- (BOOL)CountItemDataMD5:(id)arg1;
- (void)saveCdnInfoOfFavItem:(id)arg1;
- (BOOL)doCopyFileInItem:(id)arg1;
- (void)clearSourcePath:(id)arg1;
- (void)incFileRetainCountForItem:(id)arg1;
- (int)uploadState;
- (void)setUploadState:(int)arg1;
@end


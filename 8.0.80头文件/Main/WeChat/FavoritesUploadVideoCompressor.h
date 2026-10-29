@interface FavoritesUploadVideoCompressor : FavoritesUploadBaseProccessor <FavVideoCompressExt>
{
    NSMutableSet * m_currentItemCompressingVideoSet; // +0x28
}
- (id)initWithDelegate:(id)arg1;
- (void)addItem:(id)arg1 isPrior:(BOOL)arg2;
- (void)removeItem:(id)arg1;
- (void)tryProccess;
- (void)onCompressItem:(id)arg1 isSuccess:(BOOL)arg2;
- (void)configFavData:(id)arg1 withCompressPath:(id)arg2;
- (void)findNeedCompressVideosInDataList:(id)arg1;
- (void)configCompressedVideosInDataList:(id)arg1;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void).cxx_destruct;
@end

@interface WAPhotoViewController : PhotoViewController <WAImageScrollViewDelegate>
{
    NSMutableArray * m_arrayThumbImageUrl; // +0x88
    NSMutableDictionary * m_dicImageUrlDownloadState; // +0x90
    BOOL _showBottomActionBar; // +0x98
}
- (id)init;
- (void)setThumbImageArray:(id)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (id)imageDataAtPage:(unsigned int)arg1;
- (id)getWAImageScrollViewAtIndex:(unsigned int)arg1;
- (id)getPhotoatIndex:(unsigned int)arg1;
- (void)onViewHDImage:(id)arg1;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (long long)getImageDownloadStateForPageIndex:(unsigned int)arg1;
- (BOOL)canShowBottomActionBar;
- (BOOL)canAddImageToForward;
- (BOOL)canAddImageToFavorite;
- (BOOL)canAddImageToAlbum;
- (void)onClickShareButton:(id)arg1;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickMoreButton:(id)arg1;
- (void)onChangePage;
- (BOOL)showBottomActionBar;
- (void)setShowBottomActionBar:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface WAMediaPreviewViewController : WAPhotoViewController <WCPlayerConfigDelegate, WCActionSheetDelegate, FullScreenGestureDelegate, WCPlayerDownloaderExt, ForwardMessageLogicDelegate>
{
    NSMutableDictionary * m_dicVideoView; // +0x88
    WCPlayerView * m_currentPlayerView; // +0x90
    NSMutableArray * m_mediaList; // +0x98
    WCActionSheet * m_actionSheet; // +0xa0
    NSMutableDictionary * m_dicDownloadItem; // +0xa8
    ForwardMessageLogicController * m_forwardMsgLogic; // +0xb0
    BOOL m_playAtOnce; // +0xb8
    NSMutableArray * m_tempPathList; // +0xc0
}
- (id)init;
- (void)dealloc;
- (BOOL)initMediaViewerWithSources:(id)arg1 current:(int)arg2 appId:(id)arg3 appScene:(unsigned long long)arg4 referer:(id)arg5;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (unsigned long long)getIndexArrayImageUrlCacheKey:(id)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)playerViewAtPage:(unsigned int)arg1;
- (void)onSingleTap:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (id)createPlayerViewWithIndex:(unsigned long long)arg1 frame:(CGRect)arg2;
- (void)configPlayerViewWithUrl:(id)arg1 playerInfo:(id)arg2 mediaWrap:(id)arg3;
- (id)genErrorView;
- (CGRect)getFullscreenRect;
- (void)onChangePage;
- (BOOL)isCurrentPageVideo;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenItemDragToClose;
- (void)multiImageScrollViewWillBeginDragging;
- (void)fetchAllVideoDataWithMediaItem:(id)arg1 OperateType:(unsigned long long)arg2;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadError:(id)arg1;
- (void)saveVideo:(id)arg1;
- (void)saveVideoOnGetAllData:(id)arg1;
- (void)addToFavorites:(id)arg1;
- (void)addToFavoritesOnGetAllData:(id)arg1;
- (void)forwardVideo:(id)arg1;
- (void)forwardVideoOnGetAllData:(id)arg1;
- (id)genForwardMessageWrapWithMediaItem:(id)arg1;
- (id)genFavoriteItemWithMediaItem:(id)arg1;
- (id)genVideoInfoWithMediaItem:(id)arg1;
- (id)convertWeAppVideo2FavItem:(id)arg1;
- (id)getCurrentViewController;
- (void)animateTransition:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateCurrentPageFrame;
- (void)addTempFilePath:(id)arg1;
- (void)removeTempFiles;
- (id)tryGetThumbImageView:(id)arg1;
- (void)updateThumbImageAtIndex:(unsigned int)arg1;
- (void)onVideoPlay;
- (void).cxx_destruct;
@end

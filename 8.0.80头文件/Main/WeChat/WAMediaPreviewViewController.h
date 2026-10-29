@interface WAMediaPreviewViewController : WAPhotoViewController <WCPlayerConfigDelegate, MMScrollActionSheetDelegate, FullScreenGestureDelegate, WCPlayerDownloaderExt, ForwardMessageLogicDelegate>
{
    NSMutableDictionary * m_dicVideoView; // +0x88
    WCPlayerView * m_currentPlayerView; // +0x90
    NSMutableArray * m_mediaList; // +0x98
    NSMutableDictionary * m_dicDownloadItem; // +0xa0
    ForwardMessageLogicController * m_forwardMsgLogic; // +0xa8
    BOOL m_playAtOnce; // +0xb0
    NSMutableArray * m_tempPathList; // +0xb8
    BOOL _hideVideoCloseBtn; // +0xc0
    BOOL _enableInitialSeekPos; // +0xc1
    BOOL _defaultMuted; // +0xc2
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
- (void)showVideoActionSheetFromView:(id)arg1;
- (id)createPlayerViewWithIndex:(unsigned long long)arg1 frame:(CGRect)arg2;
- (void)configPlayerViewWithUrl:(id)arg1 playerInfo:(id)arg2 mediaWrap:(id)arg3;
- (id)genErrorView;
- (CGRect)getFullscreenRect;
- (void)viewDidLayoutSubviews;
- (void)onChangePage;
- (BOOL)isCurrentPageVideo;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onTapSightIconView;
- (void)onTapCloseButton:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (id)getVideoInfo;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenItemDragToClose;
- (void)multiImageScrollViewWillBeginDragging;
- (void)multiImageScrollViewDidEndDecelerating;
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
- (void)forwardVideo:(id)arg1 toContact:(id)arg2;
- (void)forwardVideoOnGetAllData:(id)arg1 toContact:(id)arg2;
- (void)forwardVideoToPendingContactOnGetAllData:(id)arg1;
- (id)ensureForwardMsgLogic;
- (id)genForwardMessageWrapWithMediaItem:(id)arg1;
- (id)genFavoriteItemWithMediaItem:(id)arg1;
- (id)genVideoInfoWithMediaItem:(id)arg1;
- (id)convertWeAppVideo2FavItem:(id)arg1;
- (id)getCurrentViewController;
- (void)animateTransition:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateCurrentPageFrame;
- (void)updateIndex:(unsigned int)arg1;
- (void)addTempFilePath:(id)arg1;
- (void)removeTempFiles;
- (id)tryGetThumbImageView:(id)arg1;
- (void)updateThumbImageAtIndex:(unsigned int)arg1;
- (void)onVideoPlay;
- (void)onVideoMuteStateChanged:(BOOL)arg1;
- (void)onClickShareButton:(id)arg1;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickMoreButton:(id)arg1;
- (BOOL)hideVideoCloseBtn;
- (void)setHideVideoCloseBtn:(BOOL)arg1;
- (BOOL)enableInitialSeekPos;
- (void)setEnableInitialSeekPos:(BOOL)arg1;
- (BOOL)defaultMuted;
- (void)setDefaultMuted:(BOOL)arg1;
- (void).cxx_destruct;
@end

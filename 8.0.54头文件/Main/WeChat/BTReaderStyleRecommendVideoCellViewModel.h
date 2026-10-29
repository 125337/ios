@interface BTReaderStyleRecommendVideoCellViewModel : BTReaderStyleRecommendMsgCellViewModel <BTVideoItemCellAutoPlayerDelegate, BTItemCellViewModelVideoPlayProtocol>
{
    BOOL m_gotUrl; // +0x28
    BOOL m_isGettingUrl; // +0x29
    NSString * m_videoUrl; // +0x30
    unsigned long long m_videoUrlExpiredTime; // +0x38
    BOOL _isVideoCoveredByTitlePlaying; // +0x40
    BOOL _isPrepareToPlay; // +0x41
    BOOL _videoHasBeganBuffering; // +0x42
    unsigned long long _status; // +0x48
    BTVideoItemCellAutoPlayerView * _autoPlayerView; // +0x50
    BTVideoItemCellAutoPlayReporter * _reporter; // +0x58
}
+ (BOOL)canCreateViewModelWithSectionData:(id)arg1 accountIndex:(unsigned int)arg2 appMsgIndex:(unsigned int)arg3;
- (id)itemViewClassName;
- (id)timeStr;
- (CGSize)coverImageViewSize;
- (id)titleFont;
- (void)setIsVideoCoveredByTitlePlaying:(BOOL)arg1;
- (unsigned long long)titleLineNumber;
- (double)titleMaxWidth;
- (id)remainTimeStrWithPlayedTime;
- (double)getCurrentPlayedTime;
- (id)syncCaptureVideo;
- (void)initVideoPlayerView;
- (void)startVideoPlayerViewWithInitialTime;
- (void)playVideoPlayerView;
- (void)pauseVideoPlayerView;
- (void)stopVideoPlayerView;
- (void)destoryVideoPlayerView;
- (void)resetVideoPlayerView;
- (void)onVideoPlay:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1;
- (void)onVideoPause:(unsigned int)arg1;
- (void)updateVideoAutoPlayStatusByAction:(unsigned long long)arg1;
- (id)genBTRecommendVideoItemCellAutoPlayReportData;
- (BOOL)canAutoPlay;
- (id)autoPlayDescription;
- (void)initVideo;
- (void)playVideo;
- (void)pauseVideo;
- (void)destoryVideo;
- (id)getCellView;
- (id)getVideoView;
- (unsigned long long)getIndexForMsgSectionData;
- (BOOL)isVideoCoveredByTitlePlaying;
- (unsigned long long)status;
- (BOOL)isPrepareToPlay;
- (void)setIsPrepareToPlay:(BOOL)arg1;
- (BOOL)videoHasBeganBuffering;
- (void)setVideoHasBeganBuffering:(BOOL)arg1;
- (id)autoPlayerView;
- (void)setAutoPlayerView:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end


@interface BTVideoItemCellViewModel : BTReaderItemCellViewModel <BTVideoItemCellAutoPlayerDelegate, BTItemCellViewModelVideoPlayProtocol>
{
    BOOL m_gotUrl; // +0x78
    BOOL m_isGettingUrl; // +0x79
    NSString * m_videoUrl; // +0x80
    unsigned long long m_videoUrlExpiredTime; // +0x88
    BOOL _isVideoCoveredByTitlePlaying; // +0x90
    BOOL _isPrepareToPlay; // +0x91
    BOOL _videoHasBeganBuffering; // +0x92
    NSString * _timeStr; // +0x98
    unsigned long long _status; // +0xa0
    BTVideoItemCellAutoPlayerView * _autoPlayerView; // +0xa8
    BTVideoItemCellAutoPlayReporter * _reporter; // +0xb0
}
+ (BOOL)canCreateViewModelWithReaderWrap:(id)arg1 msgWrap:(id)arg2;
- (id)itemViewClassName;
- (void)updateVideoAutoPlayStatusByAction:(unsigned long long)arg1;
- (id)titleFont;
- (unsigned long long)titleLineNumber;
- (void)setIsVideoCoveredByTitlePlaying:(BOOL)arg1;
- (double)titleMaxWidth;
- (double)viewHeight;
- (id)timeStr;
- (id)friendsReadStr;
- (id)remainTimeStrWithPlayedTime;
- (id)timeStrWithDurationInSeconds:(unsigned long long)arg1;
- (void)initVideoPlayerView;
- (void)startVideoPlayerViewWithInitialTime;
- (void)playVideoPlayerView;
- (void)pauseVideoPlayerView;
- (void)stopVideoPlayerView;
- (void)destoryVideoPlayerView;
- (void)resetVideoPlayerView;
- (double)getCurrentPlayedTime;
- (id)syncCaptureVideo;
- (void)onVideoPlay:(unsigned int)arg1;
- (void)onVideoBeginBuffering:(unsigned int)arg1;
- (void)onVideoEndBuffering:(unsigned int)arg1;
- (void)onVideoPrepareToPlay:(unsigned int)arg1;
- (void)onVideoPause:(unsigned int)arg1;
- (id)genBTVideoItemCellAutoPlayReportData;
- (BOOL)canAutoPlay;
- (id)autoPlayDescription;
- (void)initVideo;
- (void)playVideo;
- (void)pauseVideo;
- (void)destoryVideo;
- (id)getCellView;
- (id)getVideoView;
- (unsigned long long)getIndexForMsgSectionData;
- (void)setTimeStr:(id)arg1;
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

@interface MMLiveReplayFragmentViewController : MMUIViewController <MMLiveReplayFragmentPlayerControlDelegate, WCPlayerDownloaderExt, ForwardMessageLogicDelegate, WCFinderLivePostFeedProcessMgrDelegate, WCFinderPostMgrDelegate>
{
    BOOL _isBuffering; // +0x70
    BOOL _isToolViewHidden; // +0x71
    BOOL _shouldResumeAtAppear; // +0x72
    BOOL _shouldReportExposureAtAppear; // +0x73
    BOOL _shouldShowPublishFinderFeedButton; // +0x74
    BOOL _originalNavigationBarHidden; // +0x75
    unsigned long long _enterScene; // +0x78
    WCPlayerView * _playerView; // +0x80
    MMLiveReplayFragmentPlayerControlView * _controlView; // +0x88
    MMLiveReplayFragmentItem * _replayFragmentItem; // +0x90
    WCPlayerPlayArgs * _playerInfo; // +0x98
    SEL _downloadCompletionSelector; // +0xa0
    ForwardMessageLogicController * _forwardMsgLogic; // +0xa8
    WCFinderLivePostFeedProcessMgr * _finderPostProcessMgr; // +0xb0
    WCFinderPostMgr * _finderPostMgr; // +0xb8
    UIImage * _recommendCoverImage; // +0xc0
}
- (id)initWithReplayItem:(id)arg1 enterScene:(unsigned long long)arg2;
- (void)prefetchRecommendCoverImage;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupPlayerView;
- (id)generatePlayerInfo;
- (id)generatePlayerConfig;
- (void)saveVideoToAlbum;
- (void)saveVideoOnGetAllData;
- (void)fetchAllVideoDataWithCompleteSelector:(SEL)arg1;
- (id)forwardMsgLogic;
- (void)forwardVideoToFriend;
- (id)generateForwardVideoMsg;
- (void)forwardVideoOnGetAllData;
- (id)finderPostProcessMgr;
- (unsigned long long)finderPostEnterScene;
- (void)publishFinderFeed;
- (void)publishFinderFeedAfterGetAllData;
- (id)ensurePostMgrWithEnterScene;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)hidesStatusBar;
- (BOOL)useCustomNavibar;
- (BOOL)shouldHideNavigationBar;
- (void)onTapCloseButton:(id)arg1;
- (void)onClickShareButton;
- (void)onClickDownloadButton:(id)arg1;
- (void)onClickPublishFinderFeedButton:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnPlayerDownloadProgress:(id)arg1 finish:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)OnCdnDownloadError:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)finderLivePostFeedProcessMgrOnSendMediaWith:(id)arg1;
- (id)finderLivePostFeedProcessMgrGetSelectedMediaContent;
- (void)finderLivePostFeedProcessMgrCancelPostProcess;
- (void)finderLivePostFeedProcessMgrEditCancelledOrFailedWithFlag:(BOOL)arg1;
- (void)postMgrStartUpload;
- (void)checkAndReportExposure;
- (void)reportReplayFragmentViewActionWithType:(unsigned long long)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)controlView;
- (void)setControlView:(id)arg1;
- (id)replayFragmentItem;
- (void)setReplayFragmentItem:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (BOOL)isBuffering;
- (void)setIsBuffering:(BOOL)arg1;
- (BOOL)isToolViewHidden;
- (void)setIsToolViewHidden:(BOOL)arg1;
- (BOOL)shouldResumeAtAppear;
- (void)setShouldResumeAtAppear:(BOOL)arg1;
- (SEL)downloadCompletionSelector;
- (void)setDownloadCompletionSelector:(SEL)arg1;
- (void)setForwardMsgLogic:(id)arg1;
- (void)setFinderPostProcessMgr:(id)arg1;
- (id)finderPostMgr;
- (void)setFinderPostMgr:(id)arg1;
- (BOOL)shouldReportExposureAtAppear;
- (void)setShouldReportExposureAtAppear:(BOOL)arg1;
- (BOOL)shouldShowPublishFinderFeedButton;
- (void)setShouldShowPublishFinderFeedButton:(BOOL)arg1;
- (BOOL)originalNavigationBarHidden;
- (void)setOriginalNavigationBarHidden:(BOOL)arg1;
- (id)recommendCoverImage;
- (void)setRecommendCoverImage:(id)arg1;
- (void).cxx_destruct;
@end

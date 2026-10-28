@interface WCMomentsPlayerSourceController : NSObject <WCPlayerEventExt>
{
    BOOL _isLocalFeed; // +0x8
    id <WCMomentsPlayerSourceControllerDataSource> _dataSource; // +0x10
    id <WCMomentsPlayerSourceControllerDelegate> _delegate; // +0x18
    WCDataItem * _dataItem; // +0x20
    WCMediaItem * _mediaItem; // +0x28
    long long _playerScene; // +0x30
    unsigned long long _videoSourceFlags; // +0x38
    long long _videoHDRFormat; // +0x40
    long long _sourceStatus; // +0x48
    id /* block */ _sourceStatusDidChangeBlock; // +0x50
    long long _switchType; // +0x58
    WCMomentsPlayerSourceSession * _session; // +0x60
    WCMomentsPlayerSourceConfigurationContext * _configurationContext; // +0x68
    NSMutableArray * _CDN_downloadRecords; // +0x70
    WCMomentsPlayerSourceDetermination * _currentSourceDetermination; // +0x78
}
+ (id)descriptionForSourceStatus:(long long)arg1;
+ (id)generateDownloadArgsDEFForMediaItem:(id)arg1;
+ (id)generateDownloadArgsLDForMediaItem:(id)arg1;
+ (id)generateDownloadArgsHDForMediaItem:(id)arg1 HDRFormat:(long long)arg2;
+ (BOOL)hasDownloadedVideoForDownloadArgs:(id)arg1;
+ (BOOL)hasDownloadedVideoLDForMediaItem:(id)arg1;
+ (BOOL)hasDownloadedVideoHDForMediaItem:(id)arg1;
- (id)CDN_downloadRecords;
- (id)generateDownloadArgsDEF;
- (id)generateDownloadArgsLD;
- (id)generateDownloadArgsHD;
- (BOOL)hasDownloadedVideoLD;
- (BOOL)hasDownloadedVideoHD;
- (void)reportPlayerSession;
- (id)validDownloadContextForPreview;
- (id)validDownloadContextForFullScreen;
- (void)reportString_0_appendingBaseInfo:(id)arg1;
- (void)reportString_1_appendingConfigurations:(id)arg1;
- (void)reportString_2_appendingConfigurationResults:(id)arg1;
- (void)reportString_3_appendingDownloadInfoForPreview:(id)arg1;
- (void)reportString_5_appendingDownloadInfoForPreview:(id)arg1;
- (void)reportString_4_appendingDownloadInfoForFullScreen:(id)arg1;
- (void)reportString_6_appendingDownloadInfoForFullScreen:(id)arg1;
- (void)reportString_7_appendingPlayerSwitchSource:(id)arg1;
- (void)reportString_8_appendingPrediction:(id)arg1;
- (void)reportString_9_appendingEvents:(id)arg1;
- (long long)timestampMSWithTime:(id)arg1;
- (int)durationMSFromStartTime:(id)arg1 toEndTime:(id)arg2;
- (id)initWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (void)dealloc;
- (void)_initVideoInfo;
- (BOOL)isHDRVideo;
- (void)_initConfigurationContext;
- (BOOL)canSwitchSource;
- (void)setSourceStatus:(long long)arg1;
- (long long)getInitialSourceStatus;
- (void)updateSwitchTypeIfNeeded;
- (long long)getSwitchTypeFromSourceStatus:(long long)arg1;
- (id)preparePreloadDownloadArgs;
- (id)_preparePreloadDownloadArgs;
- (id)preparePreviewDownloadArgs;
- (id)_preparePreviewDownloadArgs;
- (id)prepareFullScreenDownloadArgs;
- (id)_prepareFullScreenDownloadArgs;
- (id)prepareHDSwitchDownloadArgs;
- (id)_prepareHDSwitchDownloadArgs;
- (id)session;
- (void)_createSession;
- (void)_clearSession;
- (void)playerSessionWillStart;
- (void)playerSessionDidStart:(id)arg1;
- (void)playerSessionWillEnd:(id)arg1;
- (void)playerSessionDidEnd;
- (void)willStartSwitchingSource;
- (void)didFinishSwitchingSource;
- (void)didEnterFullScreen;
- (BOOL)_isDownloadArgsMatched:(id)arg1;
- (void)onPlayerStartDownload:(id)arg1;
- (void)onPlayerDownloadMoovReady:(id)arg1 progressInfo:(id)arg2;
- (id)multiSpecFlagMapping:(id)arg1 bizReqPayload:(basic_string<char, std::char_traits<char>, std::allocator<char>>)arg2;
- (id)multiSpecFlagMappingDefault:(id)arg1;
- (void)onPlayerDownloadStartFail:(int)arg1 argsWrap:(id)arg2;
- (void)onPlayerDownloadComplete:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerDownloadStop:(id)arg1 downloadInfo:(id)arg2;
- (void)onPlayerSwitchDataSource:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (id)mediaItem;
- (long long)playerScene;
- (void)setPlayerScene:(long long)arg1;
- (BOOL)isLocalFeed;
- (unsigned long long)videoSourceFlags;
- (long long)videoHDRFormat;
- (long long)sourceStatus;
- (id /* block */)sourceStatusDidChangeBlock;
- (void)setSourceStatusDidChangeBlock:(id /* block */)arg1;
- (long long)switchType;
- (void)setSwitchType:(long long)arg1;
- (void)setSession:(id)arg1;
- (id)configurationContext;
- (void)setConfigurationContext:(id)arg1;
- (id)CDN_downloadRecords;
- (void)setCDN_downloadRecords:(id)arg1;
- (id)currentSourceDetermination;
- (void)setCurrentSourceDetermination:(id)arg1;
- (void).cxx_destruct;
@end

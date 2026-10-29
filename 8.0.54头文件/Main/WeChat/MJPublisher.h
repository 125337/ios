@interface MJPublisher : NSObject
{
    MJTemplateComposingDelegateImpl * _templateComposingDelegateImpl; // +0x8
    MJPublisherPickerComposingButtonManager * _pickerComposingButtonManager; // +0x10
    OMJPublisherSessionMetrics * _publisherSessionMetrics; // +0x18
    MJPublisherContext * _publisherContext; // +0x20
    NSArray * _followMusicIDs; // +0x28
    MJMusicDownloader * _musicDownloader; // +0x30
    NSString * _finderUserName; // +0x38
    MJMovieComposingAssetsClassifyHelper * _assetClassifyHelper; // +0x40
    FinderVideoTemplateInfo * _templateInfo; // +0x48
    unsigned long long _enterScene; // +0x50
    double _videoClipStartTimeForRedPacket; // +0x58
}
+ (id)publisherNamed:(id)arg1;
+ (void)registerPublisher:(id)arg1 named:(id)arg2;
+ (void)releasePublisherNamed:(id)arg1;
+ (BOOL)shouldShowRegularGuide;
+ (void)didAcceptRegularGuide;
+ (BOOL)checkIsMJAsyncCompositionTask:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)createShootComposingVCWithViewModel:(id)arg1;
- (id)createShootComposingViewModel;
- (id)publisherContext;
- (void)createPublisherSessionMetricsWithEntryType:(id)arg1 enterScene:(unsigned long long)arg2 parentEnterScene:(unsigned int)arg3 startupOptions:(id)arg4;
- (void)destoryPublisherSessionMetricsWithReason:(id)arg1;
- (void)markWillBeginShootComposing;
- (void)markDidEndShootComposingWithReason:(id)arg1 shouldDestoryPublisherSession:(BOOL)arg2;
- (void)markWillBeginMovieComposing;
- (void)markDidEndMovieComposingWithReason:(id)arg1 shouldDestoryPublisherSession:(BOOL)arg2;
- (void)createPostSessionWithEditImageAttr:(id)arg1 screenSize:(CGSize)arg2 fromScene:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)createPostSessionWithActionFlow:(id)arg1 fromScene:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)createPostSessionWithSightDraft:(id)arg1 fromScene:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 fromScene:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)registerNotifications;
- (void)unregisterNotifications;
- (void)onShootComposingVCDidDismissSelfFinished:(id)arg1;
- (id)templateComposingDelegateImpl;
- (id)pickerComposingButtonManager;
- (id)publisherSessionMetrics;
- (void)setPublisherSessionMetrics:(id)arg1;
- (void)setPublisherContext:(id)arg1;
- (id)followMusicIDs;
- (void)setFollowMusicIDs:(id)arg1;
- (id)musicDownloader;
- (void)setMusicDownloader:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)assetClassifyHelper;
- (void)setAssetClassifyHelper:(id)arg1;
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (double)videoClipStartTimeForRedPacket;
- (void)setVideoClipStartTimeForRedPacket:(double)arg1;
- (void).cxx_destruct;
@end


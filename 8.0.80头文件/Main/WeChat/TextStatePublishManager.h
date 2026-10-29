@interface TextStatePublishManager : NSObject
{
    BOOL _isEventSubscribed; // +0x8
    TextStatePublishOperateUseCase * _retainedUseCase; // +0x10
    MMUIViewController * _currentViewController; // +0x18
    NSString * _currentPassthroughIconId; // +0x20
    NSArray * _pendingMediaItems; // +0x28
    NSArray * _pendingRecommendIconGroups; // +0x30
    MMUIViewController * _flutterPresentingViewController; // +0x38
    TextStatePublishContentBuilder * _flutterBuilder; // +0x40
    TextStatePublishConfiguration * _flutterConfiguration; // +0x48
    NSDictionary * _flutterAttachInfo; // +0x50
}
+ (id)sharedManager;
- (void)retainUseCase:(id)arg1;
- (void)releaseUseCase;
- (id)currentUseCase;
- (void)subscribeStatusInfoChangeEvent;
- (void)unsubscribeStatusInfoChangeEvent;
- (void)subscribePublishSuccessEvent;
- (void)unsubscribePublishSuccessEvent;
- (void)processStatusInfoEventWithType:(int)arg1 eventSubType:(int)arg2 eventData:(id)arg3;
- (void)openFlutterTextStatePublishPageFromViewController:(id)arg1 passthroughIconId:(id)arg2 configuration:(id)arg3 enterScene:(unsigned int)arg4 sessionId:(id)arg5 publish2ndScene:(int)arg6 completion:(id /* block */)arg7;
- (id)getThumbnailDataFromMediaItem:(id)arg1;
- (id)parseRecommendIconGroupsFromResponse:(id)arg1;
- (id)createWeChatEmojiIconWithId:(id)arg1;
- (void)openFlutterPublishPageDirectlyWithConfiguration:(id)arg1 enterScene:(unsigned int)arg2 sessionId:(id)arg3 publish2ndScene:(int)arg4 completion:(id /* block */)arg5;
- (void)openFlutterPublishPageWithViewController:(id)arg1 needEditStatusInfo:(id)arg2 enterScene:(unsigned int)arg3 sessionId:(id)arg4 publish2ndScene:(int)arg5 configuration:(id)arg6;
- (id)convertImagePickResultToMediaItem:(id)arg1;
- (id)convertVideoPickResultToMediaItem:(id)arg1;
- (id)convertLivePhotoPickResultToMediaItem:(id)arg1;
- (id)compressMediaItem:(id)arg1;
- (id)compressImageMediaItem:(id)arg1;
- (id)compressVideoMediaItem:(id)arg1;
- (id)compressLivePhotoMediaItem:(id)arg1;
- (id)resizeImage:(id)arg1 toMaxSize:(double)arg2;
- (CGSize)videoSizeForVideo:(id)arg1;
- (void)openFlutterPublishPageWithViewController:(id)arg1 builder:(id)arg2 configuration:(id)arg3 attachInfo:(id)arg4 enterScene:(unsigned int)arg5 sessionId:(id)arg6 publish2ndScene:(int)arg7;
- (void)presentFlutterPublishPageAfterContentPrepared:(id)arg1 enterScene:(unsigned int)arg2 publish2ndScene:(int)arg3;
- (id)convertToStatusPublishMediaInfo:(id)arg1;
- (id)localCachePathForUrlString:(id)arg1 loader:(id)arg2;
- (id)convertFLTMediaItemsToStatusPublishMediaInfos:(id)arg1;
- (id)convertFLTMediaItemToStatusPublishMediaInfo:(id)arg1;
- (id)openPublishPageWithViewController:(id)arg1 sourceInfo:(id)arg2 configuration:(id)arg3 attachInfo:(id)arg4 forceFullScreen:(BOOL)arg5 enterScene:(unsigned int)arg6 sessionId:(id)arg7 publish2ndScene:(int)arg8;
- (id)retainedUseCase;
- (void)setRetainedUseCase:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)currentPassthroughIconId;
- (void)setCurrentPassthroughIconId:(id)arg1;
- (id)pendingMediaItems;
- (void)setPendingMediaItems:(id)arg1;
- (id)pendingRecommendIconGroups;
- (void)setPendingRecommendIconGroups:(id)arg1;
- (BOOL)isEventSubscribed;
- (void)setIsEventSubscribed:(BOOL)arg1;
- (id)flutterPresentingViewController;
- (void)setFlutterPresentingViewController:(id)arg1;
- (id)flutterBuilder;
- (void)setFlutterBuilder:(id)arg1;
- (id)flutterConfiguration;
- (void)setFlutterConfiguration:(id)arg1;
- (id)flutterAttachInfo;
- (void)setFlutterAttachInfo:(id)arg1;
- (void).cxx_destruct;
@end

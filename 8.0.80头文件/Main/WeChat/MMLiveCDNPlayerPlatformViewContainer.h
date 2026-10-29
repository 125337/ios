@interface MMLiveCDNPlayerPlatformViewContainer : NSObject <FlutterPlatformView, MMLiveCDNPlayerViewDelegate>
{
    BOOL _showCover; // +0x8
    BOOL _pendingPlayCancelled; // +0x9
    BOOL _isRequestingLiveInfo; // +0xa
    int _commentScene; // +0xc
    MMLiveCDNPlayerView * _playerView; // +0x10
    long long _viewId; // +0x18
    LiveCDNPlayerEventCallback * _eventCallback; // +0x20
    WCFinderDataItem * _finderDataItem; // +0x28
    NSString * _streamUrl; // +0x30
    NSString * _coverImgUrl; // +0x38
    unsigned long long _scene; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (void)parseDataSourceFromDict:(id)arg1;
- (void)parseFinderObjectDataSource:(id)arg1;
- (void)parseExportDataSourceFromDict:(id)arg1;
- (void)parseLiveExportObjectBase64:(id)arg1 finderExportId:(id)arg2 objectId:(id)arg3 objectNonceId:(id)arg4;
- (id)buildDataItemFromExportId:(id)arg1 objectId:(id)arg2 objectNonceId:(id)arg3;
- (void)dealloc;
- (id)view;
- (void)onPlayBegin;
- (void)onPlayEnd;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayChangeSize:(CGSize)arg1;
- (void)onLiveCDNPlayerViewPlayStateChangedTo:(unsigned long long)arg1;
- (void)onPlayMuteByNotifyOuter:(BOOL)arg1;
- (void)onPlayDisconnect;
- (void)onPlayWarningReconnect;
- (void)sendEvent:(id)arg1 params:(id)arg2;
- (id)playerView;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (id)eventCallback;
- (void)setEventCallback:(id)arg1;
- (id)finderDataItem;
- (void)setFinderDataItem:(id)arg1;
- (id)streamUrl;
- (void)setStreamUrl:(id)arg1;
- (BOOL)showCover;
- (void)setShowCover:(BOOL)arg1;
- (id)coverImgUrl;
- (void)setCoverImgUrl:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (BOOL)pendingPlayCancelled;
- (void)setPendingPlayCancelled:(BOOL)arg1;
- (BOOL)isRequestingLiveInfo;
- (void)setIsRequestingLiveInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end

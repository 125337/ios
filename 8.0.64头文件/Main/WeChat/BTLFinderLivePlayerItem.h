@interface BTLFinderLivePlayerItem : NSObject <MMLiveCDNPlayerItemDelegate, FlutterTexture>
{
    BOOL _isPlaying; // +0x8
    BOOL _isWaitingPlay; // +0x9
    BOOL _isDestory; // +0xa
    BOOL _hasCallbackFirstFrame; // +0xb
    FinderLivePlayInfo * _playInfo; // +0x10
    NSObject<FlutterTextureRegistry> * _registry; // +0x18
    BizFinderLivePlayersCallbackApi * _callback; // +0x20
    long long _playerId; // +0x28
    long long _textureId; // +0x30
    MMLiveCDNPlayerItem * _cdnPlayerItem; // +0x38
    NSString * _playUrl; // +0x40
    long long _liveInfoReqStatus; // +0x48
    __CVBuffer * _pixelBuffer; // +0x50
}
- (id)initWithPlayInfo:(id)arg1 registry:(id)arg2 callback:(id)arg3;
- (void)dealloc;
- (void)setPlayInfo:(id)arg1;
- (void)startPlay;
- (void)playUrlAndtryUpdateCategroy;
- (void)stopPlay;
- (void)destory;
- (void)requestFinderLiveInfoIfNeed;
- (void)releaseCurrentPixelBufferIfNeed;
- (__CVBuffer *)copyPixelBuffer;
- (void)onTextureUnregistered:(id)arg1;
- (void)onLiveCDNPlayerItem:(id)arg1 pixelBufferRendered:(__CVBuffer *)arg2;
- (__CVBuffer *)cropYUVPixelBuffer:(__CVBuffer *)arg1 toRect:(CGRect)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 playEvent:(int)arg2 withParam:(id)arg3;
- (id)playInfo;
- (id)registry;
- (id)callback;
- (long long)playerId;
- (long long)textureId;
- (BOOL)isPlaying;
- (id)cdnPlayerItem;
- (void)setCdnPlayerItem:(id)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (long long)liveInfoReqStatus;
- (void)setLiveInfoReqStatus:(long long)arg1;
- (BOOL)isWaitingPlay;
- (void)setIsWaitingPlay:(BOOL)arg1;
- (BOOL)isDestory;
- (void)setIsDestory:(BOOL)arg1;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (BOOL)hasCallbackFirstFrame;
- (void)setHasCallbackFirstFrame:(BOOL)arg1;
- (void).cxx_destruct;
@end

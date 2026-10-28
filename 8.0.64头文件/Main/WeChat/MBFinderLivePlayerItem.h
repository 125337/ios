@interface MBFinderLivePlayerItem : NSObject <MMLiveCDNPlayerItemDelegate>
{
    BOOL _isPlaying; // +0x8
    BOOL _isWaitingPlay; // +0x9
    BOOL _isDestroy; // +0xa
    int _width; // +0xc
    int _height; // +0x10
    NSString * _finder_object_id; // +0x18
    NSString * _finder_export_id; // +0x20
    id <IMBPublicServiceDispatcher> _dispatcher; // +0x28
    long long _playerId; // +0x30
    MMLiveCDNPlayerItem * _cdnPlayerItem; // +0x38
    NSString * _playUrl; // +0x40
    long long _liveInfoReqStatus; // +0x48
    __CVBuffer * _pixelBuffer; // +0x50
}
- (id)initWithFinderObjectId:(id)arg1 exportId:(id)arg2 width:(int)arg3 height:(int)arg4 playerId:(long long)arg5 dispatcher:(id)arg6;
- (void)startPlay:(id /* block */)arg1;
- (void)stopPlay:(id /* block */)arg1;
- (void)destroy;
- (void)setMute:(BOOL)arg1;
- (void)requestFinderLiveInfoIfNeed:(id /* block */)arg1;
- (void)innerStartPlay:(id /* block */)arg1;
- (void)playUrlAndtryUpdateCategroy;
- (void)dealloc;
- (void)releaseCurrentPixelBufferIfNeed;
- (void)onLiveCDNPlayerItem:(id)arg1 pixelBufferRendered:(__CVBuffer *)arg2;
- (__CVBuffer *)cropYUVPixelBuffer:(__CVBuffer *)arg1 toRect:(CGRect)arg2;
- (void)onLiveCDNPlayerItem:(id)arg1 playEvent:(int)arg2 withParam:(id)arg3;
- (BOOL)isPlaying;
- (id)finder_object_id;
- (id)finder_export_id;
- (id)dispatcher;
- (void)setDispatcher:(id)arg1;
- (long long)playerId;
- (void)setPlayerId:(long long)arg1;
- (int)width;
- (void)setWidth:(int)arg1;
- (int)height;
- (void)setHeight:(int)arg1;
- (id)cdnPlayerItem;
- (void)setCdnPlayerItem:(id)arg1;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (long long)liveInfoReqStatus;
- (void)setLiveInfoReqStatus:(long long)arg1;
- (BOOL)isWaitingPlay;
- (void)setIsWaitingPlay:(BOOL)arg1;
- (BOOL)isDestroy;
- (void)setIsDestroy:(BOOL)arg1;
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (void).cxx_destruct;
@end

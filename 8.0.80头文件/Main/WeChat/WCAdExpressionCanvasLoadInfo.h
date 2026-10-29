@interface WCAdExpressionCanvasLoadInfo : NSObject
{
    BOOL _videoMuted; // +0x8
    BOOL _forbidBackToBizApp; // +0x9
    NSString * _canvasId; // +0x10
    NSString * _uxInfo; // +0x18
    NSString * _canvasDynamicInfo; // +0x20
    NSString * _canvasDynamicExtInfo; // +0x28
    long long _outPlaybackTimeMs; // +0x30
}
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (id)canvasDynamicExtInfo;
- (void)setCanvasDynamicExtInfo:(id)arg1;
- (BOOL)videoMuted;
- (void)setVideoMuted:(BOOL)arg1;
- (BOOL)forbidBackToBizApp;
- (void)setForbidBackToBizApp:(BOOL)arg1;
- (long long)outPlaybackTimeMs;
- (void)setOutPlaybackTimeMs:(long long)arg1;
- (void).cxx_destruct;
@end

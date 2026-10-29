@interface WCAdExpressionCanvasJumpInfo : NSObject
{
    BOOL _noStore; // +0x8
    BOOL _preload; // +0x9
    BOOL _videoAllowVioce; // +0xa
    BOOL _forbidBackToBizApp; // +0xb
    int _pageScene; // +0xc
    NSString * _canvasId; // +0x10
    NSString * _canvasXml; // +0x18
    NSString * _adInfoXml; // +0x20
    NSString * _uxInfo; // +0x28
    NSString * _bizAppId; // +0x30
    NSString * _canvasDynamicInfo; // +0x38
    WCAdExpressionCanvasHalfScreenJumpInfo * _canvasHalfScreenJumpInfo; // +0x40
    long long _outPlaybackTimeMs; // +0x48
}
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)canvasXml;
- (void)setCanvasXml:(id)arg1;
- (id)adInfoXml;
- (void)setAdInfoXml:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (int)pageScene;
- (void)setPageScene:(int)arg1;
- (id)bizAppId;
- (void)setBizAppId:(id)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (BOOL)noStore;
- (void)setNoStore:(BOOL)arg1;
- (BOOL)preload;
- (void)setPreload:(BOOL)arg1;
- (id)canvasHalfScreenJumpInfo;
- (void)setCanvasHalfScreenJumpInfo:(id)arg1;
- (BOOL)videoAllowVioce;
- (void)setVideoAllowVioce:(BOOL)arg1;
- (BOOL)forbidBackToBizApp;
- (void)setForbidBackToBizApp:(BOOL)arg1;
- (long long)outPlaybackTimeMs;
- (void)setOutPlaybackTimeMs:(long long)arg1;
- (void).cxx_destruct;
@end


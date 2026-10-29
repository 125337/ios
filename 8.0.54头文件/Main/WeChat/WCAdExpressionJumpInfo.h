@interface WCAdExpressionJumpInfo : NSObject
{
    BOOL _canvasNoStore; // +0x8
    BOOL _canvasPreload; // +0x9
    BOOL _videoAllowVioce; // +0xa
    BOOL _forbidBackToBizApp; // +0xb
    int _waScene; // +0xc
    int _emotionScene; // +0x10
    int _emotionEntrace; // +0x14
    long long _type; // +0x18
    long long _enterScene; // +0x20
    NSString * _uxinfo; // +0x28
    NSString * _h5Url; // +0x30
    WCAdWeAppInfo * _waAppInfo; // +0x38
    NSString * _waSceneNote; // +0x40
    NSString * _canvasXml; // +0x48
    NSString * _adInfoXml; // +0x50
    NSString * _canvasId; // +0x58
    NSString * _canvasLoadInfo; // +0x60
    NSString * _finderAdData; // +0x68
    NSString * _bizAppId; // +0x70
    NSString * _canvasDynamicInfo; // +0x78
    long long _outPlaybackTimeMs; // +0x80
    WCAdExpressionCanvasHalfScreenJumpInfo * _canvasHalfScreenJumpInfo; // +0x88
    NSString * _pid; // +0x90
}
- (id)init;
- (BOOL)checkValid;
- (long long)type;
- (void)setType:(long long)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)h5Url;
- (void)setH5Url:(id)arg1;
- (id)waAppInfo;
- (void)setWaAppInfo:(id)arg1;
- (int)waScene;
- (void)setWaScene:(int)arg1;
- (id)waSceneNote;
- (void)setWaSceneNote:(id)arg1;
- (id)canvasXml;
- (void)setCanvasXml:(id)arg1;
- (id)adInfoXml;
- (void)setAdInfoXml:(id)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)canvasLoadInfo;
- (void)setCanvasLoadInfo:(id)arg1;
- (id)finderAdData;
- (void)setFinderAdData:(id)arg1;
- (id)bizAppId;
- (void)setBizAppId:(id)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (BOOL)canvasNoStore;
- (void)setCanvasNoStore:(BOOL)arg1;
- (BOOL)canvasPreload;
- (void)setCanvasPreload:(BOOL)arg1;
- (BOOL)videoAllowVioce;
- (void)setVideoAllowVioce:(BOOL)arg1;
- (BOOL)forbidBackToBizApp;
- (void)setForbidBackToBizApp:(BOOL)arg1;
- (long long)outPlaybackTimeMs;
- (void)setOutPlaybackTimeMs:(long long)arg1;
- (id)canvasHalfScreenJumpInfo;
- (void)setCanvasHalfScreenJumpInfo:(id)arg1;
- (id)pid;
- (void)setPid:(id)arg1;
- (int)emotionScene;
- (void)setEmotionScene:(int)arg1;
- (int)emotionEntrace;
- (void)setEmotionEntrace:(int)arg1;
- (void).cxx_destruct;
@end


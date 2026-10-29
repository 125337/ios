@interface WCCanvasComponentSightVideoInfo : MMObject <NSCoding>
{
    BOOL _useNewSightPlayer; // +0x8
    BOOL _forbiddenControlView; // +0x9
    BOOL _closePlayerStateCheckWhenSetThumbContentMode; // +0xa
    BOOL _allowVoice; // +0xb
    BOOL _forceLandscapeWhenTurnToFullScreen; // +0xc
    int _displayType; // +0x10
    int _canvasNoStore; // +0x14
    NSString * _sightVideoUrl; // +0x18
    NSString * _sightThumbUrl; // +0x20
    double _sightDisplayWidth; // +0x28
    double _sightDisplayHeight; // +0x30
    NSString * _sightVideoMd5; // +0x38
    WCCanvasComponentVideoFloatBarInfo * _floatBarInfo; // +0x40
    NSString * _streamVideoUrl; // +0x48
    NSString * _jumpText; // +0x50
    NSString * _jumpTextColor; // +0x58
    NSString * _separatorColor; // +0x60
    NSString * _canvasId; // +0x68
    NSString * _canvasExt; // +0x70
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)sightVideoUrl;
- (void)setSightVideoUrl:(id)arg1;
- (id)sightThumbUrl;
- (void)setSightThumbUrl:(id)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (double)sightDisplayWidth;
- (void)setSightDisplayWidth:(double)arg1;
- (double)sightDisplayHeight;
- (void)setSightDisplayHeight:(double)arg1;
- (id)sightVideoMd5;
- (void)setSightVideoMd5:(id)arg1;
- (BOOL)useNewSightPlayer;
- (void)setUseNewSightPlayer:(BOOL)arg1;
- (BOOL)forbiddenControlView;
- (void)setForbiddenControlView:(BOOL)arg1;
- (BOOL)closePlayerStateCheckWhenSetThumbContentMode;
- (void)setClosePlayerStateCheckWhenSetThumbContentMode:(BOOL)arg1;
- (BOOL)allowVoice;
- (void)setAllowVoice:(BOOL)arg1;
- (BOOL)forceLandscapeWhenTurnToFullScreen;
- (void)setForceLandscapeWhenTurnToFullScreen:(BOOL)arg1;
- (id)floatBarInfo;
- (void)setFloatBarInfo:(id)arg1;
- (id)streamVideoUrl;
- (void)setStreamVideoUrl:(id)arg1;
- (id)jumpText;
- (void)setJumpText:(id)arg1;
- (id)jumpTextColor;
- (void)setJumpTextColor:(id)arg1;
- (id)separatorColor;
- (void)setSeparatorColor:(id)arg1;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)canvasExt;
- (void)setCanvasExt:(id)arg1;
- (int)canvasNoStore;
- (void)setCanvasNoStore:(int)arg1;
- (void).cxx_destruct;
@end

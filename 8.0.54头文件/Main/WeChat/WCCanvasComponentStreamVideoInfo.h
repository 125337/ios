@interface WCCanvasComponentStreamVideoInfo : MMObject <NSCoding>
{
    BOOL _useNewStreamPlayer; // +0x8
    BOOL _forbiddenLoopPlay; // +0x9
    BOOL _alwaysAutoPlay; // +0xa
    BOOL _allowVoice; // +0xb
    BOOL _forceLandscapeWhenTurnToFullScreen; // +0xc
    int _displayType; // +0x10
    NSString * _streamVideoUrl; // +0x18
    NSString * _streamVideoMd5; // +0x20
    NSString * _previewImageUrl; // +0x28
    WCCanvasComponentTextAreaInfo * _textOnVideo; // +0x30
    WCCanvasComponentButtonInfo * _buttonOnVideo; // +0x38
    double _streamDisplayWidth; // +0x40
    double _streamDisplayHeight; // +0x48
    WCCanvasComponentVideoFloatBarInfo * _floatBarInfo; // +0x50
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)streamVideoUrl;
- (void)setStreamVideoUrl:(id)arg1;
- (id)streamVideoMd5;
- (void)setStreamVideoMd5:(id)arg1;
- (id)previewImageUrl;
- (void)setPreviewImageUrl:(id)arg1;
- (id)textOnVideo;
- (void)setTextOnVideo:(id)arg1;
- (id)buttonOnVideo;
- (void)setButtonOnVideo:(id)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (double)streamDisplayWidth;
- (void)setStreamDisplayWidth:(double)arg1;
- (double)streamDisplayHeight;
- (void)setStreamDisplayHeight:(double)arg1;
- (BOOL)useNewStreamPlayer;
- (void)setUseNewStreamPlayer:(BOOL)arg1;
- (BOOL)forbiddenLoopPlay;
- (void)setForbiddenLoopPlay:(BOOL)arg1;
- (BOOL)alwaysAutoPlay;
- (void)setAlwaysAutoPlay:(BOOL)arg1;
- (BOOL)allowVoice;
- (void)setAllowVoice:(BOOL)arg1;
- (BOOL)forceLandscapeWhenTurnToFullScreen;
- (void)setForceLandscapeWhenTurnToFullScreen:(BOOL)arg1;
- (id)floatBarInfo;
- (void)setFloatBarInfo:(id)arg1;
- (void).cxx_destruct;
@end


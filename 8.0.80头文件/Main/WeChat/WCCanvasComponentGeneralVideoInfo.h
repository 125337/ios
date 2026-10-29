@interface WCCanvasComponentGeneralVideoInfo : MMObject <NSCoding>
{
    BOOL _forbiddenControlView; // +0x8
    BOOL _hideVoiceIcon; // +0x9
    BOOL _forbiddenAutoPlay; // +0xa
    BOOL _forbiddenPreload; // +0xb
    BOOL _forceLandscapeWhenTurnToFullScreen; // +0xc
    BOOL _allowVoice; // +0xd
    int _playerMode; // +0x10
    int _displayType; // +0x14
    NSString * _videoUrl; // +0x18
    NSString * _thumbUrl; // +0x20
    double _displayWidth; // +0x28
    double _displayHeight; // +0x30
    NSString * _videoMd5; // +0x38
    WCCanvasComponentVideoFloatBarInfo * _floatBarInfo; // +0x40
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (int)playerMode;
- (void)setPlayerMode:(int)arg1;
- (int)displayType;
- (void)setDisplayType:(int)arg1;
- (double)displayWidth;
- (void)setDisplayWidth:(double)arg1;
- (double)displayHeight;
- (void)setDisplayHeight:(double)arg1;
- (id)videoMd5;
- (void)setVideoMd5:(id)arg1;
- (BOOL)forbiddenControlView;
- (void)setForbiddenControlView:(BOOL)arg1;
- (BOOL)hideVoiceIcon;
- (void)setHideVoiceIcon:(BOOL)arg1;
- (BOOL)forbiddenAutoPlay;
- (void)setForbiddenAutoPlay:(BOOL)arg1;
- (BOOL)forbiddenPreload;
- (void)setForbiddenPreload:(BOOL)arg1;
- (BOOL)forceLandscapeWhenTurnToFullScreen;
- (void)setForceLandscapeWhenTurnToFullScreen:(BOOL)arg1;
- (id)floatBarInfo;
- (void)setFloatBarInfo:(id)arg1;
- (BOOL)allowVoice;
- (void)setAllowVoice:(BOOL)arg1;
- (void).cxx_destruct;
@end

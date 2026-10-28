@interface OMJComposingDesc : NSObject
{
    OMJCoordinatingDesc * _coordinatingDesc; // +0x8
    NSArray * _mainClips; // +0x10
    OMJAudioClip * _audioClip; // +0x18
    OMJLyricOverlayDesc * _lyricOverlayDesc; // +0x20
    NSArray * _stickerOverlayDescs; // +0x28
    NSArray * _textOverlayDescs; // +0x30
}
- (id)initWithCoordinatingDesc:(id)arg1 mainClips:(id)arg2;
- (id)coordinatingDesc;
- (id)mainClips;
- (id)audioClip;
- (void)setAudioClip:(id)arg1;
- (id)lyricOverlayDesc;
- (void)setLyricOverlayDesc:(id)arg1;
- (id)stickerOverlayDescs;
- (void)setStickerOverlayDescs:(id)arg1;
- (id)textOverlayDescs;
- (void)setTextOverlayDescs:(id)arg1;
- (void).cxx_destruct;
@end

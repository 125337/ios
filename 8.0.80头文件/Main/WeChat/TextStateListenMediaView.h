@interface TextStateListenMediaView : TingLiteMediaView <TextStateResidentMediaView>
{
    BOOL _inBrandAudioMode; // +0x8
    NSString * _textStateId; // +0x10
    double _startPlayTime; // +0x18
}
- (id)initWithTingItem:(id)arg1;
- (id)initWithMusicInfo:(id)arg1;
- (id)initWithListenId:(id)arg1;
- (void)textstateComminit;
- (double)fullScreenAspectRatio;
- (double)mediaAspectRatio;
- (void)pausePlayMedia;
- (void)startPlayMedia;
- (void)stopPlayMedia;
- (void)clearPlayTime;
- (BOOL)residentMediaIfNeeded;
- (BOOL)shouldResidentMedia;
- (id)stateListenId;
- (void)startPlayBrandAudio;
- (void)endPlayBrandAudio;
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (BOOL)inBrandAudioMode;
- (void)setInBrandAudioMode:(BOOL)arg1;
- (double)startPlayTime;
- (void)setStartPlayTime:(double)arg1;
- (void).cxx_destruct;
@end

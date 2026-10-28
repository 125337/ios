@interface TextStateListenMediaView : TingLiteMediaView <TextStateResidentMediaView>
{
    NSString * _textStateId; // +0x8
    double _startPlayTime; // +0x10
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
- (id)textStateId;
- (void)setTextStateId:(id)arg1;
- (double)startPlayTime;
- (void)setStartPlayTime:(double)arg1;
- (void).cxx_destruct;
@end

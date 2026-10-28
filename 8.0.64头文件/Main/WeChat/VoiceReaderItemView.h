@interface VoiceReaderItemView : ReaderItemView <IMusicPlayerExt, TingFlowPlayerNotification>
{
    WCBrandAudioPlayView * m_playingImageView; // +0xa8
    UIView * m_titleTimeView; // +0xb0
    UILabel * m_timeLabel; // +0xb8
    unsigned int _playLength; // +0xc0
    TingItem * _tingItem; // +0xc8
    NSMutableArray * _voiceOverElements; // +0xd0
}
- (void)topView;
- (void)normalView;
- (void)initPlayBtn:(BOOL)arg1;
- (id)voiceOverElements;
- (void)initVoiceOverElements;
- (void)updateVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)tingItem;
- (void)setTingItem:(id)arg1;
- (unsigned int)playLength;
- (void)setPlayLength:(unsigned int)arg1;
- (void)setVoiceOverElements:(id)arg1;
- (void).cxx_destruct;
@end

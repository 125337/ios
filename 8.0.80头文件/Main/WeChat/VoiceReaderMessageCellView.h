@interface VoiceReaderMessageCellView : ReaderMessageCellView <IMusicPlayerExt, TingPlayAppNotification>
{
    UIView * m_titleTimeView; // +0x48
    WCBrandAudioPlayView * m_playingImageView; // +0x50
    NSMutableArray * _voiceOverElements; // +0x58
}
- (void)layoutContentView;
- (void)initPlayingImageView;
- (id)viewForTitleAndTimeLabel;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (id)voiceOverElements;
- (void)initVoiceOverElements;
- (void)updateVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)getSuperViewAccessibilityLabel;
- (void)setVoiceOverElements:(id)arg1;
- (void).cxx_destruct;
@end

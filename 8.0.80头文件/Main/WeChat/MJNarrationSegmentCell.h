@interface MJNarrationSegmentCell : MJAudioSegmentCell
{
    MJNarrationSegmentViewModel * _narrationSegmentVM; // +0x8
    MJVoiceLabel * _recognizingTipLabel; // +0x10
    MJCaptionErrorTipLabel * _sttErrorTipLabel; // +0x18
    MJCaptionErrorTipLabel * _stsErrorTipLabel; // +0x20
    MJVoiceLabel * _voiceLabel; // +0x28
    MJMuteLabel * _muteLabel; // +0x30
    map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>> _labelsByCaptionItem; // +0x38
    CGRect _currentBounds; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)recognizingTipLabel;
- (id)sttErrorTipLabel;
- (id)stsErrorTipLabel;
- (id)voiceLabel;
- (id)muteLabel;
- (id)captionLabelWithText:(id)arg1;
- (void)setupCaptionLabels;
- (void)showCaptionLabelsAnimated:(BOOL)arg1;
- (void)hideCaptionLabelsAnimated:(BOOL)arg1;
- (void)updateVoiceLabel;
- (void)updateMuteLabel;
- (void)layoutCaptionLabel:(id)arg1 withTimeRange:(struct)arg2;
- (void)layoutSTTErrorTipLabel;
- (void)layoutSTSErrorTipLabel;
- (void)layoutSTSErrorTipLabelIfNeeded;
- (void)layoutRecognitionTipLabel;
- (void)layoutCaptionLabels;
- (void)prepareForReuse;
- (void)setupWithSegmentViewModel:(id)arg1;
- (void)syncWithMutation;
- (BOOL)checkViewModel;
- (id)narrationSegmentVM;
- (void)setNarrationSegmentVM:(id)arg1;
- (map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>>)labelsByCaptionItem;
- (void)setLabelsByCaptionItem:(map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>>)arg1;
- (void)setRecognizingTipLabel:(id)arg1;
- (void)setSttErrorTipLabel:(id)arg1;
- (void)setStsErrorTipLabel:(id)arg1;
- (void)setVoiceLabel:(id)arg1;
- (void)setMuteLabel:(id)arg1;
- (CGRect)currentBounds;
- (void)setCurrentBounds:(CGRect)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

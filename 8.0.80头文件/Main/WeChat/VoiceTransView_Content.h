@interface VoiceTransView_Content : UIView
{
    unsigned long long _recordState; // +0x8
    NSString * _translatedText; // +0x10
    MMGrowTextView * _textView; // +0x18
    VoiceTransView * _voiceTransView; // +0x20
    UIView * _bottomView; // +0x28
    VoiceTransView_ContentLabel * _contentLabel; // +0x30
    UILabel * _tipsLabel; // +0x38
}
- (id)initWithBottomView:(id)arg1 voiceTransView:(id)arg2;
- (void)changeRecordStateTo:(unsigned long long)arg1;
- (void)updateSubviews;
- (void)setBubbleBackgroundColor:(id)arg1;
- (void)setTranslatedText:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (void)beginExit;
- (void)beginEditing;
- (void)updateUI;
- (id)contentLabel;
- (id)tipsLabel;
- (id)sendTips;
- (unsigned long long)recordState;
- (void)setRecordState:(unsigned long long)arg1;
- (id)translatedText;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)voiceTransView;
- (void)setVoiceTransView:(id)arg1;
- (id)bottomView;
- (void)setBottomView:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

@interface VoiceMessageViewModel : CommonMessageViewModel <ITranslateMsgMgrExt>
{
    BOOL _isPlaying; // +0x70
    BOOL _inMultiSelectStatus; // +0x71
    BOOL _bShowingQuickTranTips; // +0x72
    BOOL _bDelayRetryPlay; // +0x73
    double _voiceNodeWidth; // +0x78
    double _voiceNodeHeight; // +0x80
    VoiceTransInfo * _voiceTranslateInfo; // +0x88
    NSMutableArray * _textTranslateTextStyles; // +0x90
    CTRichTextView * _richTextViewForCalcu; // +0x98
    CGSize _textTranslateTextSize; // +0xa0
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (void)dealloc;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)voiceTimeLength;
- (id)richTextViewForCalcu;
- (double)voiceNodeWidth;
- (double)voiceNodeHeight;
- (id)voiceTimeStirng;
- (CGRect)getCellFrame;
- (BOOL)isPlaying;
- (id)voiceTranslateInfo;
- (CGSize)translatedTextSize;
- (CGSize)displayTextSize;
- (id)pathOfTranslateResult;
- (BOOL)hasLocalTranslateResult;
- (BOOL)isTranslateEnd;
- (BOOL)canShowTranslateText;
- (BOOL)canShowTranslateLoadingView;
- (double)tableOffsetToScroll;
- (void)adjustTableOffset;
- (void)adjustTableOffsetByPop:(double)arg1;
- (void)reportKV;
- (BOOL)canShowTextTranslateEntry;
- (BOOL)canShowTextTranslateView;
- (BOOL)canShowTextTranslateText;
- (id)textTranslateInfo;
- (CGSize)textTranslateTextSize;
- (id)textTranslateTextStyles;
- (CGSize)calculateTextTranslatedTextSize;
- (void)translateVoice;
- (void)stopTranslateVoice;
- (void)removeTranslateVoiceInfo;
- (void)foldTranslateResult;
- (void)animateShowQuickTransTips;
- (void)animateHiddenQuickTransTips;
- (void)onMessageStartPlaying;
- (void)onMessageStopPlaying;
- (id)additionalAccessibilityDescription;
- (id)accessibilityMessageType;
- (BOOL)canShowResumeButton;
- (BOOL)useEnhanceColor;
- (void)onTranslateMessageFailed:(id)arg1 errTip:(id)arg2;
- (void)onTranslateMessageChanged:(id)arg1;
- (void)setVoiceNodeWidth:(double)arg1;
- (void)setVoiceNodeHeight:(double)arg1;
- (void)setIsPlaying:(BOOL)arg1;
- (void)setVoiceTranslateInfo:(id)arg1;
- (BOOL)inMultiSelectStatus;
- (void)setInMultiSelectStatus:(BOOL)arg1;
- (BOOL)bShowingQuickTranTips;
- (void)setBShowingQuickTranTips:(BOOL)arg1;
- (BOOL)bDelayRetryPlay;
- (void)setBDelayRetryPlay:(BOOL)arg1;
- (void)setTextTranslateTextSize:(CGSize)arg1;
- (void)setTextTranslateTextStyles:(id)arg1;
- (void)setRichTextViewForCalcu:(id)arg1;
- (void).cxx_destruct;
@end


@interface TranslateToolView : UIView <TranslateLanguageSelectViewDelegate, TextFloatPreviewDelegate, TextInputTranslatingMgrDelegate>
{
    BOOL _bShowing; // +0x8
    int _state; // +0xc
    unsigned int _translatingWordingIndex; // +0x10
    id <TranslateToolViewDelegate> _delegate; // +0x18
    NSString * _chatName; // +0x20
    double _transStateWidth; // +0x28
    unsigned long long _currentInputID; // +0x30
    UILabel * _resultLabel; // +0x38
    UIView * _resultCropView; // +0x40
    MMUIButton * _transIconBtn; // +0x48
    UIImageView * _arrowImageView; // +0x50
    MMUIButton * _useResultButton; // +0x58
    MMUIButton * _languageSelectButton; // +0x60
    TranslateLanguageSelectView * _selectedLanguageView; // +0x68
    NSString * _language; // +0x70
    NSString * _nsTranslatedText; // +0x78
    NSString * _translatingWording; // +0x80
    NSString * _nsTranslatedTextToDispaly; // +0x88
    NSString * _nsTranslatedTextWithNoLineBreak; // +0x90
    MMTimer * _timer; // +0x98
    TextInputTranslatingMgr * _translatingMgr; // +0xa0
}
- (id)initWithTransStateWidth:(double)arg1 chatName:(id)arg2;
- (id)translatingMgr;
- (id)transIconBtn;
- (id)arrowImageView;
- (id)resultLabel;
- (id)languageSelectButton;
- (id)useResultButton;
- (void)initView;
- (void)resizeLanguageSelectButton;
- (void)changeToTransState:(int)arg1;
- (void)changeToReadyState;
- (void)changeToTranslatedState;
- (void)changeToTranslatingState;
- (void)showUseResultBtn;
- (void)startTimer;
- (void)stopTimer;
- (void)setResultLabelText:(id)arg1;
- (void)displayResultText;
- (void)changeTranslatingWording;
- (void)onInputContentChangeWithText:(id)arg1;
- (void)hiddenLanguageSelectView;
- (void)updateTransWidth:(double)arg1;
- (unsigned long long)getInputID;
- (void)setHidden:(BOOL)arg1;
- (void)onViewDisappear;
- (void)reportShowTranslate;
- (void)onClickResultLabel;
- (void)onClickUseTransResultContent;
- (void)onSendText:(id)arg1;
- (void)onClickLanguageSelectBtn;
- (void)onClickSelectLanguage;
- (void)onConfirmedWithLanguageType:(id)arg1;
- (void)onLanguageSelectViewWillClose;
- (void)onWindowHide;
- (id)getViewController;
- (id)getChatName;
- (void)onTranslateFinishWithText:(id)arg1 translateText:(id)arg2 inputID:(unsigned long long)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (double)transStateWidth;
- (void)setTransStateWidth:(double)arg1;
- (unsigned long long)currentInputID;
- (void)setCurrentInputID:(unsigned long long)arg1;
- (void)setResultLabel:(id)arg1;
- (id)resultCropView;
- (void)setResultCropView:(id)arg1;
- (void)setTransIconBtn:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setUseResultButton:(id)arg1;
- (void)setLanguageSelectButton:(id)arg1;
- (id)selectedLanguageView;
- (void)setSelectedLanguageView:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (id)nsTranslatedText;
- (void)setNsTranslatedText:(id)arg1;
- (id)translatingWording;
- (void)setTranslatingWording:(id)arg1;
- (id)nsTranslatedTextToDispaly;
- (void)setNsTranslatedTextToDispaly:(id)arg1;
- (id)nsTranslatedTextWithNoLineBreak;
- (void)setNsTranslatedTextWithNoLineBreak:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (int)state;
- (void)setState:(int)arg1;
- (unsigned int)translatingWordingIndex;
- (void)setTranslatingWordingIndex:(unsigned int)arg1;
- (void)setTranslatingMgr:(id)arg1;
- (BOOL)bShowing;
- (void)setBShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end

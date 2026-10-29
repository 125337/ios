@interface VoiceTransLanguageSelectView : UIView
{
    unsigned int _languageType; // +0x8
    NSString * _chatUserName; // +0x10
    id <VoiceTransLanguageSelectViewDelegate> _delegate; // +0x18
    MMTableViewInfo * _tableViewInfo; // +0x20
    UIView * _selectPanelView; // +0x28
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)addSubViews;
- (void)initPanGestureRecognizer;
- (void)onPanGestureRecognizerAction:(id)arg1;
- (void)updateSelectViewWithCurInputType:(unsigned int)arg1;
- (void)onLanguageSelectd:(id)arg1;
- (void)onBackBtnClick;
- (id)chatUserName;
- (void)setChatUserName:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (id)selectPanelView;
- (void)setSelectPanelView:(id)arg1;
- (unsigned int)languageType;
- (void)setLanguageType:(unsigned int)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCCanvasRandomPickCardBottomView : MMUIView
{
    BOOL _didShowSwitchAnimation; // +0x8
    WCCanvasRandomLayoutEncorePickInfo * _encoreInfo; // +0x10
    id <WCCanvasRandomPickCardBottomViewDelegate> _delegate; // +0x18
    WCCanvasRandomPickCardBottomIntroduceView * _introduceView; // +0x20
    UILabel * _doneLabel; // +0x28
    WCCanvasRandomPickCardButtonView * _buttonView; // +0x30
    MMUIButton * _backgroundButton; // +0x38
}
+ (CGSize)calcSizeForEncoreInfo:(id)arg1 orientation:(long long)arg2;
+ (id)generateSimpleLabelWithFont:(id)arg1 textColor:(id)arg2 text:(id)arg3;
+ (void)addShadowToView:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 encoreInfo:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)introduceView;
- (id)doneLabel;
- (id)buttonView;
- (id)backgroundButton;
- (void)onPickCardViewClicked:(id)arg1;
- (void)resetRandomPickCardBottomView;
- (void)updateRandomPickCardBottomView;
- (void)asyncUpdateRandomCardsWithRemainCount;
- (void)updateRandomPickCardBottomViewVisibleWithRemainCount:(unsigned long long)arg1;
- (void)hideRandomPickCardBottomView;
- (void)onHideRandomPickCardBottomViewDone;
- (id)encoreInfo;
- (void)setEncoreInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIntroduceView:(id)arg1;
- (void)setDoneLabel:(id)arg1;
- (void)setButtonView:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (BOOL)didShowSwitchAnimation;
- (void)setDidShowSwitchAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end


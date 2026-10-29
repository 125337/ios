@interface WXKeyBoardTipsView : UIStackView <MMNewTipsMgrExt>
{
    NSString * m_tipsText; // +0x8
    NSString * m_pathKey; // +0x10
    int m_scene; // +0x18
    id /* block */ _ClickTipsViewAction; // +0x20
    UILabel * _wxKeyboardTipsLabel; // +0x28
    MMUISpacer * _reddotSpacer; // +0x30
    UIImageView * _arrowImageView; // +0x38
}
+ (id)tipsViewWithScene:(unsigned int)arg1;
- (id)initWithText:(id)arg1 pathKey:(id)arg2;
- (id)initWithText:(id)arg1 pathKey:(id)arg2 scene:(int)arg3;
- (void)initViews;
- (double)innerMargin;
- (BOOL)hasReddot;
- (CGSize)preferSize;
- (void)handleClickButton;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (id /* block */)ClickTipsViewAction;
- (void)setClickTipsViewAction:(id /* block */)arg1;
- (id)wxKeyboardTipsLabel;
- (void)setWxKeyboardTipsLabel:(id)arg1;
- (id)reddotSpacer;
- (void)setReddotSpacer:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end


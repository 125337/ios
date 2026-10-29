@interface WXKeyBoardEduBannerView : UIView <MMNewTipsMgrExt>
{
    NSString * m_pathKey; // +0x8
    UIImageView * _logoView; // +0x10
    UIImageView * _arrowView; // +0x18
    UIView * _highlightView; // +0x20
    id /* block */ _ClickAction; // +0x28
    MMUILabel * _textLabel; // +0x30
}
- (id)initWithText:(id)arg1 pathKey:(id)arg2;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)handleTap;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (id /* block */)ClickAction;
- (void)setClickAction:(id /* block */)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderOperateEntranceTipsView : UIView <ClickStatSwizzleExt>
{
    BOOL _needReflush; // +0x8
    NSString * _content; // +0x10
    id /* block */ _onClickOtherArea; // +0x18
    unsigned long long _position; // +0x20
    UIView * _referView; // +0x28
    WCFinderRichTextView * _textView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupContent:(id)arg1 referView:(id)arg2;
- (void)setupBubble;
- (id)createTipsTextVeiw;
- (void)handleOtherTouch;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)content;
- (void)setContent:(id)arg1;
- (id /* block */)onClickOtherArea;
- (void)setOnClickOtherArea:(id /* block */)arg1;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg1;
- (id)referView;
- (void)setReferView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (BOOL)needReflush;
- (void)setNeedReflush:(BOOL)arg1;
- (void).cxx_destruct;
@end

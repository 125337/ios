@interface WCButtonListView : UIView
{
    BOOL _autoExpandHitArea; // +0x8
    BOOL _needsLayoutButtons; // +0x9
    double _buttonPadding; // +0x10
    double _separatorLineHeight; // +0x18
    UIColor * _separatorColor; // +0x20
    id /* block */ _generateButtonHandler; // +0x28
    NSMutableDictionary * _keyToButtonItemDict; // +0x30
    NSMutableArray * _itemList; // +0x38
}
+ (id)keyForButton:(id)arg1;
+ (id)generateBottomButton;
+ (id)generateSeparatorLine;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (CGSize)layoutButtonsAndSeparatorsWithWidth:(double)arg1;
- (void)setAutoExpandHitArea:(BOOL)arg1;
- (void)setButtonPadding:(double)arg1;
- (void)setSeparatorLineHeight:(double)arg1;
- (void)setSeparatorColor:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)addButtonWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (void)addLineBreak;
- (void)onTapButton:(id)arg1;
- (BOOL)autoExpandHitArea;
- (double)buttonPadding;
- (double)separatorLineHeight;
- (id)separatorColor;
- (id /* block */)generateButtonHandler;
- (void)setGenerateButtonHandler:(id /* block */)arg1;
- (id)keyToButtonItemDict;
- (void)setKeyToButtonItemDict:(id)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;
- (BOOL)needsLayoutButtons;
- (void)setNeedsLayoutButtons:(BOOL)arg1;
- (void).cxx_destruct;
@end


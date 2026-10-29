@interface WCFinderCommentListSelectTabView : UIView <ILinkEventExt>
{
    id /* block */ _selectBlock; // +0x8
    id /* block */ _willUnSelectBlock; // +0x10
    id /* block */ _shopReportDictBlock; // +0x18
    id <WCFinderCommentListSelectTabViewDelegate> _delegate; // +0x20
    UIView * _lineView; // +0x28
    MMUIButton * _commentButton; // +0x30
    MMUIButton * _shopCommentButton; // +0x38
    MMUIButton * _selectedButton; // +0x40
    UIView * _bottomLine; // +0x48
    WCFinderCustomImageRichTextView * _rightLinkView; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupRightLinkView;
- (BOOL)hasDisplayRightLink;
- (unsigned long long)selectedType;
- (void)clickButtonAction:(id)arg1;
- (void)setSelectedButton:(id)arg1;
- (void)reloadLayout;
- (void)updateCommentStr:(id)arg1 shopCommentStr:(id)arg2 linkText:(id)arg3;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (id /* block */)willUnSelectBlock;
- (void)setWillUnSelectBlock:(id /* block */)arg1;
- (id /* block */)shopReportDictBlock;
- (void)setShopReportDictBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)commentButton;
- (void)setCommentButton:(id)arg1;
- (id)shopCommentButton;
- (void)setShopCommentButton:(id)arg1;
- (id)selectedButton;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)rightLinkView;
- (void)setRightLinkView:(id)arg1;
- (void).cxx_destruct;
@end


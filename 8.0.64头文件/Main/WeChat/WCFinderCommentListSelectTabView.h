@interface WCFinderCommentListSelectTabView : UIView <ILinkEventExt>
{
    BOOL _isDownDirection; // +0x8
    id /* block */ _selectBlock; // +0x10
    id /* block */ _willUnSelectBlock; // +0x18
    id /* block */ _shopReportDictBlock; // +0x20
    id <WCFinderCommentListSelectTabViewDelegate> _delegate; // +0x28
    MMUIButton * _selectedButton; // +0x30
    UIView * _lineView; // +0x38
    MMUIButton * _commentButton; // +0x40
    MMUIButton * _shopCommentButton; // +0x48
    UIView * _bottomLine; // +0x50
    WCFinderRichTextView * _rightLinkView; // +0x58
    UIView * _rightContainerView; // +0x60
    NSString * _linkText; // +0x68
    double _lastWidth; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupRightLinkView;
- (BOOL)hasDisplayRightLink;
- (void)changeCommentBtnImageDirection:(BOOL)arg1;
- (unsigned long long)selectedType;
- (void)clickButtonAction:(id)arg1;
- (void)setSelectedButton:(id)arg1;
- (void)reloadLayout;
- (void)updateCommentStr:(id)arg1 shopCommentStr:(id)arg2 linkText:(id)arg3 showArrow:(BOOL)arg4;
- (void)_doLayout;
- (void)layoutSubviews;
- (void)updateRightContainerLayout;
- (void)updateRightBarView:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id /* block */)selectBlock;
- (void)setSelectBlock:(id /* block */)arg1;
- (id /* block */)willUnSelectBlock;
- (void)setWillUnSelectBlock:(id /* block */)arg1;
- (id /* block */)shopReportDictBlock;
- (void)setShopReportDictBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedButton;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)commentButton;
- (void)setCommentButton:(id)arg1;
- (id)shopCommentButton;
- (void)setShopCommentButton:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)rightLinkView;
- (void)setRightLinkView:(id)arg1;
- (id)rightContainerView;
- (void)setRightContainerView:(id)arg1;
- (BOOL)isDownDirection;
- (void)setIsDownDirection:(BOOL)arg1;
- (id)linkText;
- (void)setLinkText:(id)arg1;
- (double)lastWidth;
- (void)setLastWidth:(double)arg1;
- (void).cxx_destruct;
@end

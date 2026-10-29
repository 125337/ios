@interface MMWebHangTipsBar : UIView
{
    id <MMWebHangTipsBarDelegate> _delegate; // +0x8
    UIView * _buttonBgView; // +0x10
    UIView * _sepLine; // +0x18
    MMUILabel * _transLabel; // +0x20
    MMUIButton * _linkBtn; // +0x28
    MMUIButton * _closeBtn; // +0x30
    SightIconView * _loadView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubView;
- (void)layoutSubviews;
- (void)setTransTipsText:(id)arg1 andHideLoad:(BOOL)arg2;
- (void)setSepLineShow:(BOOL)arg1;
- (void)onClickLinkBtn:(id)arg1;
- (void)onClickCloseBtn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)buttonBgView;
- (void)setButtonBgView:(id)arg1;
- (id)sepLine;
- (void)setSepLine:(id)arg1;
- (id)transLabel;
- (void)setTransLabel:(id)arg1;
- (id)linkBtn;
- (void)setLinkBtn:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)loadView;
- (void)setLoadView:(id)arg1;
- (void).cxx_destruct;
@end


@interface MMWebNaviErrorView : UIView
{
    unsigned int _reason; // +0x8
    id /* block */ _reloadAction; // +0x10
    UIImageView * _errIcon; // +0x18
    MMUILabel * _errLbl; // +0x20
    UIButton * _reloadButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setText:(id)arg1;
- (void)onReload;
- (unsigned int)reason;
- (void)setReason:(unsigned int)arg1;
- (id /* block */)reloadAction;
- (void)setReloadAction:(id /* block */)arg1;
- (id)errIcon;
- (void)setErrIcon:(id)arg1;
- (id)errLbl;
- (void)setErrLbl:(id)arg1;
- (id)reloadButton;
- (void)setReloadButton:(id)arg1;
- (void).cxx_destruct;
@end


@interface MMWebCommonBottomToastView : UIView
{
    NSString * _toastId; // +0x8
    UIButton * _contentView; // +0x10
    UILabel * _titleLabel; // +0x18
    UILabel * _subtitleLabel; // +0x20
    UIImageView * _iconView; // +0x28
    UIImageView * _arrowView; // +0x30
    UIView * _buttonMask; // +0x38
    double _extraBottomMargin; // +0x40
    id /* block */ _clickBlock; // +0x48
    id /* block */ _hideBlock; // +0x50
}
+ (void)showToastWithId:(id)arg1 title:(id)arg2 iconData:(id)arg3 subtitle:(id)arg4 needArrow:(BOOL)arg5 clickable:(BOOL)arg6 inSuperView:(id)arg7 clickBlock:(id /* block */)arg8;
+ (void)showToastWithId:(id)arg1 title:(id)arg2 iconImage:(id)arg3 iconData:(id)arg4 subtitle:(id)arg5 needArrow:(BOOL)arg6 clickable:(BOOL)arg7 extraBottomMargin:(double)arg8 inSuperView:(id)arg9 clickBlock:(id /* block */)arg10 hideBlock:(id /* block */)arg11;
+ (void)showToastWithId:(id)arg1 title:(id)arg2 iconImage:(id)arg3 iconData:(id)arg4 subtitle:(id)arg5 needArrow:(BOOL)arg6 clickable:(BOOL)arg7 extraBottomMargin:(double)arg8 inSuperView:(id)arg9 reportBindBlock:(id /* block */)arg10 clickBlock:(id /* block */)arg11 hideBlock:(id /* block */)arg12;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initView;
- (void)layoutSubviews;
- (void)addNotification;
- (void)removeNotification;
- (void)showToast;
- (void)hideToastWithAnimation:(BOOL)arg1;
- (void)onToastClicked;
- (void)hideToast;
- (void)onToolViewChangeToMode:(unsigned long long)arg1 Height:(double)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)toastId;
- (void)setToastId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)buttonMask;
- (void)setButtonMask:(id)arg1;
- (double)extraBottomMargin;
- (void)setExtraBottomMargin:(double)arg1;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (id /* block */)hideBlock;
- (void)setHideBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end


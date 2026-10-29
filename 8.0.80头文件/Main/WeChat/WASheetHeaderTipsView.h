@interface WASheetHeaderTipsView : UIView
{
    id /* block */ _clickCloseBlock; // +0x8
    id /* block */ _didShowBlock; // +0x10
    NSString * _tipsText; // +0x18
    UILabel * _tipsLabel; // +0x20
    UIButton * _closeButton; // +0x28
    UIImageView * _iconView; // +0x30
}
+ (double)tipsViewHeightWithText:(id)arg1 superviewWidth:(double)arg2;
- (id)initWithTipsText:(id)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)onClickTipsClose:(id)arg1;
- (void)didMoveToWindow;
- (id /* block */)clickCloseBlock;
- (void)setClickCloseBlock:(id /* block */)arg1;
- (id /* block */)didShowBlock;
- (void)setDidShowBlock:(id /* block */)arg1;
- (id)tipsText;
- (void)setTipsText:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end

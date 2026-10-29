@interface MMLimitedModeBlockTipsView : UIView
{
    id /* block */ _onQuitBlock; // +0x8
    UIScrollView * _contentView; // +0x10
    MMUILabel * _descLabel; // +0x18
}
+ (id)showBlockTipsInViewController:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)configView;
- (void)layoutSubviews;
- (void)onClickQuitBtn;
- (id /* block */)onQuitBlock;
- (void)setOnQuitBlock:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end


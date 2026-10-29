@interface MMFinderLiveTestLiveTipsBar : UIView
{
    id /* block */ _closeTestLiveBlock; // +0x8
    UIView * _contentView; // +0x10
    CAShapeLayer * _shapeLayer; // +0x18
    UILabel * _tipLabel; // +0x20
    MMUIButton * _closeBtn; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)tipLabel;
- (id)closeBtn;
- (void)closeTestLiveClick;
- (void)updateSelfViewShapeClip;
- (id)contentView;
- (id /* block */)closeTestLiveBlock;
- (void)setCloseTestLiveBlock:(id /* block */)arg1;
- (void)setContentView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setTipLabel:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void).cxx_destruct;
@end


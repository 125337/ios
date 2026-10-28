@interface WACommentListFooterTipView : MMUIView
{
    UIView * _leftLineView; // +0x8
    UIView * _rightLineView; // +0x10
    MMUILabel * _tipsLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)labelText;
- (void)setLabelText:(id)arg1;
- (id)leftLineView;
- (id)rightLineView;
- (id)tipsLabel;
- (void)setLeftLineView:(id)arg1;
- (void)setRightLineView:(id)arg1;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

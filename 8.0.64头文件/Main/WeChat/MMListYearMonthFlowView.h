@interface MMListYearMonthFlowView : MMUIView
{
    id <MMListYearMonthFlowViewDelegate> _delegate; // +0x8
    MMUILabel * _yearMonthLabel; // +0x10
    MMUIImageView * _selectDownIcon; // +0x18
    UITapGestureRecognizer * _selectTapGesture; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateYearMonth:(id)arg1;
- (id)yearMonthLabel;
- (id)selectDownIcon;
- (id)selectTapGesture;
- (void)selectButtonDidClicked;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setYearMonthLabel:(id)arg1;
- (void)setSelectDownIcon:(id)arg1;
- (void)setSelectTapGesture:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCListYearFlowView : MMUIView
{
    BOOL _canClick; // +0x8
    id <WCListYearFloatViewDelegate> _delegate; // +0x10
    MMUILabel * _yearLabel; // +0x18
    MMUIImageView * _selectDownIcon; // +0x20
    UITapGestureRecognizer * _selectTapGesture; // +0x28
}
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateYear:(id)arg1;
- (id)yearLabel;
- (id)selectDownIcon;
- (id)selectTapGesture;
- (void)selectButtonDidClicked;
- (void)setCanClick:(BOOL)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)canClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setYearLabel:(id)arg1;
- (void)setSelectDownIcon:(id)arg1;
- (void)setSelectTapGesture:(id)arg1;
- (void).cxx_destruct;
@end


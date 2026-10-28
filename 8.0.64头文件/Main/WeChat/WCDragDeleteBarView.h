@interface WCDragDeleteBarView : MMUIView
{
    BOOL _isMoveIn; // +0x8
    long long _option; // +0x10
    NSArray * _buttonArray; // +0x18
    WCDragBarButtonView * _starBtn; // +0x20
    WCDragBarButtonView * _deleteBtn; // +0x28
    NSNumber * _lastButtonOption; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)updateDeleteBtnTitle:(id)arg1;
- (void)layoutSubviews;
- (void)setOption:(long long)arg1;
- (long long)moveIn:(CGPoint)arg1;
- (void)moveOut;
- (long long)option;
- (BOOL)isMoveIn;
- (void)setIsMoveIn:(BOOL)arg1;
- (id)buttonArray;
- (void)setButtonArray:(id)arg1;
- (id)starBtn;
- (void)setStarBtn:(id)arg1;
- (id)deleteBtn;
- (void)setDeleteBtn:(id)arg1;
- (id)lastButtonOption;
- (void)setLastButtonOption:(id)arg1;
- (void).cxx_destruct;
@end

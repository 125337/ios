@interface WCFinderNavTabTitleView : MMBarItemCustomView
{
    BOOL _autoAdjustSize; // +0x8
    UIView * _container; // +0x10
    NSMutableArray * _titleViews; // +0x18
    UIView * _cursorView; // +0x20
    id <WCFinderNavTabTitleViewDelegate> _delegate; // +0x28
    double _cursorProgress; // +0x30
    WCFinderNavTabTitleViewLayout * _layout; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithAutoAdjustSize:(BOOL)arg1 needCursor:(BOOL)arg2;
- (void)commonInitWithAutoAdjustSize:(BOOL)arg1 needCursor:(BOOL)arg2;
- (void)setLayout:(id)arg1;
- (void)updateLayoutFrom:(id)arg1 to:(id)arg2;
- (void)bindTabDefine:(id)arg1 toBtn:(id)arg2;
- (void)updateCursor;
- (void)didMoveToWindow;
- (void)layoutContainer;
- (void)sizeToFitButtons;
- (void)layoutSubviews;
- (CGSize)intrinsicContentSize;
- (void)setCursorProgress:(double)arg1;
- (CGRect)cursorFrameForView:(CGRect)arg1;
- (void)updateSelectedIdx:(long long)arg1;
- (void)onClickButton:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)titleViews;
- (void)setTitleViews:(id)arg1;
- (id)cursorView;
- (void)setCursorView:(id)arg1;
- (BOOL)autoAdjustSize;
- (void)setAutoAdjustSize:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)cursorProgress;
- (id)layout;
- (void).cxx_destruct;
@end

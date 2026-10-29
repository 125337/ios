@interface WCFinderCollectionDescriptionHalfVC : MMUIHalfScreenViewController
{
    NSString * _descContent; // +0x68
    double _heightRatio; // +0x70
    UIScrollView * _scrollView; // +0x78
    RichTextView * _textView; // +0x80
    MMUIButton * _closeBtn; // +0x88
}
- (id)initWithDescription:(id)arg1;
- (void)baseInit;
- (void)viewDidLoad;
- (double)halfScreenHeight;
- (double)getMaxHalfScreenHeight;
- (double)topViewHeight;
- (void)viewWillLayoutSubviews;
- (double)scrollViewHeight;
- (void)setupUI;
- (void)onCloseBtnClicked:(id)arg1;
- (id)descContent;
- (void)setDescContent:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (void).cxx_destruct;
@end


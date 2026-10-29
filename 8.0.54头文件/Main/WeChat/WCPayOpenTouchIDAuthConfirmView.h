@interface WCPayOpenTouchIDAuthConfirmView : MMUIView
{
    id /* block */ _cancelBlock; // +0x8
    id /* block */ _okBlock; // +0x10
    UIView * _contentView; // +0x18
}
- (id)initWithType:(int)arg1;
- (void)setupOpenTouchIDSuccessView;
- (void)setupOpenTouchIDGuiderView;
- (id)getHighlightImg:(CGRect)arg1;
- (void)onOKBtnClick:(id)arg1;
- (void)onCancelBtnClick:(id)arg1;
- (void)show;
- (float)widthOfContent;
- (float)fontSizeOfTitle;
- (float)fontSizeOfSubtitle;
- (float)fontSizeOfBtn;
- (float)topOfImg;
- (float)topOfTitle;
- (float)topOfSubtitle;
- (float)topOfBtn;
- (float)heightOfBtn;
- (id /* block */)cancelBlock;
- (void)setCancelBlock:(id /* block */)arg1;
- (id /* block */)okBlock;
- (void)setOkBlock:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end


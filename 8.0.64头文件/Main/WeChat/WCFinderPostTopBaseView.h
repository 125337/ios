@interface WCFinderPostTopBaseView : MMUIView
{
    NSString * _reportEId; // +0x8
    UIImageView * _iconImageView; // +0x10
    RichTextView * _richTextView; // +0x18
    MMUIButton * _sureBtn; // +0x20
    MMUIButton * _closeBtn; // +0x28
    id /* block */ _sureBlock; // +0x30
    id /* block */ _closeBlock; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 iconImage:(id)arg2 content:(id)arg3 sureBlock:(id /* block */)arg4 closeBlock:(id /* block */)arg5;
- (id)iconImageView;
- (id)richTextView;
- (id)sureBtn;
- (id)closeBtn;
- (void)onClickSureBtn;
- (void)onClickCloseBtn;
- (void)setUpUIComponent:(id)arg1 content:(id)arg2;
- (void)_layoutUIViews;
- (id)reportEId;
- (void)setReportEId:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (void)setSureBtn:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (id /* block */)sureBlock;
- (void)setSureBlock:(id /* block */)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

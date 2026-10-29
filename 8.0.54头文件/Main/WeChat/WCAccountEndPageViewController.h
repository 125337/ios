@interface WCAccountEndPageViewController : WCAccountBaseViewController
{
    NSString * _headlineText; // +0x78
    NSString * _headTipsText; // +0x80
    id /* block */ _onClichFinishBtnBlock; // +0x88
}
- (BOOL)useSheetView;
- (void)viewDidLoad;
- (void)initView;
- (id)currentPhone;
- (id)currentUsername;
- (id)genDescItem:(id)arg1 value:(id)arg2;
- (BOOL)useRedesignStyle;
- (void)onFinished;
- (id)headlineText;
- (void)setHeadlineText:(id)arg1;
- (id)headTipsText;
- (void)setHeadTipsText:(id)arg1;
- (id /* block */)onClichFinishBtnBlock;
- (void)setOnClichFinishBtnBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end


@interface WCFinderForeignRealNameVerifyPanelSheet : WCFinderCustomPanelSheet
{
    id /* block */ _okBlock; // +0x68
}
- (void)viewDidLoad;
- (id)loadContentView;
- (void)addIcon:(id)arg1 flex:(void *)arg2;
- (void)addTitle:(id)arg1 flex:(void *)arg2;
- (void)addDetail:(id)arg1 flex:(void *)arg2;
- (void)addOkButton:(id)arg1 flex:(void *)arg2;
- (void)addCancelBtn:(id)arg1 flex:(void *)arg2;
- (void)onClickOk;
- (id /* block */)okBlock;
- (void)setOkBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end


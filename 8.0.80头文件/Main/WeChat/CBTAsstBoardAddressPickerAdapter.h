@interface CBTAsstBoardAddressPickerAdapter : NSObject <WCAddressEntranceControlLogicDelegate, WCBaseControlLogicDeleagte, MMPageSheetAdapterDelegate>
{
    BOOL _didSelect; // +0x8
    BOOL _didPresent; // +0x9
    UIViewController * _hostViewController; // +0x10
    WCBaseControlLogic * _controlLogic; // +0x18
    id /* block */ _onSelect; // +0x20
    id /* block */ _onCancel; // +0x28
    MMPageSheetAdapter * _pageSheetAdapter; // +0x30
    MMUINavigationController * _sheetNavController; // +0x38
    CBTAsstBoardAddressPickerAdapter * _retainSelf; // +0x40
}
- (void)bindControlLogic:(id)arg1;
- (BOOL)gotoViewController:(id)arg1;
- (void)_onSheetCloseTapped;
- (void)pageSheetDidClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)_fireCancelOnceIfNeeded;
- (void)didSelectAddress:(id)arg1;
- (void)addressLogicDidStop;
- (void)dismissPageSheetAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (double)preferredSheetHeight;
- (void)configureCommonPageSheetConfig:(id)arg1 title:(id)arg2;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (id)controlLogic;
- (void)setControlLogic:(id)arg1;
- (id /* block */)onSelect;
- (void)setOnSelect:(id /* block */)arg1;
- (id /* block */)onCancel;
- (void)setOnCancel:(id /* block */)arg1;
- (BOOL)didSelect;
- (void)setDidSelect:(BOOL)arg1;
- (BOOL)didPresent;
- (void)setDidPresent:(BOOL)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id)sheetNavController;
- (void)setSheetNavController:(id)arg1;
- (id)retainSelf;
- (void)setRetainSelf:(id)arg1;
- (void).cxx_destruct;
@end

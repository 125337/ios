@interface WCDBRecoverViewController : MMUIViewController
{
    MMLoadingView * m_loadingView; // +0x68
    BOOL m_isRecovering; // +0x70
    NSArray * _infos; // +0x78
    WCDBRouterInfo * _selected; // +0x80
    MMTableViewInfo * m_tableViewInfo; // +0x88
}
- (void)addCustomizationCellInSection:(id)arg1;
- (void)makeCustomizationCell:(id)arg1 cellInfo:(id)arg2;
- (void)doAsyncCustomizationRecoverWithHandler:(id /* block */)arg1;
- (void)askForConfirmWithContent:(id)arg1 selector:(SEL)arg2;
- (void)addCustomizationMessageTimeErrorCellInSection:(id)arg1;
- (void)selectFixMessageTimeErrorCell:(id)arg1;
- (void)doFixMessageTimeError;
- (BOOL)handleMessageCustomizeRecover;
- (id)init;
- (void)dealloc;
- (void)onEnterBackground;
- (void)markAsSelected:(id)arg1;
- (void)markAsUnselected;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)popBack;
- (void)adjustTableViewRect;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)selectCell:(id)arg1;
- (void)askForConfirm;
- (void)updateProgress:(double)arg1;
- (BOOL)doRecover;
- (void)didRecover:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)doAsyncRecover;
- (void).cxx_destruct;
@end


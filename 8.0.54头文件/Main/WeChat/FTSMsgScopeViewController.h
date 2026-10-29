@interface FTSMsgScopeViewController : FTSBaseViewController <UITextFieldDelegate, FTSResultPage>
{
    FTSMsgScopeView * _msgScopeView; // +0x68
    id <FTSMsgScopeViewControllerDelegate> _delegate; // +0x70
}
- (void)viewDidLoad;
- (void)onNavigationCancelItemClick;
- (void)reloadList;
- (id)searchBarText;
- (id)searchTextField;
- (void)resignSearchFirstResponder;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onTextFieldChanged:(id)arg1;
- (BOOL)searchBarHasTagInfo;
- (id)msgScopeView;
- (void)setMsgScopeView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


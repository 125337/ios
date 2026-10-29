@interface WNContentSearchBar : UIView <UITextFieldDelegate>
{
    MMUITextField * m_searchField; // +0x8
    MMUILabel * m_resultLable; // +0x10
    MMUIButton * m_cancelBtn; // +0x18
    MMUIButton * m_preResultBtn; // +0x20
    MMUIButton * m_nextResultBtn; // +0x28
    unsigned long long m_atIndex; // +0x30
    unsigned long long m_totalCount; // +0x38
    id <WNContentSearchBarDelegate> _delegate; // +0x40
    id <WNContentSearchBaroperationDelegate> _operationDelegate; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)updateResultLableAt:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)clearResultLable;
- (void)onCancel:(id)arg1;
- (void)onClickPreKeyBtn:(id)arg1;
- (void)onClickNextKeyBtn:(id)arg1;
- (void)searchFieldBecomFirstResponder;
- (void)searchFieldResignFirstResponder;
- (void)realDoSearchWith:(id)arg1;
- (void)tryToSearchWith:(id)arg1 immediately:(BOOL)arg2;
- (void)cancelSearch;
- (void)changeWidth:(double)arg1 with:(double)arg2;
- (void)setFrame:(CGRect)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (void).cxx_destruct;
@end


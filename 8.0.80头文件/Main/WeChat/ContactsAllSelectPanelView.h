@interface ContactsAllSelectPanelView : WCBottomBar
{
    BOOL _isSelectAll; // +0x8
    id <ContactsAllSelectPanelViewDelegate> _m_delegate; // +0x10
    MMBottomBarButton * _selectAllButton; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)initViewWithFrame:(CGRect)arg1;
- (void)updatePanelView:(BOOL)arg1;
- (id)getSelectAllButtonTitle:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg1;
- (BOOL)isSelectAll;
- (void)setIsSelectAll:(BOOL)arg1;
- (void).cxx_destruct;
@end

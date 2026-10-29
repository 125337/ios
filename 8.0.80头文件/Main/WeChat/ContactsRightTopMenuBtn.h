@interface ContactsRightTopMenuBtn : UIView
{
    MMBarButton * _searchButton; // +0x8
    MMBarButton * _addContactButton; // +0x10
    id <ContactsRightTopMenuBtnDelegate> _delegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setupButtons;
- (void)onSearchButtonTapped;
- (void)onAddContactButtonTapped;
- (void)setSearchBtnAlpha:(double)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)searchButton;
- (void)setSearchButton:(id)arg1;
- (id)addContactButton;
- (void)setAddContactButton:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

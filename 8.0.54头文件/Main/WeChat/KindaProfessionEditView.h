@interface KindaProfessionEditView : KindaView <UITextFieldDelegate, WCPayGetProfessionViewControllerDelegate, MMKProfessionEditView>
{
    NSArray * professions; // +0xa8
    WCPayProfession * _profession; // +0xb0
    WCPayGetProfessionItem * item; // +0xb8
    UITextField * m_view; // +0xc0
    NSMutableArray * m_profession_list; // +0xc8
    MMKProfessionEditViewOnSelectProfessionCallback * m_callback; // +0xd0
}
- (id)init;
- (id)getView;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)getProfessionViewController:(id)arg1 didSelectedProfession:(id)arg2;
- (id)getProfessionName;
- (int)getProfessionType;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setData:(id)arg1;
- (void)setOnSelectProfessionCallback:(id)arg1;
- (void)setDefaultProfession:(int)arg1 name:(id)arg2;
- (void).cxx_destruct;
@end


@interface WCPayGetProfessionItem : WCBaseInfoItem <WCPayGetProfessionViewControllerDelegate>
{
    id <WCPayGetProfessionItemDelegate> _delegate; // +0x40
    NSArray * _professions; // +0x48
    UILabel * _professionLabel; // +0x50
    WCPayProfession * _profession; // +0x58
}
- (void)updateProfession:(id)arg1;
- (void)initView:(CGRect)arg1;
- (void)becomeFirstResponder;
- (id)getValue;
- (void)getProfessionViewController:(id)arg1 didSelectedProfession:(id)arg2;
- (id)professionString;
- (id)professionLabel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)professions;
- (void)setProfessions:(id)arg1;
- (void)setProfessionLabel:(id)arg1;
- (id)profession;
- (void)setProfession:(id)arg1;
- (void).cxx_destruct;
@end

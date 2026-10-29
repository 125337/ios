@interface ContactAddDescriptionViewController : NewRemarkViewController <ILinkEventExt>
{
    BOOL _hasFilledDescription; // +0xd0
    BOOL _descSelectorIconExpo; // +0xd1
    BOOL _descSelectorIconClick; // +0xd2
    BOOL _descSelectorIconUsed; // +0xd3
    NSString * _helloMsg; // +0xd8
    id /* block */ _resultBlock; // +0xe0
}
- (void)viewDidLoad;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (id)getTableHeaderView;
- (long long)getNumberSections;
- (unsigned int)getSectionType:(long long)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)needSlideTextDescriptionBtn;
- (id)makeSlideTextDescriptionBtnView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (void)showSelectRemarkHalfScreen;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)helloMsg;
- (void)setHelloMsg:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (BOOL)hasFilledDescription;
- (void)setHasFilledDescription:(BOOL)arg1;
- (BOOL)descSelectorIconExpo;
- (void)setDescSelectorIconExpo:(BOOL)arg1;
- (BOOL)descSelectorIconClick;
- (void)setDescSelectorIconClick:(BOOL)arg1;
- (BOOL)descSelectorIconUsed;
- (void)setDescSelectorIconUsed:(BOOL)arg1;
- (void).cxx_destruct;
@end


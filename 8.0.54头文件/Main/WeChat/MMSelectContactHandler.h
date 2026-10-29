@interface MMSelectContactHandler : PrivateCommonApiHandler <SelectContactsViewControllerDelegate>
- (void)handleCommonApiWithParams:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (void)onSelectContactCancel;
- (BOOL)onFilterContactCandidate:(id)arg1;
@end


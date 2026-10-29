@interface WAAppAuthorizationDetailViewModel : MMObject
{
    unsigned int _choosenState; // +0x8
    NSString * _titleString; // +0x10
    NSString * _authorizationDetailString; // +0x18
    NSMutableArray * _optionItems; // +0x20
}
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (id)authorizationDetailString;
- (void)setAuthorizationDetailString:(id)arg1;
- (id)optionItems;
- (void)setOptionItems:(id)arg1;
- (unsigned int)choosenState;
- (void)setChoosenState:(unsigned int)arg1;
- (void).cxx_destruct;
@end


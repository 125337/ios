@interface WASMTPageSheetViewModel : WAAuthPageSheetViewModel
{
    NSString * _title; // +0x8
    long long _backButtonType; // +0x10
    NSArray * _templeteMessageList; // +0x18
}
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)backButtonType;
- (void)setBackButtonType:(long long)arg1;
- (id)templeteMessageList;
- (void)setTempleteMessageList:(id)arg1;
- (void).cxx_destruct;
@end


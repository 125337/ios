@interface MMMultiSelectContactsItemView : MMUIView
{
    BOOL _isAllowMultiSelect; // +0x8
    CContact * _contact; // +0x10
    UIImageView * _checkMarkImgView; // +0x18
    ContactsItemView * _contactItemView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 andContact:(id)arg2 andIsAllowMultiSelect:(BOOL)arg3;
- (void)initView;
- (void)updateItemView:(id)arg1 andContactState:(unsigned long long)arg2;
- (id)getCheckMarkImageWithContactState:(unsigned long long)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isAllowMultiSelect;
- (void)setIsAllowMultiSelect:(BOOL)arg1;
- (id)checkMarkImgView;
- (void)setCheckMarkImgView:(id)arg1;
- (id)contactItemView;
- (void)setContactItemView:(id)arg1;
- (void).cxx_destruct;
@end

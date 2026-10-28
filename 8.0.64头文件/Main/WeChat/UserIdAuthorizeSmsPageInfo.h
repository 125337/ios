@interface UserIdAuthorizeSmsPageInfo : MMObject
{
    NSString * _title; // +0x8
    NSString * _desc; // +0x10
    NSMutableArray * _phoneList; // +0x18
    NSString * _appid; // +0x20
    NSMutableArray * _categoryId; // +0x28
    NSString * _payToken; // +0x30
    NSString * _ticket; // +0x38
    NSString * _mobile; // +0x40
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)phoneList;
- (void)setPhoneList:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)categoryId;
- (void)setCategoryId:(id)arg1;
- (id)payToken;
- (void)setPayToken:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)mobile;
- (void)setMobile:(id)arg1;
- (void).cxx_destruct;
@end

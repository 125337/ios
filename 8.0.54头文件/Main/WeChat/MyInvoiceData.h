@interface MyInvoiceData : NSObject
{
    long long group_id; // +0x8
    NSString * title_type; // +0x10
    NSString * title; // +0x18
    NSString * tax_number; // +0x20
    NSString * address; // +0x28
    NSString * phone; // +0x30
    NSString * bank_name; // +0x38
    NSString * bank_number; // +0x40
    NSString * email; // +0x48
    NSString * invoice_url; // +0x50
}
+ (BOOL)GetIsHaveInvoiceInfoFromJson:(id)arg1;
+ (id)GetInvoiceArrFromJson:(id)arg1;
+ (id)GenJsonFromInvoiceData:(id)arg1 andUin:(unsigned long long)arg2;
+ (id)GenJsonForSelectedInvoiceData:(id)arg1;
- (id)clone;
- (id)NilOrStringOf:(id)arg1;
- (long long)group_id;
- (void)setGroup_id:(long long)arg1;
- (id)title_type;
- (void)setTitle_type:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)tax_number;
- (void)setTax_number:(id)arg1;
- (id)address;
- (void)setAddress:(id)arg1;
- (id)phone;
- (void)setPhone:(id)arg1;
- (id)bank_name;
- (void)setBank_name:(id)arg1;
- (id)bank_number;
- (void)setBank_number:(id)arg1;
- (id)email;
- (void)setEmail:(id)arg1;
- (id)invoice_url;
- (void)setInvoice_url:(id)arg1;
- (void).cxx_destruct;
@end


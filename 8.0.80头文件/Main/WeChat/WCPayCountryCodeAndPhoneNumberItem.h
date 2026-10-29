@interface WCPayCountryCodeAndPhoneNumberItem : WCBaseInfoItem <WCBaseInfoItemDelegate>
{
    BOOL _bIsAutoFill; // +0x40
    WCPayControlData * _data; // +0x48
    id <WCPayCountryCodeAndPhoneNumberItemDelegate> _delegate; // +0x50
    WCPayPhoneTextItem * _phoneTextItem; // +0x58
    WCPayPhoneTextItem * _countryCodeTextItem; // +0x60
    UILabel * _plusLabel; // +0x68
    UIView * _separator; // +0x70
}
- (void)setCountryCode:(id)arg1;
- (void)setCountryCodeItemIsValid:(BOOL)arg1;
- (void)initView:(CGRect)arg1;
- (id)getValue;
- (void)showDetailTip;
- (void)resignFirstResponder;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (id)countryCodeTextItem;
- (id)phoneTextItem;
- (id)plusLabel;
- (id)separator;
- (id)data;
- (void)setData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPhoneTextItem:(id)arg1;
- (void)setCountryCodeTextItem:(id)arg1;
- (void)setPlusLabel:(id)arg1;
- (void)setSeparator:(id)arg1;
- (BOOL)bIsAutoFill;
- (void)setBIsAutoFill:(BOOL)arg1;
- (void).cxx_destruct;
@end

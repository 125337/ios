@interface WCPayBankCardFavorInfo : NSObject
{
    NSArray * _bind_serial_favor_info_list; // +0x8
    WCPayNewBindCardFavorInfo * _wcpay_new_bind_card_info; // +0x10
}
- (id)bind_serial_favor_info_list;
- (void)setBind_serial_favor_info_list:(id)arg1;
- (id)wcpay_new_bind_card_info;
- (void)setWcpay_new_bind_card_info:(id)arg1;
- (void).cxx_destruct;
@end

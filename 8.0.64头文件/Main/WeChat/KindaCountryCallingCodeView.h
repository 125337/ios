@interface KindaCountryCallingCodeView : KindaView <WCPayCountryCodeItemDelegate, MMKCountryCallingCodeView>
{
    UITextField * m_textField; // +0xa8
    MMKCountryCallingCodeViewOnSelectCallback * m_callback; // +0xb0
    WCPayCountryCodeItem * _m_countryCodeItem; // +0xb8
}
- (id)init;
- (id)getView;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (void)setCountryCode:(id)arg1;
- (id)getCountryCode;
- (void)countryCodeItem:(id)arg1 didSelectCountryCode:(id)arg2;
- (void)countryCodeItem:(id)arg1 isCountryCodeValid:(BOOL)arg2;
- (void)setOnSelectCallback:(id)arg1;
- (id)getNationality;
- (void)setNationality:(id)arg1;
- (void)setNationalityExcludeArray:(id)arg1;
- (BOOL)getHideCode;
- (void)setHideCode:(BOOL)arg1;
- (void)setPlaceHolder:(id)arg1;
- (id)getPlaceHolder;
- (id)m_countryCodeItem;
- (void)setM_countryCodeItem:(id)arg1;
- (void).cxx_destruct;
@end

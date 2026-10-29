@interface KindaRegionEditView : KindaView <UITextFieldDelegate, WCPayRegionPickerViewControllerDelegate, MMKRegionEditView>
{
    UITextField * m_view; // +0xa8
    NSString * m_country; // +0xb0
    NSString * m_province; // +0xb8
    NSString * m_city; // +0xc0
    MMKRegionEditViewOnRegionSelectedCallback * m_callback; // +0xc8
    BOOL _m_showDomesticCity; // +0xd0
    BOOL _m_showSelectedLocation; // +0xd1
    BOOL _m_autoLocation; // +0xd2
    NSArray * _areaExcudeArray; // +0xd8
}
- (id)init;
- (id)getView;
- (void)setShowDomesticCity:(BOOL)arg1;
- (BOOL)getShowDomesticCity;
- (void)setShowSelectedLocation:(BOOL)arg1;
- (BOOL)getShowSelectedLocation;
- (void)setAutoLocation:(BOOL)arg1;
- (BOOL)getAutoLocation;
- (void)setFocus:(BOOL)arg1;
- (BOOL)getFocus;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (id)getAllCountries;
- (BOOL)bannedCode:(id)arg1;
- (void)picker:(id)arg1 didPick:(id)arg2;
- (id)getCountry;
- (id)getProvince;
- (id)getCity;
- (BOOL)isUSOrCA;
- (void)setOnRegionSelectedCallback:(id)arg1;
- (void)setOriginRegion:(id)arg1 province:(id)arg2 city:(id)arg3 areaStr:(id)arg4;
- (void)setAreaExcludeArray:(id)arg1;
- (BOOL)getSupportDynamicSize;
- (BOOL)m_showDomesticCity;
- (void)setM_showDomesticCity:(BOOL)arg1;
- (BOOL)m_showSelectedLocation;
- (void)setM_showSelectedLocation:(BOOL)arg1;
- (BOOL)m_autoLocation;
- (void)setM_autoLocation:(BOOL)arg1;
- (id)areaExcudeArray;
- (void)setAreaExcudeArray:(id)arg1;
- (void).cxx_destruct;
@end


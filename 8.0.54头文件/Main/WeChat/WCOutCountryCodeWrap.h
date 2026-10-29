@interface WCOutCountryCodeWrap : NSObject
{
    unsigned int _m_uiCountryNamesChineseStrokesCount; // +0x8
    NSString * _m_nsCountryName; // +0x10
    NSString * _m_nsCountryNamePinYin; // +0x18
    NSString * _m_nsCountryCode; // +0x20
    NSString * _m_nsISOCountryCodes; // +0x28
}
- (id)description;
- (long long)compare:(id)arg1;
- (id)m_nsCountryName;
- (void)setM_nsCountryName:(id)arg1;
- (id)m_nsCountryNamePinYin;
- (void)setM_nsCountryNamePinYin:(id)arg1;
- (id)m_nsCountryCode;
- (void)setM_nsCountryCode:(id)arg1;
- (id)m_nsISOCountryCodes;
- (void)setM_nsISOCountryCodes:(id)arg1;
- (unsigned int)m_uiCountryNamesChineseStrokesCount;
- (void)setM_uiCountryNamesChineseStrokesCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end


@interface WCPayDigitalCertObject : NSObject
{
    int _m_isCurDevice; // +0x8
    NSString * _m_deviceName; // +0x10
    NSString * _m_deviceOs; // +0x18
    NSString * _m_crtNo; // +0x20
}
+ (id)GenFromDictionary:(id)arg1;
- (id)m_deviceName;
- (void)setM_deviceName:(id)arg1;
- (id)m_deviceOs;
- (void)setM_deviceOs:(id)arg1;
- (int)m_isCurDevice;
- (void)setM_isCurDevice:(int)arg1;
- (id)m_crtNo;
- (void)setM_crtNo:(id)arg1;
- (void).cxx_destruct;
@end

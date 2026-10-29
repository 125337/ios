@interface WCPayBeforePayInfo : NSObject
{
    long long m_notifyFlag; // +0x8
    NSString * m_notifyWording; // +0x10
    NSString * m_leftButtonWording; // +0x18
    NSString * m_rightButtonWording; // +0x20
    NSString * m_confirmButtonWording; // +0x28
}
+ (id)fromDictionary:(id)arg1;
- (void)checkValueOrFillWithDefault;
- (long long)m_notifyFlag;
- (void)setM_notifyFlag:(long long)arg1;
- (id)m_notifyWording;
- (void)setM_notifyWording:(id)arg1;
- (id)m_leftButtonWording;
- (void)setM_leftButtonWording:(id)arg1;
- (id)m_rightButtonWording;
- (void)setM_rightButtonWording:(id)arg1;
- (id)m_confirmButtonWording;
- (void)setM_confirmButtonWording:(id)arg1;
- (void).cxx_destruct;
@end

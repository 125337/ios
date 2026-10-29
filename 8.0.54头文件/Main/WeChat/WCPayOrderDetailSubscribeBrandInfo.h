@interface WCPayOrderDetailSubscribeBrandInfo : NSObject
{
    NSString * m_nsHeadUrl; // +0x8
    NSString * m_nsSubscribeDesc; // +0x10
    NSString * m_nsSubscribeUrl; // +0x18
    NSString * m_nsUserName; // +0x20
    int m_enWCPayServiceSubscribeStrategy; // +0x28
}
- (id)m_nsHeadUrl;
- (void)setM_nsHeadUrl:(id)arg1;
- (id)m_nsSubscribeDesc;
- (void)setM_nsSubscribeDesc:(id)arg1;
- (id)m_nsSubscribeUrl;
- (void)setM_nsSubscribeUrl:(id)arg1;
- (id)m_nsUserName;
- (void)setM_nsUserName:(id)arg1;
- (int)m_enWCPayServiceSubscribeStrategy;
- (void)setM_enWCPayServiceSubscribeStrategy:(int)arg1;
- (void).cxx_destruct;
@end


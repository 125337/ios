@interface WCPayOfflinePayConfirmMessageStruct : NSObject
{
    NSString * m_nsMessageUid; // +0x8
    NSString * m_nsProductName; // +0x10
    NSString * m_nsProductMoney; // +0x18
    NSString * m_nsProductOriginalMoney; // +0x20
    unsigned char _routeInfo; // +0x28
    unsigned long long _m_confirmType; // +0x30
}
- (id)m_nsMessageUid;
- (void)setM_nsMessageUid:(id)arg1;
- (id)m_nsProductMoney;
- (void)setM_nsProductMoney:(id)arg1;
- (id)m_nsProductName;
- (void)setM_nsProductName:(id)arg1;
- (id)m_nsProductOriginalMoney;
- (void)setM_nsProductOriginalMoney:(id)arg1;
- (unsigned long long)m_confirmType;
- (void)setM_confirmType:(unsigned long long)arg1;
- (unsigned char)routeInfo;
- (void)setRouteInfo:(unsigned char)arg1;
- (void).cxx_destruct;
@end


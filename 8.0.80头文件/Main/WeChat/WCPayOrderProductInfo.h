@interface WCPayOrderProductInfo : NSObject
{
    NSString * m_nsProductId; // +0x8
    NSString * m_nsProductName; // +0x10
    NSString * m_nsProductImage; // +0x18
    unsigned int m_uiProductCount; // +0x20
    NSString * m_nsProductMoney; // +0x28
    NSArray * m_arrSKUInfo; // +0x30
    NSString * m_nsJumpUrl; // +0x38
    unsigned int m_uiJumpType; // +0x40
}
- (id)m_arrSKUInfo;
- (void)setM_arrSKUInfo:(id)arg1;
- (id)m_nsProductMoney;
- (void)setM_nsProductMoney:(id)arg1;
- (id)m_nsProductId;
- (void)setM_nsProductId:(id)arg1;
- (id)m_nsProductImage;
- (void)setM_nsProductImage:(id)arg1;
- (id)m_nsProductName;
- (void)setM_nsProductName:(id)arg1;
- (unsigned int)m_uiProductCount;
- (void)setM_uiProductCount:(unsigned int)arg1;
- (unsigned int)m_uiJumpType;
- (void)setM_uiJumpType:(unsigned int)arg1;
- (id)m_nsJumpUrl;
- (void)setM_nsJumpUrl:(id)arg1;
- (void).cxx_destruct;
@end

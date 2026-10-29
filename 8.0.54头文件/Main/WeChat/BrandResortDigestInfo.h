@interface BrandResortDigestInfo : NSObject <NSCopying>
{
    BOOL _m_bIsBrandResortNewDigestBold; // +0x8
    unsigned int _m_brandResortNewDigestExposeCountInMainSession; // +0xc
    unsigned int _m_brandResortNewBoldDigestExposeCountInMainSession; // +0x10
    NSString * _m_brandResortNewDigestJson; // +0x18
    NSString * _m_brandResortNewDigestStrategyInfo; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)m_bIsBrandResortNewDigestBold;
- (void)setM_bIsBrandResortNewDigestBold:(BOOL)arg1;
- (id)m_brandResortNewDigestJson;
- (void)setM_brandResortNewDigestJson:(id)arg1;
- (id)m_brandResortNewDigestStrategyInfo;
- (void)setM_brandResortNewDigestStrategyInfo:(id)arg1;
- (unsigned int)m_brandResortNewDigestExposeCountInMainSession;
- (void)setM_brandResortNewDigestExposeCountInMainSession:(unsigned int)arg1;
- (unsigned int)m_brandResortNewBoldDigestExposeCountInMainSession;
- (void)setM_brandResortNewBoldDigestExposeCountInMainSession:(unsigned int)arg1;
- (void).cxx_destruct;
@end


@interface WCPayBannerNotice : NSObject <NSCoding, NSCopying>
{
    unsigned int _m_readOnly; // +0x8
    NSString * _m_detailUrl; // +0x10
    NSString * _m_wording; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)m_detailUrl;
- (void)setM_detailUrl:(id)arg1;
- (id)m_wording;
- (void)setM_wording:(id)arg1;
- (unsigned int)m_readOnly;
- (void)setM_readOnly:(unsigned int)arg1;
- (void).cxx_destruct;
@end

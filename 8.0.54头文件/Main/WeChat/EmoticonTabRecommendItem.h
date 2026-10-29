@interface EmoticonTabRecommendItem : NSObject <PBCoding>
{
    unsigned int _m_buttonType; // +0x8
    NSString * _m_productId; // +0x10
    NSString * _m_iconUrl; // +0x18
    NSString * _m_bigIconUrl; // +0x20
    NSString * _m_recType; // +0x28
    NSString * _m_name; // +0x30
    NSString * _m_recWord; // +0x38
}
+ (void)PBArrayAdd_m_name;
+ (void)PBArrayAdd_m_productId;
+ (void)PBArrayAdd_m_iconUrl;
+ (void)PBArrayAdd_m_bigIconUrl;
+ (void)PBArrayAdd_m_recType;
+ (void)PBArrayAdd_m_recWord;
+ (void)PBArrayAdd_m_buttonType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateFromItem:(id)arg1;
- (id)description;
- (id)m_productId;
- (void)setM_productId:(id)arg1;
- (id)m_iconUrl;
- (void)setM_iconUrl:(id)arg1;
- (id)m_bigIconUrl;
- (void)setM_bigIconUrl:(id)arg1;
- (id)m_recType;
- (void)setM_recType:(id)arg1;
- (id)m_name;
- (void)setM_name:(id)arg1;
- (id)m_recWord;
- (void)setM_recWord:(id)arg1;
- (unsigned int)m_buttonType;
- (void)setM_buttonType:(unsigned int)arg1;
- (void).cxx_destruct;
@end


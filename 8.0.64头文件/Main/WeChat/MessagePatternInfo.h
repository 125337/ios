@interface MessagePatternInfo : NSObject <PBCoding, NSCoding>
{
    unsigned int _m_uiLocalID; // +0x8
    NSString * _m_nsPattern; // +0x10
}
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_nsPattern;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned int)m_uiLocalID;
- (void)setM_uiLocalID:(unsigned int)arg1;
- (id)m_nsPattern;
- (void)setM_nsPattern:(id)arg1;
- (void).cxx_destruct;
@end

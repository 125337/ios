@interface MMCostValueIdKey : NSObject
{
    unsigned long long m_uID; // +0x8
    unsigned long long m_uTotalCostValueKey; // +0x10
    unsigned long long m_uTotalCountKey; // +0x18
    NSString * m_nsDes; // +0x20
}
+ (id)constructOneItemWithId:(unsigned long long)arg1 withTotalCostValueKey:(unsigned long long)arg2 withTotalCountKey:(unsigned long long)arg3 withDes:(id)arg4;
- (id)init;
- (unsigned long long)m_uID;
- (void)setM_uID:(unsigned long long)arg1;
- (unsigned long long)m_uTotalCostValueKey;
- (void)setM_uTotalCostValueKey:(unsigned long long)arg1;
- (unsigned long long)m_uTotalCountKey;
- (void)setM_uTotalCountKey:(unsigned long long)arg1;
- (id)m_nsDes;
- (void)setM_nsDes:(id)arg1;
- (void).cxx_destruct;
@end


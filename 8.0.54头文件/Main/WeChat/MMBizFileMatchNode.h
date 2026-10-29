@interface MMBizFileMatchNode : NSObject <NSCopying>
{
    int m_fileTypeInUse; // +0x8
    int m_wechatFileClass; // +0xc
    unsigned long long m_matchType; // +0x10
    NSString * m_text; // +0x18
    NSMutableArray * m_arrBizMatchNode; // +0x20
    long long m_bizType; // +0x28
    NSDictionary * m_dicTextBizMatchNode; // +0x30
    NSMutableArray * m_arrRegexBizMatchNode; // +0x38
    long long m_pathPrefixType; // +0x40
    long long m_storeTimeType; // +0x48
}
+ (id)nodeWithText:(id)arg1;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isMarkBizFileNode;
- (BOOL)isBizRuleConflictWith:(id)arg1;
- (BOOL)isMatchWithName:(id)arg1;
- (id)description;
- (void)sortBizMatchNode;
- (unsigned long long)m_matchType;
- (void)setM_matchType:(unsigned long long)arg1;
- (id)m_text;
- (void)setM_text:(id)arg1;
- (id)m_arrBizMatchNode;
- (void)setM_arrBizMatchNode:(id)arg1;
- (long long)m_bizType;
- (void)setM_bizType:(long long)arg1;
- (int)m_fileTypeInUse;
- (void)setM_fileTypeInUse:(int)arg1;
- (int)m_wechatFileClass;
- (void)setM_wechatFileClass:(int)arg1;
- (id)m_dicTextBizMatchNode;
- (void)setM_dicTextBizMatchNode:(id)arg1;
- (id)m_arrRegexBizMatchNode;
- (void)setM_arrRegexBizMatchNode:(id)arg1;
- (long long)m_pathPrefixType;
- (void)setM_pathPrefixType:(long long)arg1;
- (long long)m_storeTimeType;
- (void)setM_storeTimeType:(long long)arg1;
- (void).cxx_destruct;
@end


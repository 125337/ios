@interface IntelligentMsgImgResultItem : MMObject
{
    unsigned int _m_searchType; // +0x8
    NSString * _m_labelName; // +0x10
}
- (id)initWithLabelName:(id)arg1 searchType:(unsigned int)arg2;
- (id)m_labelName;
- (void)setM_labelName:(id)arg1;
- (unsigned int)m_searchType;
- (void)setM_searchType:(unsigned int)arg1;
- (void).cxx_destruct;
@end


@interface IntelligentMsgImgResultButton : MMUIButton
{
    BOOL m_isChosen; // +0x8
    unsigned int _m_searchType; // +0xc
    NSString * _m_labelName; // +0x10
}
- (id)init;
- (unsigned long long)accessibilityTraits;
- (BOOL)m_isChosen;
- (void)setM_isChosen:(BOOL)arg1;
- (id)m_labelName;
- (void)setM_labelName:(id)arg1;
- (unsigned int)m_searchType;
- (void)setM_searchType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

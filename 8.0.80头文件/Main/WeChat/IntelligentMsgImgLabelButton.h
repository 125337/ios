@interface IntelligentMsgImgLabelButton : MMUIButton
{
    BOOL m_isChosen; // +0x8
    NSString * _m_labelName; // +0x10
}
- (id)init;
- (unsigned long long)accessibilityTraits;
- (BOOL)m_isChosen;
- (void)setM_isChosen:(BOOL)arg1;
- (id)m_labelName;
- (void)setM_labelName:(id)arg1;
- (void).cxx_destruct;
@end

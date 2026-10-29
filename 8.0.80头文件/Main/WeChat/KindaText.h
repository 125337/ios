@interface KindaText : NSObject <MMKText>
{
    BOOL _m_baselineAlign; // +0x8
    NSMutableArray * _m_textArray; // +0x10
}
- (id)init;
- (id)textArray;
- (void)appendText:(id)arg1;
- (void)appendLink:(id)arg1;
- (void)setBaselineAlign:(BOOL)arg1;
- (BOOL)getBaselineAlign;
- (id)m_textArray;
- (void)setM_textArray:(id)arg1;
- (BOOL)m_baselineAlign;
- (void)setM_baselineAlign:(BOOL)arg1;
- (void).cxx_destruct;
@end

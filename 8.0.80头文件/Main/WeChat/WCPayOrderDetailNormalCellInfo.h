@interface WCPayOrderDetailNormalCellInfo : NSObject
{
    NSString * m_nsKey; // +0x8
    NSString * m_nsValue; // +0x10
    NSString * m_nsJumpedUrl; // +0x18
    unsigned int m_uiJumpedType; // +0x20
    BOOL m_bIsSegmentationCell; // +0x24
}
- (BOOL)m_bIsSegmentationCell;
- (void)setM_bIsSegmentationCell:(BOOL)arg1;
- (id)m_nsJumpedUrl;
- (void)setM_nsJumpedUrl:(id)arg1;
- (id)m_nsKey;
- (void)setM_nsKey:(id)arg1;
- (id)m_nsValue;
- (void)setM_nsValue:(id)arg1;
- (unsigned int)m_uiJumpedType;
- (void)setM_uiJumpedType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

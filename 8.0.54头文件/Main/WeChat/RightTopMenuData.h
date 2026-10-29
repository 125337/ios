@interface RightTopMenuData : MMObject <NSCoding>
{
    BOOL m_bShowNew; // +0x8
    NSMutableArray * m_arrShowIDs; // +0x10
    NSMutableDictionary * m_dicItemArchives; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)updateFromOld;
- (BOOL)updateConfig:(id)arg1;
- (BOOL)clickMenu:(id)arg1;
- (BOOL)m_bShowNew;
- (void)setM_bShowNew:(BOOL)arg1;
- (id)m_arrShowIDs;
- (void)setM_arrShowIDs:(id)arg1;
- (id)m_dicItemArchives;
- (void)setM_dicItemArchives:(id)arg1;
- (void).cxx_destruct;
@end


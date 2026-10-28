@interface SpecicalCellInfo : MMObject
{
    unsigned long long m_cellType; // +0x8
    CContact * m_Contact; // +0x10
}
- (unsigned long long)m_cellType;
- (void)setM_cellType:(unsigned long long)arg1;
- (id)m_Contact;
- (void)setM_Contact:(id)arg1;
- (void).cxx_destruct;
@end

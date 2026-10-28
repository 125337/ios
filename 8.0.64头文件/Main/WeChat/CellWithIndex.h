@interface CellWithIndex : NSObject
{
    UITableViewCell * m_cell; // +0x8
    long long m_index; // +0x10
}
- (id)initWithCell:(id)arg1 andIndex:(long long)arg2;
- (id)m_cell;
- (void)setM_cell:(id)arg1;
- (long long)m_index;
- (void)setM_index:(long long)arg1;
- (void).cxx_destruct;
@end

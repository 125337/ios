@interface SolitairDeleteExistReport : SolitaireReport
{
    unsigned long long _deleteType; // +0x30
}
- (void)report;
- (unsigned long long)deleteType;
- (void)setDeleteType:(unsigned long long)arg1;
@end


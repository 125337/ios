@interface SolitaireTipsShowReport : SolitaireReport
{
    unsigned long long _operateType; // +0x30
}
- (void)report;
- (unsigned long long)operateType;
- (void)setOperateType:(unsigned long long)arg1;
@end


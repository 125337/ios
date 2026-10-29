@interface SolitaireCommonClickReport : SolitaireReport
{
    unsigned long long _clickType; // +0x30
    unsigned long long _expandType; // +0x38
}
- (void)report;
- (unsigned long long)clickType;
- (void)setClickType:(unsigned long long)arg1;
- (unsigned long long)expandType;
- (void)setExpandType:(unsigned long long)arg1;
@end

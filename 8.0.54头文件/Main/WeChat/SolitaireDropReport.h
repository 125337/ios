@interface SolitaireDropReport : SolitaireReport
{
    unsigned long long _reason; // +0x30
}
- (void)report;
- (unsigned long long)reason;
- (void)setReason:(unsigned long long)arg1;
@end


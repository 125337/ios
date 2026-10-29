@interface SolitaireClickReport : SolitaireReport
{
    unsigned long long _sourceType; // +0x30
    unsigned long long _clickType; // +0x38
}
- (void)report;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (unsigned long long)clickType;
- (void)setClickType:(unsigned long long)arg1;
@end


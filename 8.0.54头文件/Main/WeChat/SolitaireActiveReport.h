@interface SolitaireActiveReport : SolitaireReport
{
    unsigned long long _headerLength; // +0x30
    unsigned long long _tailLength; // +0x38
    unsigned long long _exampleLength; // +0x40
    unsigned long long _activeScene; // +0x48
}
- (void)report;
- (unsigned long long)headerLength;
- (void)setHeaderLength:(unsigned long long)arg1;
- (unsigned long long)tailLength;
- (void)setTailLength:(unsigned long long)arg1;
- (unsigned long long)exampleLength;
- (void)setExampleLength:(unsigned long long)arg1;
- (unsigned long long)activeScene;
- (void)setActiveScene:(unsigned long long)arg1;
@end


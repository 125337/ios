@interface SolitaireConfig : NSObject
{
    BOOL _isOpenEntry; // +0x8
    BOOL _isOpenAnalysis; // +0x9
    unsigned int _lastupTime; // +0xc
}
- (id)init;
- (BOOL)isOpenEntry;
- (BOOL)isOpenAnalysis;
- (void)setIsOpenEntry:(BOOL)arg1;
- (void)setIsOpenAnalysis:(BOOL)arg1;
- (unsigned int)lastupTime;
- (void)setLastupTime:(unsigned int)arg1;
@end

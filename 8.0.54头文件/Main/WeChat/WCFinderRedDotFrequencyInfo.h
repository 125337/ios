@interface WCFinderRedDotFrequencyInfo : NSObject
{
    BOOL _isNextPunish; // +0x8
    BOOL _isBanAsUseBusiness; // +0x9
    BOOL _isNextCleanPunish; // +0xa
    BOOL _isAbandonRd; // +0xb
    long long _nextPunishM; // +0x10
    long long _punishStage; // +0x18
    long long _accStage; // +0x20
}
- (long long)nextPunishM;
- (void)setNextPunishM:(long long)arg1;
- (BOOL)isNextPunish;
- (void)setIsNextPunish:(BOOL)arg1;
- (BOOL)isBanAsUseBusiness;
- (void)setIsBanAsUseBusiness:(BOOL)arg1;
- (BOOL)isNextCleanPunish;
- (void)setIsNextCleanPunish:(BOOL)arg1;
- (long long)punishStage;
- (void)setPunishStage:(long long)arg1;
- (long long)accStage;
- (void)setAccStage:(long long)arg1;
- (BOOL)isAbandonRd;
- (void)setIsAbandonRd:(BOOL)arg1;
@end


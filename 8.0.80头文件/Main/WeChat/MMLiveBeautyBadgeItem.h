@interface MMLiveBeautyBadgeItem : NSObject
{
    BOOL _exposed; // +0x8
    BOOL _expired; // +0x9
    NSString * _badgeId; // +0x10
    unsigned long long _baselineVersion; // +0x18
    unsigned long long _currentVersion; // +0x20
    NSString * _currentGroup; // +0x28
    long long _expiresAfterSeconds; // +0x30
    unsigned long long _lastVersion; // +0x38
    NSString * _lastGroup; // +0x40
    NSString * _categorizedId; // +0x48
}
+ (id)badgeItemInJsonDictionary:(id)arg1 categoryKey:(id)arg2;
- (BOOL)active;
- (void)markExposure;
- (void)synchronizeAndNotifyDismiss;
- (void)addEventSubscriber:(id)arg1;
- (void)removeEventSubscriber:(id)arg1;
- (id)badgeId;
- (void)setBadgeId:(id)arg1;
- (unsigned long long)baselineVersion;
- (void)setBaselineVersion:(unsigned long long)arg1;
- (unsigned long long)currentVersion;
- (void)setCurrentVersion:(unsigned long long)arg1;
- (id)currentGroup;
- (void)setCurrentGroup:(id)arg1;
- (long long)expiresAfterSeconds;
- (void)setExpiresAfterSeconds:(long long)arg1;
- (unsigned long long)lastVersion;
- (void)setLastVersion:(unsigned long long)arg1;
- (id)lastGroup;
- (void)setLastGroup:(id)arg1;
- (BOOL)exposed;
- (void)setExposed:(BOOL)arg1;
- (BOOL)expired;
- (void)setExpired:(BOOL)arg1;
- (id)categorizedId;
- (void)setCategorizedId:(id)arg1;
- (void).cxx_destruct;
@end

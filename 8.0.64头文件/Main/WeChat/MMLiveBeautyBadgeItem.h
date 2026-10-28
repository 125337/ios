@interface MMLiveBeautyBadgeItem : NSObject
{
    NSString * _badgeId; // +0x8
    unsigned long long _baselineVersion; // +0x10
    unsigned long long _currentVersion; // +0x18
    NSString * _currentGroup; // +0x20
    unsigned long long _lastVersion; // +0x28
    NSString * _lastGroup; // +0x30
    NSString * _categorizedId; // +0x38
}
+ (id)badgeItemInJsonDictionary:(id)arg1 categoryKey:(id)arg2;
- (BOOL)active;
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
- (unsigned long long)lastVersion;
- (void)setLastVersion:(unsigned long long)arg1;
- (id)lastGroup;
- (void)setLastGroup:(id)arg1;
- (id)categorizedId;
- (void)setCategorizedId:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCOpLog : NSObject
- (id)init;
- (BOOL)changeStrangerRight:(BOOL)arg1 sync:(BOOL)arg2;
- (BOOL)changeShowRecent:(int)arg1 sync:(BOOL)arg2;
- (unsigned int)getRecentHoursForType:(int)arg1;
- (BOOL)changeSnsPrivacySetting:(long long)arg1 sync:(BOOL)arg2 andRecentHours:(unsigned int)arg3;
- (BOOL)modSnsBlackList:(id)arg1 modType:(long long)arg2 syncNow:(BOOL)arg3;
@end

@interface QBPreferencesManager : NSObject
{
    NSMutableDictionary * _preferencesDic; // +0x8
}
+ (id)shareInstance;
- (id)init;
- (void)loadFromLocalFile;
- (void)resetPreferencesDic:(id)arg1;
- (void)saveTimeStamp:(long long)arg1 contentMd5:(id)arg2;
- (BOOL)isPreferenceSwitcherOn:(id)arg1 nilIsOn:(BOOL)arg2;
- (long long)intValueForPreference:(id)arg1 defaultValue:(long long)arg2;
- (id)stringValueForPreference:(id)arg1 defaultValue:(id)arg2;
- (id)getPreferencesContentMd5;
- (void).cxx_destruct;
- (id)preferencesDic;
- (void)setPreferencesDic:(id)arg1;
@end


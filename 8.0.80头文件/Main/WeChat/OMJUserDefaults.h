@interface OMJUserDefaults : NSObject
+ (id)sharedInstance;
- (id)stringForKey:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
@end

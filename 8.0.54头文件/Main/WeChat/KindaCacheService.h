@interface KindaCacheService : NSObject <MMKCacheService>
- (id)init;
- (void)set:(id)arg1 data:(id)arg2 ttl:(long long)arg3;
- (id)get:(id)arg1;
- (BOOL)remove:(id)arg1;
- (void)setBool:(id)arg1 data:(BOOL)arg2 ttl:(long long)arg3;
- (BOOL)getBool:(id)arg1;
- (long long)getInt64:(id)arg1 defaultValue:(long long)arg2;
- (void)setInt64:(id)arg1 data:(long long)arg2 ttl:(long long)arg3;
- (id)getFilePath:(id)arg1;
@end


@interface FBSDKKeychainStore : NSObject
{
    NSString * _service; // +0x8
    NSString * _accessGroup; // +0x10
}
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;
- (BOOL)setDictionary:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)dictionaryForKey:(id)arg1;
- (BOOL)setString:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)stringForKey:(id)arg1;
- (BOOL)setData:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)dataForKey:(id)arg1;
- (id)queryForKey:(id)arg1;
- (id)service;
- (id)accessGroup;
- (void).cxx_destruct;
@end

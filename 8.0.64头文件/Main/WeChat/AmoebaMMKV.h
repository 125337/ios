@interface AmoebaMMKV : NSObject <AmoebaMMKVProtocol>
{
    NSString * _mapId; // +0x8
}
+ (id)getMMKV:(id)arg1;
+ (id)getUserMMKV:(id)arg1;
- (BOOL)setString:(id)arg1 forKey:(id)arg2;
- (id)getStringForKey:(id)arg1 defaultValue:(id)arg2;
- (BOOL)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)getBoolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (BOOL)setInt64:(long long)arg1 forKey:(id)arg2;
- (long long)getInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (void)removeValueForKey:(id)arg1;
- (id)mapId;
- (void)setMapId:(id)arg1;
- (void).cxx_destruct;
@end

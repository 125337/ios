@interface PublicWifiCache : MMObject
{
    NSMutableDictionary * _notRegisterDict; // +0x8
}
+ (id)getInstance;
- (void)dealloc;
- (id)init;
- (void)userConfirm;
- (BOOL)shouldUserConfirm;
- (void)initDB;
- (void)closeDB;
- (void)cleanCache;
- (BOOL)saveApBase:(id)arg1;
- (id)retrivalApBaseForMac:(id)arg1;
- (BOOL)removeApBase:(id)arg1;
- (id)retrivalApAuthForSsid:(id)arg1;
- (id)notRegisterDict;
- (void)setNotRegisterDict:(id)arg1;
- (void).cxx_destruct;
@end

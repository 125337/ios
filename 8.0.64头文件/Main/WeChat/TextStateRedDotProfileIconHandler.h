@interface TextStateRedDotProfileIconHandler : TextStateRedDotBaseHandler
{
    NSCalendar * _calendar; // +0x8
    MemoryMappedKV * _mmkv; // +0x10
    NSString * _configString; // +0x18
    TextStateRedDotProfileIconConfig * _config; // +0x20
}
+ (id)keyFromDuration:(_NSRange)arg1;
- (id)init;
- (void)reloadConfigIfNeeded;
- (id)mmkv;
- (id)calendar;
- (_NSRange)hitDuration;
- (unsigned int)configType;
- (void)onConfigChange;
- (BOOL)active;
- (BOOL)dispose;
- (void)setCalendar:(id)arg1;
- (void)setMmkv:(id)arg1;
- (id)configString;
- (void)setConfigString:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

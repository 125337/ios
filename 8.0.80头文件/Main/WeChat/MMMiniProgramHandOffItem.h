@interface MMMiniProgramHandOffItem : MMHandOffItem <NSCopying>
{
    NSString * _icon; // +0x38
    NSString * _appid; // +0x40
    NSString * _appentrypage; // +0x48
    NSString * _appusername; // +0x50
}
- (id)init;
- (void)setAppentrypage:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initFromMinimizeTaskData:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)appentrypage;
- (id)appusername;
- (void)setAppusername:(id)arg1;
- (void).cxx_destruct;
@end

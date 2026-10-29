@interface WCSessionUBAConfigModel : MMObject <PBCoding>
{
    NSMutableArray * _sessionUBAConfigs; // +0x8
    NSString * _originalJson; // +0x10
}
+ (void)PBArrayAdd_sessionUBAConfigs;
+ (void)PBArrayAdd_originalJson;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)toString;
- (id)sessionUBAConfigs;
- (void)setSessionUBAConfigs:(id)arg1;
- (id)originalJson;
- (void)setOriginalJson:(id)arg1;
- (void).cxx_destruct;
@end

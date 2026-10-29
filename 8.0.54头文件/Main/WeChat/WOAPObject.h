@interface WOAPObject : MMObject
{
    long long _objType; // +0x8
    NSString * _appId; // +0x10
}
- (long long)objType;
- (void)setObjType:(long long)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end


@interface QMCMapCommand : NSObject
{
    NSString * _action; // +0x8
    NSString * _jsonString; // +0x10
    long long _dayIndex; // +0x18
    NSString * _routeName; // +0x20
}
+ (id)commandWithAction:(id)arg1 jsonString:(id)arg2 dayIndex:(long long)arg3 routeName:(id)arg4;
- (id)initInternal;
- (id)action;
- (void)setAction:(id)arg1;
- (id)jsonString;
- (void)setJsonString:(id)arg1;
- (long long)dayIndex;
- (void)setDayIndex:(long long)arg1;
- (id)routeName;
- (void)setRouteName:(id)arg1;
- (void).cxx_destruct;
@end

@interface WxaLiteAppWidgetTapEventMessage : NSObject
{
    long long _appUuid; // +0x8
    NSDictionary * _params; // +0x10
}
+ (id)makeWithAppUuid:(long long)arg1 params:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)appUuid;
- (void)setAppUuid:(long long)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end


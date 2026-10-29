@interface WxaLiteAppWidgetTapEventMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSDictionary * _params; // +0x10
}
+ (id)makeWithAppUuid:(id)arg1 params:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

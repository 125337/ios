@interface WxaLiteAppWidgetDestroyMessage : NSObject
{
    long long _appUuid; // +0x8
}
+ (id)makeWithAppUuid:(long long)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)appUuid;
- (void)setAppUuid:(long long)arg1;
@end


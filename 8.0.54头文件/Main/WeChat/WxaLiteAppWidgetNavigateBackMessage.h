@interface WxaLiteAppWidgetNavigateBackMessage : NSObject
{
    BOOL _animated; // +0x8
    long long _appUuid; // +0x10
}
+ (id)makeWithAppUuid:(long long)arg1 animated:(BOOL)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)appUuid;
- (void)setAppUuid:(long long)arg1;
- (BOOL)animated;
- (void)setAnimated:(BOOL)arg1;
@end


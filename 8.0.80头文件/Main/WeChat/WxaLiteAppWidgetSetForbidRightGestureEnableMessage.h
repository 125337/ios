@interface WxaLiteAppWidgetSetForbidRightGestureEnableMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSNumber * _enable; // +0x10
}
+ (id)makeWithAppUuid:(id)arg1 enable:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)enable;
- (void)setEnable:(id)arg1;
- (void).cxx_destruct;
@end

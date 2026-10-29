@interface WxaLiteAppWidgetDestroyMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
}
+ (id)makeWithAppUuid:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (void).cxx_destruct;
@end

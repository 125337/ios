@interface WxaLiteAppWidgetGetLiteAppConfigModelMessage : NSObject
{
    NSString * _appId; // +0x8
}
+ (id)makeWithAppId:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (void).cxx_destruct;
@end

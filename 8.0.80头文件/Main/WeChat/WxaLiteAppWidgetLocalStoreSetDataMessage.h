@interface WxaLiteAppWidgetLocalStoreSetDataMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSDictionary * _data; // +0x10
}
+ (id)makeWithAppUuid:(id)arg1 data:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

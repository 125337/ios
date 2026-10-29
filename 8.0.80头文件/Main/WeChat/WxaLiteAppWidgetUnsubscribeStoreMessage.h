@interface WxaLiteAppWidgetUnsubscribeStoreMessage : NSObject
{
    NSString * _appId; // +0x8
    NSArray * _pointers; // +0x10
}
+ (id)makeWithAppId:(id)arg1 pointers:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pointers;
- (void)setPointers:(id)arg1;
- (void).cxx_destruct;
@end

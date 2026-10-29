@interface WxaLiteAppWidgetSetLiteAppHostEngineIdMessage : NSObject
{
    NSNumber * _hostEngineId; // +0x8
}
+ (id)makeWithHostEngineId:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)hostEngineId;
- (void)setHostEngineId:(id)arg1;
- (void).cxx_destruct;
@end

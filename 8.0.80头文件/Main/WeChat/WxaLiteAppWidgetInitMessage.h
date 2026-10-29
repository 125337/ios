@interface WxaLiteAppWidgetInitMessage : NSObject
{
    NSNumber * _forLiteAppHost; // +0x8
}
+ (id)makeWithForLiteAppHost:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)forLiteAppHost;
- (void)setForLiteAppHost:(id)arg1;
- (void).cxx_destruct;
@end

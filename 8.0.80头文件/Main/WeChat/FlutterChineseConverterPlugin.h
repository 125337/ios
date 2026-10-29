@interface FlutterChineseConverterPlugin : NSObject <MMFlutterPlugin, ChineseConverterApi>
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)transliterateChineseText:(id)arg1 completion:(id /* block */)arg2;
@end

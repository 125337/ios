@interface FlutterExptResponse : NSObject
{
    NSString * _result; // +0x8
}
+ (id)makeWithResult:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)result;
- (void)setResult:(id)arg1;
- (void).cxx_destruct;
@end


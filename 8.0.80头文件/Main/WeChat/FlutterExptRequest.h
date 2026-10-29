@interface FlutterExptRequest : NSObject
{
    NSString * _key; // +0x8
}
+ (id)makeWithKey:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)key;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end

@interface EcsNativeRouterRequest : NSObject
{
    NSNumber * _type; // +0x8
    NSString * _params; // +0x10
}
+ (id)makeWithType:(id)arg1 params:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)type;
- (void)setType:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

@interface FavItemUpdateAction : NSObject
{
    NSString * _action; // +0x8
    NSString * _value; // +0x10
}
+ (id)makeWithAction:(id)arg1 value:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)action;
- (void)setAction:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (void).cxx_destruct;
@end

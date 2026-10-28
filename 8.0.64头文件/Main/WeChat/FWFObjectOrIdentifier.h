@interface FWFObjectOrIdentifier : NSObject
{
    BOOL _isIdentifier; // +0x8
    id _value; // +0x10
}
+ (id)makeWithValue:(id)arg1 isIdentifier:(BOOL)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)value;
- (void)setValue:(id)arg1;
- (BOOL)isIdentifier;
- (void)setIsIdentifier:(BOOL)arg1;
- (void).cxx_destruct;
@end

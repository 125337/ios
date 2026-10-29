@interface FavFilterTypeInfo : NSObject
{
    NSString * _displayName; // +0x8
    NSString * _typeKey; // +0x10
    long long _bitMask; // +0x18
}
+ (id)makeWithDisplayName:(id)arg1 typeKey:(id)arg2 bitMask:(long long)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)typeKey;
- (void)setTypeKey:(id)arg1;
- (long long)bitMask;
- (void)setBitMask:(long long)arg1;
- (void).cxx_destruct;
@end

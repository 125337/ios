@interface QBJcePair : NSObject
{
    id _key; // +0x8
    id _value; // +0x10
}
+ (id)analyzeExtStr:(id)arg1;
+ (id)pairFromExtStr:(id)arg1;
+ (id)pairWithValue:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)key;
- (void)setKey:(id)arg1;
- (id)value;
- (void)setValue:(id)arg1;
@end

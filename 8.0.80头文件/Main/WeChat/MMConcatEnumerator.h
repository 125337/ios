@interface MMConcatEnumerator : NSEnumerator
{
    NSArray * _enumerators; // +0x8
    long long _currIndex; // +0x10
}
+ (id)concatEnumrators:(id)arg1;
- (id)nextObject;
- (id)enumerators;
- (void)setEnumerators:(id)arg1;
- (long long)currIndex;
- (void)setCurrIndex:(long long)arg1;
- (void).cxx_destruct;
@end

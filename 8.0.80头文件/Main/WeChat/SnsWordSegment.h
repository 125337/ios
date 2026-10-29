@interface SnsWordSegment : NSObject
{
    NSString * _word; // +0x8
    NSString * _wordTag; // +0x10
}
+ (id)makeWithWord:(id)arg1 wordTag:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)word;
- (void)setWord:(id)arg1;
- (id)wordTag;
- (void)setWordTag:(id)arg1;
- (void).cxx_destruct;
@end

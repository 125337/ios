@interface SelectPhotoOptions : NSObject
{
    unsigned long long _source; // +0x8
}
+ (id)makeWithSource:(unsigned long long)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (unsigned long long)source;
- (void)setSource:(unsigned long long)arg1;
@end

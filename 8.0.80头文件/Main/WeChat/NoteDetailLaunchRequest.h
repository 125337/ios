@interface NoteDetailLaunchRequest : NSObject
{
    long long _favId; // +0x8
}
+ (id)makeWithFavId:(long long)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)favId;
- (void)setFavId:(long long)arg1;
@end

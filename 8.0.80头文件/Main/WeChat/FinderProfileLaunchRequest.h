@interface FinderProfileLaunchRequest : NSObject
{
    NSString * _finderUsername; // +0x8
}
+ (id)makeWithFinderUsername:(id)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

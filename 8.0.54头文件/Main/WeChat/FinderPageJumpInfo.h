@interface FinderPageJumpInfo : NSObject
{
    NSNumber * _finderUin; // +0x8
    NSString * _finderUsername; // +0x10
}
+ (id)makeWithFinderUin:(id)arg1 finderUsername:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)finderUin;
- (void)setFinderUin:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end


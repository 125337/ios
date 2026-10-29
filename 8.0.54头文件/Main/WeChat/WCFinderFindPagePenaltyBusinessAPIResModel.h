@interface WCFinderFindPagePenaltyBusinessAPIResModel : NSObject
{
    long long _penaltyCount; // +0x8
    NSMutableArray * _willFreeDetailsArray; // +0x10
    NSMutableArray * _exposeNDetailsArray; // +0x18
}
- (id)willFreeDetailsArray;
- (id)exposeNDetailsArray;
- (long long)penaltyCount;
- (void)setPenaltyCount:(long long)arg1;
- (void)setWillFreeDetailsArray:(id)arg1;
- (void)setExposeNDetailsArray:(id)arg1;
- (void).cxx_destruct;
@end


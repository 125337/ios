@interface WCFinderSubBusinessBanInfo : NSObject <PBCoding>
{
    long long _curIndex; // +0x8
    NSMutableArray * _businessArray; // +0x10
}
+ (void)PBArrayAdd_curIndex;
+ (void)PBArrayAdd_businessArray;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)getTargetNumber;
- (void)moveToNextIndex;
- (long long)curIndex;
- (void)setCurIndex:(long long)arg1;
- (id)businessArray;
- (void)setBusinessArray:(id)arg1;
- (void).cxx_destruct;
@end

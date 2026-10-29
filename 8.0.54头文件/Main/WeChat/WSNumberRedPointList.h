@interface WSNumberRedPointList : NSObject <PBCoding>
{
    unsigned long long _clearedNumSeq; // +0x8
    NSMutableArray * _redPointArr; // +0x10
}
+ (void)PBArrayAdd_redPointArr;
+ (void)PBArrayAdd_clearedNumSeq;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)clear:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)firstObject;
- (void)safeAddObject:(id)arg1;
- (BOOL)insertRedPointInfo:(id)arg1;
- (id)dictInfo;
- (unsigned long long)clearedNumSeq;
- (void)setClearedNumSeq:(unsigned long long)arg1;
- (id)redPointArr;
- (void)setRedPointArr:(id)arg1;
- (void).cxx_destruct;
@end


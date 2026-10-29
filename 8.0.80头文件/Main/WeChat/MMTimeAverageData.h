@interface MMTimeAverageData : NSObject
{
    NSMutableArray * _allRecord; // +0x8
}
- (id)init;
- (void)addRecord:(id)arg1;
- (id)averageDict;
- (id)averageDictExceptFirst;
- (id)firstDict;
- (id)averageDictFromArray:(id)arg1;
- (id)numberObject:(id)arg1;
- (id)stringWithDict:(id)arg1;
- (void)addRawDataToStr:(id)arg1 dict:(id)arg2 sortedArray:(id)arg3;
- (id)allRecord;
- (void)setAllRecord:(id)arg1;
- (void).cxx_destruct;
@end

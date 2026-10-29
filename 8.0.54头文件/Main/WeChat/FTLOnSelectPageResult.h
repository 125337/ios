@interface FTLOnSelectPageResult : NSObject
{
    FLTImgPositionInfo * _positionInfo; // +0x8
    NSNumber * _index; // +0x10
}
+ (id)makeWithPositionInfo:(id)arg1 index:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)positionInfo;
- (void)setPositionInfo:(id)arg1;
- (id)index;
- (void)setIndex:(id)arg1;
- (void).cxx_destruct;
@end


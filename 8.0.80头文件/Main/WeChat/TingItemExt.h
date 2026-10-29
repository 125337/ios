@interface TingItemExt : NSObject
{
    NSString * _extInfo; // +0x8
    NSNumber * _playIndex; // +0x10
    NSNumber * _fromScene; // +0x18
    NSNumber * _withFloatBall; // +0x20
    NSString * _singerCategoryId; // +0x28
}
+ (id)makeWithExtInfo:(id)arg1 playIndex:(id)arg2 fromScene:(id)arg3 withFloatBall:(id)arg4 singerCategoryId:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)playIndex;
- (void)setPlayIndex:(id)arg1;
- (id)fromScene;
- (void)setFromScene:(id)arg1;
- (id)withFloatBall;
- (void)setWithFloatBall:(id)arg1;
- (id)singerCategoryId;
- (void)setSingerCategoryId:(id)arg1;
- (void).cxx_destruct;
@end

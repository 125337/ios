@interface WCSnsSocialInfluenceInfo : MMObject <PBCoding>
{
    int _maxLikeCount; // +0x8
    int _maxCommentCount; // +0xc
    NSString * _layerId; // +0x10
    NSString * _expId; // +0x18
}
+ (void)PBArrayAdd_layerId;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_maxLikeCount;
+ (void)PBArrayAdd_maxCommentCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)layerId;
- (void)setLayerId:(id)arg1;
- (id)expId;
- (void)setExpId:(id)arg1;
- (int)maxLikeCount;
- (void)setMaxLikeCount:(int)arg1;
- (int)maxCommentCount;
- (void)setMaxCommentCount:(int)arg1;
- (void).cxx_destruct;
@end

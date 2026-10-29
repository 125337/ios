@interface GameHaowanPostInfoPbObj : GameHaowanQueryPostInfo <PBCoding>
{
    NSArray * _mediaList; // +0x8
    NSData * _continueData; // +0x10
}
+ (void)PBArrayAdd_postId;
+ (void)PBArrayAdd_postType;
+ (void)PBArrayAdd_mediaList;
+ (void)PBArrayAdd_extra;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_continueData;
+ (void)PBArrayAdd_isBroken;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (id)mediaList;
- (void)setMediaList:(id)arg1;
- (id)continueData;
- (void)setContinueData:(id)arg1;
- (void).cxx_destruct;
@end


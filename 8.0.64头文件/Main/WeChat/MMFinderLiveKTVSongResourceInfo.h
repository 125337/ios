@interface MMFinderLiveKTVSongResourceInfo : NSObject
{
    int _songQuality; // +0x8
    int _accompanyQuality; // +0xc
    NSMutableArray * _resources; // +0x10
}
+ (void)buildSongResourceInfo:(id)arg1 withResourceInfo:(id)arg2;
- (id)description;
- (id)resources;
- (void)setResources:(id)arg1;
- (int)songQuality;
- (void)setSongQuality:(int)arg1;
- (int)accompanyQuality;
- (void)setAccompanyQuality:(int)arg1;
- (void).cxx_destruct;
@end

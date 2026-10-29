@interface WCFinderSlideUpGuideExposureInfo : NSObject <PBCoding>
{
    int _commentScene; // +0x8
    unsigned long long _exposureTime; // +0x10
}
+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_exposureTime;
+ (void)initialize;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)getPBPropertyTable;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (unsigned long long)exposureTime;
- (void)setExposureTime:(unsigned long long)arg1;
@end


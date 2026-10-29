@interface WCFinderSocialInteractionInfo : NSObject <PBCoding>
{
    long long _redDotExposureCount; // +0x8
    long long _redDotClickCount; // +0x10
    long long _likeCount; // +0x18
    long long _completePlayCount; // +0x20
}
+ (void)PBArrayAdd_redDotExposureCount;
+ (void)PBArrayAdd_redDotClickCount;
+ (void)PBArrayAdd_likeCount;
+ (void)PBArrayAdd_completePlayCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)redDotExposureCount;
- (void)setRedDotExposureCount:(long long)arg1;
- (long long)redDotClickCount;
- (void)setRedDotClickCount:(long long)arg1;
- (long long)likeCount;
- (void)setLikeCount:(long long)arg1;
- (long long)completePlayCount;
- (void)setCompletePlayCount:(long long)arg1;
@end

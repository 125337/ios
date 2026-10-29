@interface WCAdContinuousLikeReportInfo : NSObject
{
    unsigned int _totalLikeCount; // +0x8
    unsigned int _continuousLikeCount; // +0xc
    unsigned int _bannerPlayCount; // +0x10
}
- (unsigned int)totalLikeCount;
- (void)setTotalLikeCount:(unsigned int)arg1;
- (unsigned int)continuousLikeCount;
- (void)setContinuousLikeCount:(unsigned int)arg1;
- (unsigned int)bannerPlayCount;
- (void)setBannerPlayCount:(unsigned int)arg1;
@end


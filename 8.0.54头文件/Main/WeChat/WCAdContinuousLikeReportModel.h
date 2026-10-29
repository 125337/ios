@interface WCAdContinuousLikeReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned int _totalLikeCount; // +0x8
    unsigned int _continuousLikeCount; // +0xc
    unsigned int _bannerPlayCount; // +0x10
    NSString * _numberRequestId; // +0x18
}
- (id)numberRequestId;
- (void)setNumberRequestId:(id)arg1;
- (unsigned int)totalLikeCount;
- (void)setTotalLikeCount:(unsigned int)arg1;
- (unsigned int)continuousLikeCount;
- (void)setContinuousLikeCount:(unsigned int)arg1;
- (unsigned int)bannerPlayCount;
- (void)setBannerPlayCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end


@interface MMFinderLiveBannerCellViewModel : NSObject
{
    BOOL _disbalePagAnimation; // +0x8
    MMFinderLiveBannerInfo * _bannerInfo; // +0x10
    unsigned long long _curSubTitleIndex; // +0x18
}
+ (id)vmWithBanner:(id)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (unsigned long long)curSubTitleIndex;
- (void)setCurSubTitleIndex:(unsigned long long)arg1;
- (BOOL)disbalePagAnimation;
- (void)setDisbalePagAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end


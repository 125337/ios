@interface MMEmoticonIPPageContext : MMEmoticonLiteAppPageContextBase
{
    EmotionBannerSet * _bannerSet; // +0x8
    StoreEmotionAllListReportInfo * _reportInfo; // +0x10
}
- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (id)bannerSet;
- (void)setBannerSet:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (void).cxx_destruct;
@end

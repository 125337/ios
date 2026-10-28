@interface MFRoamLiteBtn : MFBannerBtn <MFBanner>
{
    NSString * _lastImageName; // +0x8
    NSString * _lastBannerString; // +0x10
}
- (void)setRoamBannerIcon:(id)arg1 title:(id)arg2;
- (id)lastImageName;
- (void)setLastImageName:(id)arg1;
- (id)lastBannerString;
- (void)setLastBannerString:(id)arg1;
- (void).cxx_destruct;
@end

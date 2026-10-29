@interface WCFinderFeedRecommendThankViewModel : NSObject
{
    BOOL _possibleRecommendThankItem; // +0x8
    FinderObjectThankInfo * _thankInfo; // +0x10
    NSString * _sharerUsername; // +0x18
}
+ (id)viewModelWithThankInfo:(id)arg1 sharerUsername:(id)arg2 shareScene:(unsigned long long)arg3;
- (id)thankInfo;
- (void)setThankInfo:(id)arg1;
- (id)sharerUsername;
- (void)setSharerUsername:(id)arg1;
- (BOOL)possibleRecommendThankItem;
- (void)setPossibleRecommendThankItem:(BOOL)arg1;
- (void).cxx_destruct;
@end

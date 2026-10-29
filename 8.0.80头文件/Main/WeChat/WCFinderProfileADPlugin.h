@interface WCFinderProfileADPlugin : NSObject
{
    FinderUserPageHeaderAdsInfo_StyleInfo * _styleInfo; // +0x8
    NSMutableArray * _configArray; // +0x10
}
- (void)updateWithAdInfo:(id)arg1;
- (id)adConfigArray;
- (id)configArray;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (void)setConfigArray:(id)arg1;
- (void).cxx_destruct;
@end

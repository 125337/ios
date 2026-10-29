@interface WCFinderLiveCardProductShowcase : NSObject
{
    BOOL _needRefresh; // +0x8
    NSArray * _productInfos; // +0x10
}
+ (id)finderLiveCardProductShowcaseFrom:(id)arg1;
- (id)toFinderLiveCardProductShowcase;
- (id)productInfos;
- (void)setProductInfos:(id)arg1;
- (BOOL)needRefresh;
- (void)setNeedRefresh:(BOOL)arg1;
- (void).cxx_destruct;
@end


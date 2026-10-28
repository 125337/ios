@interface WCFinderDataLoadTipsConfig : NSObject
{
    UIFont * _tipsFont; // +0x8
    UIColor * _tipsColor; // +0x10
    CGSize _loadingIconSize; // +0x18
}
+ (id)defaultConfig;
- (CGSize)loadingIconSize;
- (void)setLoadingIconSize:(CGSize)arg1;
- (id)tipsFont;
- (void)setTipsFont:(id)arg1;
- (id)tipsColor;
- (void)setTipsColor:(id)arg1;
- (void).cxx_destruct;
@end

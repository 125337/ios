@interface GameAppStorePreloadItem : NSObject
{
    BOOL _preloadLoadFailed; // +0x8
    BOOL _isPreload; // +0x9
    SKStoreProductViewController * _preloadProdctVc; // +0x10
    NSString * _preloadProductId; // +0x18
    GameAppStoreReportInfo * _reportInfo; // +0x20
    double _startLoadTime; // +0x28
    double _loadCompleteTime; // +0x30
}
- (id)init;
- (id)description;
- (id)preloadProdctVc;
- (void)setPreloadProdctVc:(id)arg1;
- (id)preloadProductId;
- (void)setPreloadProductId:(id)arg1;
- (BOOL)preloadLoadFailed;
- (void)setPreloadLoadFailed:(BOOL)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (BOOL)isPreload;
- (void)setIsPreload:(BOOL)arg1;
- (double)startLoadTime;
- (void)setStartLoadTime:(double)arg1;
- (double)loadCompleteTime;
- (void)setLoadCompleteTime:(double)arg1;
- (void).cxx_destruct;
@end

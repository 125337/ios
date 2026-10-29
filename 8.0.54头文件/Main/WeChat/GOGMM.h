@interface GOGMM : NSObject
{
    BOOL _ignoreFeatures; // +0x8
    BOOL _ignorePhash; // +0x9
    BOOL _ignorePdqhash; // +0xa
    shared_ptr<mmfg::OcrApi> _api; // +0x10
}
+ (id)qr:(id)arg1;
+ (id)sec:(const GOGImageFeatureItem *)arg1 v:(const GOGVideoFeatureItem *)arg2;
- (id)init;
- (id)seci:(id)arg1;
- (id)secv:(id)arg1 r:(id)arg2;
- (BOOL)ignoreFeatures;
- (void)setIgnoreFeatures:(BOOL)arg1;
- (BOOL)ignorePhash;
- (void)setIgnorePhash:(BOOL)arg1;
- (BOOL)ignorePdqhash;
- (void)setIgnorePdqhash:(BOOL)arg1;
- (shared_ptr<mmfg::OcrApi>)api;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


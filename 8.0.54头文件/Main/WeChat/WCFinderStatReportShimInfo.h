@interface WCFinderStatReportShimInfo : NSObject
{
    BOOL _customFilter; // +0x8
    id <WCFinderStatReportShim> _shim; // +0x10
}
- (id)initWithShim:(id)arg1;
- (void)update:(id)arg1;
- (id)shim;
- (BOOL)customFilter;
- (void).cxx_destruct;
@end


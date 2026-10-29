@interface AmbBindReportInfo : NSObject
{
    NSMutableArray * _bindRouteInfos; // +0x8
    NSMutableDictionary * _params; // +0x10
}
- (id)init;
- (id)toDic;
- (id)bindRouteInfos;
- (void)setBindRouteInfos:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

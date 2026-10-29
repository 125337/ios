@interface DataReportViewDataEntity : NSObject
{
    NSString * _viewId; // +0x8
    NSMutableDictionary * _viewParams; // +0x10
    NSMutableDictionary * _dynamicParamsBlocks; // +0x18
    NSMutableDictionary * _innerProperty; // +0x20
    NSMutableDictionary * _reportPolicy; // +0x28
}
- (id)init;
- (void)reset;
- (id)toString;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (id)viewParams;
- (void)setViewParams:(id)arg1;
- (id)dynamicParamsBlocks;
- (void)setDynamicParamsBlocks:(id)arg1;
- (id)innerProperty;
- (void)setInnerProperty:(id)arg1;
- (id)reportPolicy;
- (void)setReportPolicy:(id)arg1;
- (void).cxx_destruct;
@end


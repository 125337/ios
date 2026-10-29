@interface OpenFinderBaseHandler : MMObject <OpenApiFinderBizDelegate>
{
    OpenApiParameter * _parameter; // +0x8
    NSDictionary * _paramsDict; // +0x10
    NSString * _openUrl; // +0x18
    FinderBlockViewController * _blockVC; // +0x20
}
- (void)startHandlerWithParameter:(id)arg1;
- (id)genBlockVC;
- (BOOL)isParameterLegal;
- (void)sendRespTo3rdApp:(id)arg1;
- (void)createOpenUrl;
- (void)cancelHandler;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)paramsDict;
- (void)setParamsDict:(id)arg1;
- (id)openUrl;
- (void)setOpenUrl:(id)arg1;
- (id)blockVC;
- (void)setBlockVC:(id)arg1;
- (void).cxx_destruct;
@end

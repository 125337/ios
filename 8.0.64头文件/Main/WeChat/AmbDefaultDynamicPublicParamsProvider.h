@interface AmbDefaultDynamicPublicParamsProvider : NSObject <AmoebaDynamicPublicParamsProvider>
{
    DataReportDefaultDynamicPublicParamsProvider * defaultDynamicPublicParamsProvider; // +0x8
}
- (id)init;
- (void)setDynamicPublicParams:(id)arg1;
- (void)setDynamicPublicEventParams:(id)arg1 params:(id)arg2;
- (void).cxx_destruct;
@end

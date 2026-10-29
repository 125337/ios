@interface WASyncGetJsApiControlBytesCmd : WASyncBaseCmd
{
    BOOL _forceUpdate; // +0x40
    NSMutableArray * _pluginAppidList; // +0x48
}
- (id)pluginAppidList;
- (void)setPluginAppidList:(id)arg1;
- (BOOL)forceUpdate;
- (void)setForceUpdate:(BOOL)arg1;
- (void).cxx_destruct;
@end


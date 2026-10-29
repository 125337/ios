@interface GameCenterJsApiFacade : MMObject
{
    NSDictionary * _funcMap; // +0x8
    NSMutableDictionary * _funcHandlerMap; // +0x10
    id <WebviewJSEventHandlerBaseDelegate> m_delegate; // +0x18
}
- (id)init;
- (void)initJsApi;
- (void)setDelegate:(id)arg1;
- (BOOL)canHandle:(id)arg1;
- (void)handle:(id)arg1;
- (void).cxx_destruct;
@end


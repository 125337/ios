@interface WebviewJSEventHandlerFacade : NSObject
{
    NSMutableDictionary * m_functionHandlers; // +0x8
    NSMutableDictionary * m_functionCallExtraDataMap; // +0x10
    NSDictionary * m_functionMap; // +0x18
    id <WebviewJSEventHandlerBaseDelegate> m_delegate; // +0x20
}
- (void)setM_delegate:(id)arg1;
- (id)init;
- (void)handleJSEvent:(id)arg1;
- (id)getExtraDataForEvent:(id)arg1;
- (void)setExtraData:(id)arg1 forEvent:(id)arg2;
- (id)getExistedHandlerForFunction:(id)arg1;
- (id)handlerForFunction:(id)arg1;
- (BOOL)canHandleJSEvent:(id)arg1;
- (id)extraDataForNextJSEventCalled:(id)arg1;
- (void)setJSFunctionMap:(id)arg1;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)m_delegate;
- (void).cxx_destruct;
@end


@interface CBTAsstBoardLegacyCPP2NativeAffImpl : NSObject <ChatbotBoardLegacyCPP2NativeCallerBase>
{
    ChatbotBoardLegacyCPP2NativeCallerCallback * _callback; // +0x8
}
- (void)setCallback:(id)arg1;
- (void)onProbeRenderStrategyAsync:(unsigned long long)arg1 itemId:(id)arg2 itemType:(id)arg3 cardWrapBytes:(id)arg4 renderDataBytes:(id)arg5 pageMode:(int)arg6;
- (void)onLegacyItemDeactivatedAsync:(unsigned long long)arg1 itemId:(id)arg2 family:(id)arg3 statePayload:(id)arg4;
- (id)callback;
- (void).cxx_destruct;
@end

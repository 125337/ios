@interface WXTalkieComponent : NSObject
{
    WXTalkieEngineAdapter * _engineAdapter; // +0x8
    ILiveConEngine * _wxTalkEngine; // +0x10
}
- (id)init;
- (void)dealloc;
- (WXTalkieEngineAdapter *)engineAdapter;
- (void)setEngineAdapter:(WXTalkieEngineAdapter *)arg1;
- (ILiveConEngine *)wxTalkEngine;
- (void)setWxTalkEngine:(ILiveConEngine *)arg1;
@end

@interface WCFinderLikeEasterEggPresentCoordinator : NSObject
{
    BOOL _isCountdownReady; // +0x8
    NSString * _tid; // +0x10
    id /* block */ _pendingTrigger; // +0x18
    FinderEmojiInfo * _emoticonInfo; // +0x20
    WCFinderLikeEasterEggLoader * _emoticonSink; // +0x28
    CEmoticonWrap * _emoticonWrap; // +0x30
}
- (void)cancelTrigger;
- (id)emoticonSink;
- (void)_resetState;
- (void)_checkIfConditionsMet;
- (void)setIsCountdownReady:(BOOL)arg1;
- (void)setEmoticonWrap:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id /* block */)pendingTrigger;
- (void)setPendingTrigger:(id /* block */)arg1;
- (id)emoticonInfo;
- (void)setEmoticonInfo:(id)arg1;
- (void)setEmoticonSink:(id)arg1;
- (BOOL)isCountdownReady;
- (id)emoticonWrap;
- (void).cxx_destruct;
@end

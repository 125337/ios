@interface SpeakMsgLogic : NSObject <SpeakTextDelegate, MsgAudioPlayerDelegate>
{
    BOOL _needRefreshList; // +0x8
    BOOL _isPaused; // +0x9
    BOOL _isFlashAnimating; // +0xa
    BOOL _hasPlayedVoiceAudio; // +0xb
    BOOL _hasDeferredSpeakNext; // +0xc
    id <SpeakMsgLogicDelegate> _delegate; // +0x10
    CMessageWrap * _currentMsg; // +0x18
    SpeakTextLogicV2 * _speakTextLogic; // +0x20
    id <MsgAudioPlayerProtocol> _audioPlayer; // +0x28
    NSArray * _msgList; // +0x30
    long long _currentIndex; // +0x38
    CMessageWrap * _lastSpokenMsg; // +0x40
    NSString * _voiceTranslationContent; // +0x48
}
- (void)dealloc;
- (void)startSpeakMsgs:(id)arg1;
- (BOOL)isPlaying;
- (id)lastMsgInCurrentBatch;
- (void)pause;
- (void)resume;
- (void)stop;
- (void)onFlashAnimationDidFinish;
- (id)speakTextLogic;
- (void)speakNextItem;
- (long long)countConsecutiveMediaMessages:(long long)arg1;
- (BOOL)isSameSender:(id)arg1 with:(id)arg2;
- (void)speakSingleMessage:(id)arg1;
- (void)speakMergedMediaMessagesFrom:(long long)arg1 count:(long long)arg2;
- (id)generateMergedMediaSpeakContentWithFirstMsg:(id)arg1 imageCount:(long long)arg2 videoCount:(long long)arg3 lastMsg:(id)arg4;
- (id)generateSpeakContentWithMsg:(id)arg1 lastMsg:(id)arg2;
- (id)generatePlayerWithAudioFormat:(unsigned int)arg1;
- (void)onSpeakTextEnd;
- (void)startSpeakVoice;
- (void)onSpeakVoiceEnd;
- (void)onSpeakStop;
- (void)onSpeakNetworkDisconnected;
- (void)audioPlayerDidStartPlaying:(id)arg1;
- (void)audioPlayerDidFinishPlaying:(id)arg1;
- (BOOL)isGroupPayMessage:(id)arg1;
- (id)generateGroupPaySpeakContent:(id)arg1;
- (id)generateTransferSpeakContent:(id)arg1;
- (id)generateSolitaireSpeakContent:(id)arg1;
- (BOOL)isSystemMsg:(id)arg1;
- (id)generateEcsGiftSpeakContent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)currentMsg;
- (BOOL)needRefreshList;
- (void)setNeedRefreshList:(BOOL)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (BOOL)isFlashAnimating;
- (void)setIsFlashAnimating:(BOOL)arg1;
- (void)setSpeakTextLogic:(id)arg1;
- (id)audioPlayer;
- (void)setAudioPlayer:(id)arg1;
- (id)msgList;
- (void)setMsgList:(id)arg1;
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)lastSpokenMsg;
- (void)setLastSpokenMsg:(id)arg1;
- (id)voiceTranslationContent;
- (void)setVoiceTranslationContent:(id)arg1;
- (BOOL)hasPlayedVoiceAudio;
- (void)setHasPlayedVoiceAudio:(BOOL)arg1;
- (BOOL)hasDeferredSpeakNext;
- (void)setHasDeferredSpeakNext:(BOOL)arg1;
- (void).cxx_destruct;
@end

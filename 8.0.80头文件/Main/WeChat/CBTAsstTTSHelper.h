@interface CBTAsstTTSHelper : NSObject
{
    BOOL _streamSessionOpen; // +0x8
    int _streamNextSeq; // +0xc
    NSString * _pendingReadAloudTrace; // +0x10
    NSString * _playingVoiceId; // +0x18
    NSString * _lastRoundEndTrace; // +0x20
    unsigned long long _lastRoundEndTsMs; // +0x28
    NSString * _graceExtendedTrace; // +0x30
    NSMutableDictionary * _exptCache; // +0x38
    unsigned long long _clientIdCounter; // +0x40
    NSString * _streamTrace; // +0x48
    NSString * _streamQid; // +0x50
    NSString * _streamMsgId; // +0x58
    NSString * _streamSentPlain; // +0x60
    NSMutableSet * _reportedPlayBtnExpAnswerIds; // +0x68
    id /* block */ _pendingExpireBlock; // +0x70
    NSRecursiveLock * _stateLock; // +0x78
}
+ (id)sharedInstance;
+ (BOOL)exptEnabledForKey:(id)arg1;
+ (BOOL)isStreamingPlayEnabled;
+ (BOOL)isLongPressReadEnabled;
+ (BOOL)isCompletionReadEnabled;
+ (BOOL)isWordChar:(unsigned short)arg1;
+ (id)plainTextFromMarkdown:(id)arg1;
+ (id)stringByRemovingPattern:(id)arg1 from:(id)arg2;
+ (id)stringByRemovingPattern:(id)arg1 from:(id)arg2 options:(unsigned long long)arg3;
+ (id)stripSingleUnderscorePreservingWordChars:(id)arg1;
+ (id)stringByRemovingControlCharactersPreservingNewline:(id)arg1;
+ (BOOL)readAloudText:(id)arg1 traceMsgid:(id)arg2 aiQueryId:(id)arg3 voipSessionID:(id)arg4 textSeq:(int)arg5;
+ (id)generateClientId;
+ (BOOL)startStreamingReadAloud:(id)arg1 traceMsgid:(id)arg2 aiQueryId:(id)arg3 voipSessionID:(id)arg4;
+ (void)noteStreamTextDelta:(id)arg1 traceMsgid:(id)arg2 voipSessionID:(id)arg3;
+ (void)noteStreamTextEnded:(id)arg1 traceMsgid:(id)arg2 voipSessionID:(id)arg3;
+ (BOOL)streamSessionOpenNow;
+ (void)flushStreamDeltaFromRaw:(id)arg1 eof:(BOOL)arg2 voipSessionID:(id)arg3;
+ (id)makeStreamFragment:(id)arg1 seq:(int)arg2 eof:(BOOL)arg3;
+ (void)sendPreparedStreamFragments:(id)arg1 voipSessionID:(id)arg2;
+ (void)closeStreamingSessionWithVoipSessionID:(id)arg1;
+ (void)resetStreamingSessionLocked;
+ (void)stopReadAloudMutedWithVoipSessionID:(id)arg1;
+ (void)handleTTSEndRestoreDiscardIfNeeded;
+ (void)noteRoundEndedWithTraceMsgid:(id)arg1;
+ (void)extendGraceWindowForTraceMsgid:(id)arg1;
+ (BOOL)isRoundWithinGraceWindow:(id)arg1;
+ (BOOL)isReadAloudActiveForTraceMsgid:(id)arg1;
+ (BOOL)hasPendingManualReadAloud;
+ (void)schedulePendingExpireForTrace:(id)arg1;
+ (void)expirePendingIfStillTrace:(id)arg1;
+ (void)cancelPendingExpire;
+ (id)readAloudAnchorForTraceMsgid:(id)arg1;
+ (void)noteTTSBeginWithVoiceId:(id)arg1;
+ (void)noteTTSEnd;
+ (BOOL)markPlayBtnExpReportedIfNeededForAnswerId:(unsigned long long)arg1;
+ (void)postPlayStateChanged;
- (id)init;
- (id)pendingReadAloudTrace;
- (void)setPendingReadAloudTrace:(id)arg1;
- (id)playingVoiceId;
- (void)setPlayingVoiceId:(id)arg1;
- (id)lastRoundEndTrace;
- (void)setLastRoundEndTrace:(id)arg1;
- (unsigned long long)lastRoundEndTsMs;
- (void)setLastRoundEndTsMs:(unsigned long long)arg1;
- (id)graceExtendedTrace;
- (void)setGraceExtendedTrace:(id)arg1;
- (id)exptCache;
- (void)setExptCache:(id)arg1;
- (unsigned long long)clientIdCounter;
- (void)setClientIdCounter:(unsigned long long)arg1;
- (BOOL)streamSessionOpen;
- (void)setStreamSessionOpen:(BOOL)arg1;
- (id)streamTrace;
- (void)setStreamTrace:(id)arg1;
- (id)streamQid;
- (void)setStreamQid:(id)arg1;
- (id)streamMsgId;
- (void)setStreamMsgId:(id)arg1;
- (int)streamNextSeq;
- (void)setStreamNextSeq:(int)arg1;
- (id)streamSentPlain;
- (void)setStreamSentPlain:(id)arg1;
- (id)reportedPlayBtnExpAnswerIds;
- (void)setReportedPlayBtnExpAnswerIds:(id)arg1;
- (id /* block */)pendingExpireBlock;
- (void)setPendingExpireBlock:(id /* block */)arg1;
- (id)stateLock;
- (void)setStateLock:(id)arg1;
- (void).cxx_destruct;
@end

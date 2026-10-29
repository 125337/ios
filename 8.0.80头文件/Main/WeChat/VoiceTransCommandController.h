@interface VoiceTransCommandController : NSObject
{
    BOOL _showInvalidToListeningGuide; // +0x8
    BOOL _userEditedAfterCommand; // +0x9
    BOOL _commandHasCachedModelResult; // +0xa
    BOOL _commandRoundSettled; // +0xb
    BOOL _commandSessionActive; // +0xc
    BOOL _commandInitialSpeechDetected; // +0xd
    BOOL _commandRoundActive; // +0xe
    BOOL _commandPendingDidFall; // +0xf
    BOOL _commandAwaitingDiffCompletion; // +0x10
    BOOL _commandCompletionHoldPending; // +0x11
    BOOL _lastCommandAsrPending; // +0x12
    BOOL _lastCommandResultInvalid; // +0x13
    BOOL _lastCommandAsrTextNotEmpty; // +0x14
    BOOL _commandFirstResultLatencyLogged; // +0x15
    BOOL _commandOriginBaselineFrozen; // +0x16
    BOOL _nextCommandSpeechDetected; // +0x17
    BOOL _queuedCommandRoundActive; // +0x18
    BOOL _queuedCommandPendingDidFall; // +0x19
    BOOL _queuedCommandRoundSettled; // +0x1a
    BOOL _queuedCommandHasCachedModelResult; // +0x1b
    BOOL _queuedCommandResultInvalid; // +0x1c
    BOOL _queuedCommandFirstResultLatencyLogged; // +0x1d
    int _queuedCommandInvalidReason; // +0x20
    id <VoiceTransCommandControllerDelegate> _delegate; // +0x28
    unsigned long long _commandUIState; // +0x30
    unsigned long long _deferredCommandOutcome; // +0x38
    unsigned long long _commandRoundId; // +0x40
    NSString * _commandProcessingInputSnapshot; // +0x48
    NSString * _cachedCommandModelResult; // +0x50
    NSString * _deferredCommandTargetText; // +0x58
    double _commandRequestStartTime; // +0x60
    NSString * _latestCommandOriginAsrText; // +0x68
    unsigned long long _commandOriginBaselineMeaningfulLength; // +0x70
    NSString * _queuedCommandProcessingInputSnapshot; // +0x78
    NSString * _queuedCommandCachedModelResult; // +0x80
    double _queuedCommandRequestStartTime; // +0x88
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (BOOL)hasDeferredOutcomeOrHold;
- (id)commandUIStateName:(unsigned long long)arg1;
- (id)deferredCommandOutcomeName:(unsigned long long)arg1;
- (void)traceCommandEvent:(id)arg1 detail:(id)arg2;
- (void)beginSessionIfNeeded;
- (void)resetCommandStateMachine;
- (unsigned long long)meaningfulLengthForCommandOriginText:(id)arg1;
- (void)freezeCommandOriginBaseline;
- (void)clearQueuedCommandRound;
- (void)beginQueuedCommandRound;
- (void)settleQueuedCommandRoundIfPossible;
- (void)onQueuedCommandResultTimeout;
- (void)suspendCommandStateMachineForTextEditingIfNeeded;
- (void)resumeCommandStateMachineAfterTextEditingIfNeeded;
- (BOOL)isCommandStateListening;
- (BOOL)isCommandStateProcessing;
- (BOOL)isCommandSendLocked;
- (BOOL)isCommandTextEditingLocked;
- (void)applyCommandInteractionLock;
- (void)transitionToCommandUIState:(unsigned long long)arg1;
- (void)beginCommandRound;
- (void)finishCommandRoundAndContinue;
- (void)scheduleCommandOutcomeHold;
- (void)finishCommandOutcomeHold;
- (void)beginInvalidCommandOutcome;
- (void)commandDiffDidComplete;
- (void)materializeCommandBubbleForModelResultIfNeeded;
- (void)executeCommandDiffTarget:(id)arg1;
- (void)settleCommandRoundIfPossible;
- (void)onCommandResultTimeout;
- (void)resumeDeferredCommandOutcomeIfNeeded;
- (void)updateCommandOriginAsrText:(id)arg1;
- (void)updateCommandState:(BOOL)arg1 commandResultInvalid:(BOOL)arg2 commandAsrTextNotEmpty:(BOOL)arg3;
- (void)coverModelResult:(id)arg1 pending:(BOOL)arg2;
- (id)commandInputBoxTextSnapshotForHotwordReport;
- (id)resolvedCommandFinalText;
- (id)finalizeForImmediateSend;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)commandUIState;
- (void)setCommandUIState:(unsigned long long)arg1;
- (BOOL)showInvalidToListeningGuide;
- (void)setShowInvalidToListeningGuide:(BOOL)arg1;
- (BOOL)userEditedAfterCommand;
- (void)setUserEditedAfterCommand:(BOOL)arg1;
- (BOOL)commandHasCachedModelResult;
- (void)setCommandHasCachedModelResult:(BOOL)arg1;
- (BOOL)commandRoundSettled;
- (void)setCommandRoundSettled:(BOOL)arg1;
- (unsigned long long)deferredCommandOutcome;
- (void)setDeferredCommandOutcome:(unsigned long long)arg1;
- (BOOL)commandSessionActive;
- (void)setCommandSessionActive:(BOOL)arg1;
- (BOOL)commandInitialSpeechDetected;
- (void)setCommandInitialSpeechDetected:(BOOL)arg1;
- (BOOL)commandRoundActive;
- (void)setCommandRoundActive:(BOOL)arg1;
- (BOOL)commandPendingDidFall;
- (void)setCommandPendingDidFall:(BOOL)arg1;
- (BOOL)commandAwaitingDiffCompletion;
- (void)setCommandAwaitingDiffCompletion:(BOOL)arg1;
- (BOOL)commandCompletionHoldPending;
- (void)setCommandCompletionHoldPending:(BOOL)arg1;
- (BOOL)lastCommandAsrPending;
- (void)setLastCommandAsrPending:(BOOL)arg1;
- (BOOL)lastCommandResultInvalid;
- (void)setLastCommandResultInvalid:(BOOL)arg1;
- (BOOL)lastCommandAsrTextNotEmpty;
- (void)setLastCommandAsrTextNotEmpty:(BOOL)arg1;
- (unsigned long long)commandRoundId;
- (void)setCommandRoundId:(unsigned long long)arg1;
- (id)commandProcessingInputSnapshot;
- (void)setCommandProcessingInputSnapshot:(id)arg1;
- (id)cachedCommandModelResult;
- (void)setCachedCommandModelResult:(id)arg1;
- (id)deferredCommandTargetText;
- (void)setDeferredCommandTargetText:(id)arg1;
- (double)commandRequestStartTime;
- (void)setCommandRequestStartTime:(double)arg1;
- (BOOL)commandFirstResultLatencyLogged;
- (void)setCommandFirstResultLatencyLogged:(BOOL)arg1;
- (id)latestCommandOriginAsrText;
- (void)setLatestCommandOriginAsrText:(id)arg1;
- (unsigned long long)commandOriginBaselineMeaningfulLength;
- (void)setCommandOriginBaselineMeaningfulLength:(unsigned long long)arg1;
- (BOOL)commandOriginBaselineFrozen;
- (void)setCommandOriginBaselineFrozen:(BOOL)arg1;
- (BOOL)nextCommandSpeechDetected;
- (void)setNextCommandSpeechDetected:(BOOL)arg1;
- (BOOL)queuedCommandRoundActive;
- (void)setQueuedCommandRoundActive:(BOOL)arg1;
- (BOOL)queuedCommandPendingDidFall;
- (void)setQueuedCommandPendingDidFall:(BOOL)arg1;
- (BOOL)queuedCommandRoundSettled;
- (void)setQueuedCommandRoundSettled:(BOOL)arg1;
- (BOOL)queuedCommandHasCachedModelResult;
- (void)setQueuedCommandHasCachedModelResult:(BOOL)arg1;
- (BOOL)queuedCommandResultInvalid;
- (void)setQueuedCommandResultInvalid:(BOOL)arg1;
- (id)queuedCommandProcessingInputSnapshot;
- (void)setQueuedCommandProcessingInputSnapshot:(id)arg1;
- (id)queuedCommandCachedModelResult;
- (void)setQueuedCommandCachedModelResult:(id)arg1;
- (double)queuedCommandRequestStartTime;
- (void)setQueuedCommandRequestStartTime:(double)arg1;
- (BOOL)queuedCommandFirstResultLatencyLogged;
- (void)setQueuedCommandFirstResultLatencyLogged:(BOOL)arg1;
- (int)queuedCommandInvalidReason;
- (void)setQueuedCommandInvalidReason:(int)arg1;
- (void).cxx_destruct;
@end

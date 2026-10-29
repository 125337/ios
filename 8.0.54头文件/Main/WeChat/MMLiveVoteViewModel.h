@interface MMLiveVoteViewModel : NSObject <WCFinderLiveExt, UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _isAttending; // +0x8
    unsigned int _remainTime; // +0xc
    FinderLiveVotingInfo * _voteInfo; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMTimer * _countdownTimer; // +0x20
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (BOOL)canManageVote;
- (BOOL)isVoteRunning;
- (BOOL)isVoteComputing;
- (BOOL)isVoteEnd;
- (void)cancelCurrentVoting;
- (void)attendVoteOnSelectIndex:(long long)arg1;
- (void)updateLocalInfoOnAttendSuccessWith:(long long)arg1;
- (void)updateLocalChoiceListOnAttendSuccessWith:(long long)arg1;
- (id)getRadioAttendChoicesOnClickIndex:(long long)arg1;
- (id)getCheckAttendChoicesOnClickIndex:(long long)arg1;
- (BOOL)couldUpdateWith:(id)arg1;
- (void)countdownTimerCallBack;
- (BOOL)checkAndClearVoteForSpamCheckIfNeeded;
- (void)updateVoteInfo:(id)arg1 fromMsg:(BOOL)arg2;
- (void)setVoteInfo:(id)arg1;
- (void)updateModelOnVoteInfoUpdate;
- (void)onGetLiveVoteInfo:(id)arg1 forTaskId:(id)arg2;
- (id)currentLiveTask;
- (void)safeMinusCountOfChoice:(id)arg1;
- (BOOL)hasSelfParticipantIn:(id)arg1;
- (id)voteInfo;
- (unsigned int)remainTime;
- (void)setRemainTime:(unsigned int)arg1;
- (BOOL)isAttending;
- (void)setIsAttending:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)countdownTimer;
- (void)setCountdownTimer:(id)arg1;
- (void).cxx_destruct;
@end


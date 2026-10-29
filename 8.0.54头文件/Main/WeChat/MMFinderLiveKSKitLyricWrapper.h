@interface MMFinderLiveKSKitLyricWrapper : NSObject
{
    BOOL _prepared; // +0x8
    int _startTime; // +0xc
    int _endTime; // +0x10
    MMFinderLiveKSKitLyricSentenceView * _lyricTextView; // +0x18
    MMFinderLiveKSKitLyricSentence * _sentence; // +0x20
    double _maxWidth; // +0x28
    long long _currState; // +0x30
    CGSize _displayStateSize; // +0x38
    CGSize _prepareStateSize; // +0x48
}
- (id)initWithLyricSentence:(id)arg1 maxWidth:(double)arg2;
- (void)prepareToDisplay:(id /* block */)arg1;
- (void)startTranferPrepareStateAtPositionY:(double)arg1 preferDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)tranferPrepareStateAtPositionYDirectly:(double)arg1;
- (void)startTransferDisplayStateToPositionY:(double)arg1 preferDuration:(double)arg2 completion:(id /* block */)arg3;
- (void)startTranferDisappearStateWithPreferDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)onPositionChanged:(int)arg1;
- (void)transferUIToPrepareBefore;
- (void)transferUIToPrepareAfter;
- (void)transferUIToDisplay;
- (void)transferUIToDisappear;
- (void)extractLyricWordListToDisplay:(id /* block */)arg1;
- (void)clearLyricWordsLabelWidth:(id)arg1;
- (void)createLyricTextView:(id)arg1;
- (void)updateStartTime:(int)arg1 endTime:(int)arg2;
- (double)prepareScaleRatio;
- (id)lyricTextView;
- (void)setLyricTextView:(id)arg1;
- (id)sentence;
- (void)setSentence:(id)arg1;
- (CGSize)displayStateSize;
- (void)setDisplayStateSize:(CGSize)arg1;
- (CGSize)prepareStateSize;
- (void)setPrepareStateSize:(CGSize)arg1;
- (int)startTime;
- (void)setStartTime:(int)arg1;
- (int)endTime;
- (void)setEndTime:(int)arg1;
- (BOOL)prepared;
- (void)setPrepared:(BOOL)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (long long)currState;
- (void)setCurrState:(long long)arg1;
- (void).cxx_destruct;
@end


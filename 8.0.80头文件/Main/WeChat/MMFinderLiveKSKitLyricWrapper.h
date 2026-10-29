@interface MMFinderLiveKSKitLyricWrapper : NSObject
{
    BOOL _prepared; // +0x8
    int _startTime; // +0xc
    int _endTime; // +0x10
    MMFinderLiveKSKitLyricSentenceView * _lyricTextView; // +0x18
    MMFinderLiveKSKitLyricSentence * _sentence; // +0x20
    double _maxLength; // +0x28
    MMFinderLiveKSKitLyricStyle * _lyricStyle; // +0x30
    long long _currState; // +0x38
    CGSize _displayStateSize; // +0x40
    CGSize _prepareStateSize; // +0x50
}
- (id)initWithLyricSentence:(id)arg1 maxLength:(double)arg2 lyricStyle:(id)arg3;
- (void)prepareToDisplay:(id /* block */)arg1;
- (void)startTranferPrepareStateAtPosition:(double)arg1 preferDuration:(double)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)tranferPrepareStateAtPositionDirectly:(double)arg1;
- (void)startTransferDisplayStateToPosition:(double)arg1 preferDuration:(double)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)startTranferDisappearStateWithPreferDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)onPositionChanged:(int)arg1;
- (void)updateLyricStyle:(id)arg1;
- (void)transferUIToPrepareBefore;
- (void)transferUIToPrepareAfter;
- (void)transferUIToDisplay;
- (void)transferUIToDisappear;
- (void)extractLyricWordListToDisplay:(id /* block */)arg1;
- (void)clearLyricWordsLabelLength:(id)arg1;
- (void)createLyricTextView:(id)arg1;
- (void)changeSizeOnOrientationChange;
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
- (double)maxLength;
- (void)setMaxLength:(double)arg1;
- (id)lyricStyle;
- (void)setLyricStyle:(id)arg1;
- (long long)currState;
- (void)setCurrState:(long long)arg1;
- (void).cxx_destruct;
@end

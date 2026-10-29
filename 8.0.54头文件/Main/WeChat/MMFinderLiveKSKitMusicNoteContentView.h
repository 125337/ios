@interface MMFinderLiveKSKitMusicNoteContentView : UIView
{
    BOOL _isStart; // +0x8
    int _currKalaPostion; // +0xc
    double _prepareAdvanceTimeOffset; // +0x10
    id /* block */ _noteContentGetNextBatchListCallback; // +0x18
    UIColor * _notesColor; // +0x20
    double _afterWardContentOffset; // +0x28
    double _afterWardTimeOffset; // +0x30
    double _advanceContentOffset; // +0x38
    double _displayAdvanceTimeOffset; // +0x40
    NSMutableArray * _displayingSegmentList; // +0x48
    NSMutableArray * _pendingSegmentList; // +0x50
}
- (id)init;
- (void)initDefaultDatas;
- (void)layoutSubviews;
- (void)updateAfterWardContentOffset:(double)arg1;
- (void)updateAfterWardTimeOffset;
- (void)updateAdvanceContentOffset:(double)arg1;
- (void)start;
- (void)stop;
- (void)onKSKitKalaPositionChanged:(int)arg1;
- (void)onNotifyTimeToPrepareNextBatchMusicNotes;
- (void)checkIsTimeToDisplayNextSegment;
- (BOOL)isCurrLastSegmentDisplayCompletely;
- (void)monitorLastSegmentDisplayCompletely;
- (void)startDisplaySegment:(id)arg1;
- (void)onSegmentMoveCompletely:(id)arg1;
- (void)checkDisOfKalaPositionAndSegmentDisplay:(id)arg1;
- (void)updateDisplayAdvanceTimeOffset;
- (void)updatePrepareAdvanceTimeOffset;
- (void)preparePendingSegment;
- (id)createMusicNoteSegmentView;
- (id)getNextBatchMusicNoteList;
- (void)clearDatas;
- (void)setNotesColor:(id)arg1;
- (double)prepareAdvanceTimeOffset;
- (void)setPrepareAdvanceTimeOffset:(double)arg1;
- (id /* block */)noteContentGetNextBatchListCallback;
- (void)setNoteContentGetNextBatchListCallback:(id /* block */)arg1;
- (id)notesColor;
- (BOOL)isStart;
- (void)setIsStart:(BOOL)arg1;
- (double)afterWardContentOffset;
- (void)setAfterWardContentOffset:(double)arg1;
- (double)afterWardTimeOffset;
- (void)setAfterWardTimeOffset:(double)arg1;
- (double)advanceContentOffset;
- (void)setAdvanceContentOffset:(double)arg1;
- (double)displayAdvanceTimeOffset;
- (void)setDisplayAdvanceTimeOffset:(double)arg1;
- (int)currKalaPostion;
- (void)setCurrKalaPostion:(int)arg1;
- (id)displayingSegmentList;
- (void)setDisplayingSegmentList:(id)arg1;
- (id)pendingSegmentList;
- (void)setPendingSegmentList:(id)arg1;
- (void).cxx_destruct;
@end


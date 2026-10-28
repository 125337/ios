@interface MMFinderLiveKSKitMusicNoteSegmentView : UIView
{
    BOOL _isAnimating; // +0x8
    int _beginTimeOffset; // +0xc
    int _endTimeOffset; // +0x10
    UIColor * _notesColor; // +0x18
    NSMutableArray * _musicNoteLineList; // +0x20
    double _currMaxContentWidth; // +0x28
    id /* block */ _moveOffsetChangeCallback; // +0x30
    CADisplayLink * _monitorDisplayLink; // +0x38
    id /* block */ _moveCompletion; // +0x40
}
- (id)initWithMusicNotes:(id)arg1;
- (void)createMusicNoteLines:(id)arg1;
- (void)addMusicNoteLinesToView;
- (void)layoutSubviews;
- (void)layoutMusicNoteLines;
- (double)preferWidth;
- (double)currentRight;
- (void)monitorSegmentMoveOffsetChange:(id /* block */)arg1;
- (void)cancelMonitorSegmentMoveOffsetChange;
- (void)startMove:(double)arg1 completion:(id /* block */)arg2;
- (void)startMoveOffsetMonitorIfNeed;
- (void)onMoveOffsetMonitorDisplaylink:(id)arg1;
- (void)cancelMoveOffsetMonitor;
- (void)onMoveCompleted;
- (BOOL)isStartMoveOffsetMonitor;
- (void)setNotesColor:(id)arg1;
- (int)beginTimeOffset;
- (void)setBeginTimeOffset:(int)arg1;
- (int)endTimeOffset;
- (void)setEndTimeOffset:(int)arg1;
- (id)notesColor;
- (id)musicNoteLineList;
- (void)setMusicNoteLineList:(id)arg1;
- (double)currMaxContentWidth;
- (void)setCurrMaxContentWidth:(double)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id /* block */)moveOffsetChangeCallback;
- (void)setMoveOffsetChangeCallback:(id /* block */)arg1;
- (id)monitorDisplayLink;
- (void)setMonitorDisplayLink:(id)arg1;
- (id /* block */)moveCompletion;
- (void)setMoveCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

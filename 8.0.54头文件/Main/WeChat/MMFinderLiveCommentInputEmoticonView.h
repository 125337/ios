@interface MMFinderLiveCommentInputEmoticonView : UIView
{
    BOOL _autoLoopAnimation; // +0x8
    MMLiveInputToolView * _liveInputView; // +0x10
    EmoticonBoardView * _emoticonBoardView; // +0x18
    MMLiveAddBoardView * _addBoardView; // +0x20
    MMFinderLiveTaskId * _liveTaskId; // +0x28
    MMFinderLiveSFBarrageCellView * _barragePreviewView; // +0x30
    UIView * _barragePreviewDescView; // +0x38
}
- (id)initWithLiveTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInputView;
- (void)layoutEmoticonBoardView;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadData;
- (void)reloadCurUserHeadImageViewIfNeed;
- (id)liveTask;
- (id)liveCommentInputViewPlaceholder;
- (void)delayAnimateBarrageIfNeeded;
- (void)runBarrageAnimation;
- (void)removeBarrageAnimation;
- (BOOL)isCurrentPortrait;
- (id)liveInputView;
- (void)setLiveInputView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)addBoardView;
- (void)setAddBoardView:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)barragePreviewView;
- (void)setBarragePreviewView:(id)arg1;
- (id)barragePreviewDescView;
- (void)setBarragePreviewDescView:(id)arg1;
- (BOOL)autoLoopAnimation;
- (void)setAutoLoopAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end


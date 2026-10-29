@interface MMFinderLiveCommentInputEmoticonView : UIView
{
    BOOL _autoLoopAnimation; // +0x8
    BOOL _isLastBigEmoticonEnabled; // +0x9
    id <MMFinderLiveCommentInputEmoticonViewDelegate> _delegate; // +0x10
    MMLiveInputToolView * _liveInputView; // +0x18
    EmoticonBoardView * _emoticonBoardView; // +0x20
    MMLiveVoiceInputView * _voiceInputView; // +0x28
    MMQuickSendEmoticonView * _quickSendEmoticonView; // +0x30
    MMFinderLiveTaskId * _liveTaskId; // +0x38
    MMFinderLiveSFBarrageCellView * _barragePreviewView; // +0x40
    UIView * _barragePreviewDescView; // +0x48
}
- (id)initWithLiveTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInputView;
- (void)layoutEmoticonBoardView;
- (void)layoutVoiceInputView;
- (void)layoutQuickSendEmoticonView;
- (void)bringSubviewToFront:(id)arg1;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)refreshEmoticonBoardViewType;
- (void)reloadCurUserHeadImageViewIfNeed;
- (id)liveTask;
- (id)liveCommentInputViewPlaceholder;
- (BOOL)checkEnableBigEmoticon;
- (void)delayAnimateBarrageIfNeeded;
- (void)runBarrageAnimation;
- (void)removeBarrageAnimation;
- (BOOL)isCurrentPortrait;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveInputView;
- (void)setLiveInputView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)voiceInputView;
- (void)setVoiceInputView:(id)arg1;
- (id)quickSendEmoticonView;
- (void)setQuickSendEmoticonView:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)barragePreviewView;
- (void)setBarragePreviewView:(id)arg1;
- (id)barragePreviewDescView;
- (void)setBarragePreviewDescView:(id)arg1;
- (BOOL)autoLoopAnimation;
- (void)setAutoLoopAnimation:(BOOL)arg1;
- (BOOL)isLastBigEmoticonEnabled;
- (void)setIsLastBigEmoticonEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

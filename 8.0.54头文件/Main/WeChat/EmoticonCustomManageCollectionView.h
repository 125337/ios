@interface EmoticonCustomManageCollectionView : MMLoadMoreCollectionView
{
    unsigned long long _autoScrollType; // +0x8
    double _speedPercent; // +0x10
    CADisplayLink * _scrollDisplayLink; // +0x18
}
- (void)setAutoScrollType:(unsigned long long)arg1;
- (void)cleanCurrentDisplayLink;
- (void)setSpeedPercent:(double)arg1;
- (void)autoScrollUp;
- (void)autoScrollDown;
- (double)scrollSpeed;
- (BOOL)canAutoScroll;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (unsigned long long)autoScrollType;
- (double)speedPercent;
- (id)scrollDisplayLink;
- (void)setScrollDisplayLink:(id)arg1;
- (void).cxx_destruct;
@end


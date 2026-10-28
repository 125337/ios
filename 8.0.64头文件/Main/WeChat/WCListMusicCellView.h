@interface WCListMusicCellView : WCListBaseCellView <MMMusicPlayerContollerDelegate>
{
    UIView * m_tailView; // +0x98
    NSMutableArray * _arrKVOImageView; // +0xa0
    MMMusicPlayerContoller * _playButton; // +0xa8
}
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
+ (id)musicTitleWithDataItem:(id)arg1;
+ (id)trimSingerNameWithDataItem:(id)arg1;
- (double)maxLabelWidth;
- (double)tailViewHeight;
- (void)dealloc;
- (void)initTailView;
- (void)initView;
- (id)musicTitle;
- (id)trimSingerName;
- (void)onClickEvent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onClickToPlayMusic:(id)arg1 playState:(long long)arg2 clickedOnBtn:(BOOL)arg3;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;
- (void).cxx_destruct;
@end

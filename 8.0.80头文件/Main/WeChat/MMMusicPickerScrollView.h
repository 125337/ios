@interface MMMusicPickerScrollView : MMUIView <UIScrollViewDelegate>
{
    BOOL _adaptsToContainerBounds; // +0x8
    id <MMMusicPickerScrollViewDelegate> _delegate; // +0x10
    UIScrollView * _scrollView; // +0x18
    NSMutableArray * _musicPickerContentViews; // +0x20
    unsigned long long _selectedIndex; // +0x28
    UITapGestureRecognizer * _tap; // +0x30
    NSString * _musicLogoName; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 musicLogoName:(id)arg2;
- (void)layoutSubviews;
- (void)setupMusicData:(id)arg1 withMoveTo:(int)arg2;
- (void)setCurrentContentState:(BOOL)arg1;
- (void)readyToPlay;
- (void)replay;
- (void)replayFromFlowInMs:(unsigned long long)arg1;
- (BOOL)isAnimating;
- (void)initData;
- (void)initView;
- (void)prepareScrollView:(id)arg1;
- (void)onChangeToNextIndex:(long long)arg1;
- (void)changeSelectStateForToNextIndex:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)tapAction:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)adaptsToContainerBounds;
- (void)setAdaptsToContainerBounds:(BOOL)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)musicPickerContentViews;
- (void)setMusicPickerContentViews:(id)arg1;
- (unsigned long long)selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)tap;
- (void)setTap:(id)arg1;
- (id)musicLogoName;
- (void)setMusicLogoName:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMMusicLyricsPanel : UIView <UITableViewDelegate, UITableViewDataSource, MMMusicLyricVcCalculatorDelegate, IMusicPlayerExt, UIGestureRecognizerDelegate>
{
    MMMusicInfo * m_musicInfo; // +0x8
    UITableView * _lyricsView; // +0x10
    unsigned int _currentLyricIndex; // +0x18
    unsigned int _lastLyricIndex; // +0x1c
    MMMusicLyricVcCalculator * m_lyricCalcuator; // +0x20
    MMMusicFadeOutView * m_lyricBgView; // +0x28
    UIView * m_bottomView; // +0x30
    MMUIButton * m_upBtn; // +0x38
    CGRect lyricsViewFrame; // +0x40
    BOOL isFirstLocation; // +0x60
    unsigned int _fixedLine; // +0x64
    BOOL _isAnimating; // +0x68
    unsigned long long mode; // +0x70
    id <MMMusicLyricsPanelDelegate> _delegate; // +0x78
    double _lyricsViewCenterY; // +0x80
    double _lyricsViewHeight; // +0x88
    double _upBtnTop; // +0x90
    double _animLimitLyricsViewMinHeight; // +0x98
    double _animLimitLyricsViewMaxHeight; // +0xa0
    double _animLimitUpBtnMinTop; // +0xa8
    double _animLimitUpBtnMaxTop; // +0xb0
    UITapGestureRecognizer * _exitTapGestureRecognizer; // +0xb8
}
- (id)initWithMusicInfo:(id)arg1 andLyricsViewFrame:(CGRect)arg2;
- (void)dealloc;
- (void)initView;
- (void)initLyricsListView;
- (void)initUpBtn;
- (void)updateLyrics:(id)arg1;
- (void)addBottomViewPanGesture:(id)arg1;
- (void)layoutSubviews;
- (void)setFixedLine:(unsigned int)arg1;
- (void)setAnimatingState:(BOOL)arg1;
- (void)onClickUpBtn;
- (void)close;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)textFontForSection:(unsigned int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldPlayLyricAnimation;
- (void)onCurrentLyricChangeTo:(id)arg1 timeToNext:(double)arg2 currIndex:(unsigned int)arg3;
- (void)updateUIWithCurrIndex:(unsigned int)arg1;
- (void)tryToLocateFirstProperLyricInRightPos;
- (void)tryToLocateProperLyricInTopArea;
- (void)tryToLocateProperLyricInBottomArea;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)tapGestureRecognized:(id)arg1;
- (void)markPreviousValue;
- (void)updateValueWithMovement:(double)arg1;
- (double)calculateNewMovement:(double)arg1;
- (void)resetValue;
- (BOOL)isOverMinLimit;
- (void)reset;
- (void)runCloseAnimation;
- (void)runCloseStep2Animation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)lyricsViewCenterY;
- (void)setLyricsViewCenterY:(double)arg1;
- (double)lyricsViewHeight;
- (void)setLyricsViewHeight:(double)arg1;
- (double)upBtnTop;
- (void)setUpBtnTop:(double)arg1;
- (double)animLimitLyricsViewMinHeight;
- (void)setAnimLimitLyricsViewMinHeight:(double)arg1;
- (double)animLimitLyricsViewMaxHeight;
- (void)setAnimLimitLyricsViewMaxHeight:(double)arg1;
- (double)animLimitUpBtnMinTop;
- (void)setAnimLimitUpBtnMinTop:(double)arg1;
- (double)animLimitUpBtnMaxTop;
- (void)setAnimLimitUpBtnMaxTop:(double)arg1;
- (id)exitTapGestureRecognizer;
- (void)setExitTapGestureRecognizer:(id)arg1;
- (void).cxx_destruct;
@end

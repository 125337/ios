@interface EGORefreshTableHeaderView : MMUIView
{
    int m_pulldownHeight; // +0x8
    int _state; // +0xc
    id <EGORefreshTableHeaderDelegate> delegate; // +0x10
    BOOL m_hasShake; // +0x18
    BOOL _useForTransparentNavBar; // +0x19
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onStateOfPulling;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)setState:(int)arg1;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)egoRefreshScrollViewDidEndDragging:(id)arg1;
- (void)egoRefreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)state;
- (BOOL)useForTransparentNavBar;
- (void)setUseForTransparentNavBar:(BOOL)arg1;
- (void).cxx_destruct;
@end

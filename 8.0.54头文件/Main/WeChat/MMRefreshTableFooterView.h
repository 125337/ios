@interface MMRefreshTableFooterView : MMUIControl
{
    unsigned long long m_state; // +0x8
    double m_heightLimit; // +0x10
    double m_refreshThresholdOffset; // +0x18
    id <MMRefreshTableFooterDelegate> m_delegate; // +0x20
    BOOL _m_bTop; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfNoData:(id)arg1;
- (void)resetState;
- (void)setState:(unsigned long long)arg1;
- (void)onClick;
- (void)manualTriggerLoading;
- (void)removeClickAction;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1 forces:(BOOL)arg2;
- (void)refreshScrollView:(id)arg1 didScrollAtOffset:(double)arg2;
- (void)refreshScrollViewDataSourceDidFinishedLoading:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned long long)m_state;
- (double)m_heightLimit;
- (void)setM_heightLimit:(double)arg1;
- (double)m_refreshThresholdOffset;
- (void)setM_refreshThresholdOffset:(double)arg1;
- (BOOL)m_bTop;
- (void)setM_bTop:(BOOL)arg1;
- (void).cxx_destruct;
@end


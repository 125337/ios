@interface ContactProfileRecommendSelectView : MMUIView
{
    NSArray * m_arrRecommendText; // +0x8
    NSMutableArray * m_arrRecommendButtons; // +0x10
    unsigned int m_recommendSelectType; // +0x18
    BOOL m_hadReportExp; // +0x1c
    id <ContactProfileRecommendSelectViewDelegate> _delegate; // +0x20
    NSString * _reportSessionId; // +0x28
    NSString * _nsbuttonHint; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initData;
- (void)updateViewWithArrRecommendText:(id)arg1 recommendSelectType:(unsigned int)arg2;
- (double)getBottonBuffer;
- (id)addButton:(id)arg1;
- (CGPoint)getPositionForView:(id)arg1 withWidth:(double)arg2 behindButton:(id)arg3;
- (unsigned int)getRecommendIndex:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)reportExp;
- (id)getDicReportParamsWithRecommendInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)nsbuttonHint;
- (void)setNsbuttonHint:(id)arg1;
- (void).cxx_destruct;
@end

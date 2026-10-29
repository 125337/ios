@interface WCPayT2BCCandidateSugBar : UIView <UIScrollViewDelegate, WCPayT2BCCandidateViewDelegate>
{
    id <WCPayT2BCCandidateSugBarDelegate> _m_delegate; // +0x8
    NSMutableArray * _m_resultsArray; // +0x10
    NSMutableArray * _m_candidateViewArray; // +0x18
    NSString * _m_inputText; // +0x20
    UIScrollView * _scrollView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)reloadCandidateViewWithMatchResults:(id)arg1 inputText:(id)arg2;
- (void)restScrollView;
- (void)reloadCandidateView;
- (void)onClickCandidateView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_resultsArray;
- (void)setM_resultsArray:(id)arg1;
- (id)m_candidateViewArray;
- (void)setM_candidateViewArray:(id)arg1;
- (id)m_inputText;
- (void)setM_inputText:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void).cxx_destruct;
@end

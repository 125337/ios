@interface EmoticonStoreFootView : MMRefreshTableFooterView
{
    unsigned int m_lineViewWidth; // +0x28
    MMUIActivityIndicatorView * m_activityIndicatorView; // +0x30
    UILabel * m_label; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)reset;
- (void)layoutSubviews;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)arg1;
- (void)onStateOfNoData:(id)arg1;
- (id)m_activityIndicatorView;
- (void)setM_activityIndicatorView:(id)arg1;
- (id)m_label;
- (void)setM_label:(id)arg1;
- (unsigned int)m_lineViewWidth;
- (void)setM_lineViewWidth:(unsigned int)arg1;
- (void).cxx_destruct;
@end


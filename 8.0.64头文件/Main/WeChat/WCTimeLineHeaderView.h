@interface WCTimeLineHeaderView : EGORefreshTableHeaderView
{
    MMActivityIndicator * m_reflashImageView; // +0x18
    UIImageView * m_tipBkg; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)_loadForAccessbility;
- (void)onStateOfPulling;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void).cxx_destruct;
@end

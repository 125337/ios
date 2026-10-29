@interface WCPayNoticeBannerView : UIView
{
    id <WCPayNoticeBannerViewDelegate> _m_delegate; // +0x8
    UILabel * _m_titleLabel; // +0x10
    NSString * _m_clickUrl; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateUrl:(id)arg1;
- (void)onTap:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_titleLabel;
- (void)setM_titleLabel:(id)arg1;
- (id)m_clickUrl;
- (void)setM_clickUrl:(id)arg1;
- (void).cxx_destruct;
@end


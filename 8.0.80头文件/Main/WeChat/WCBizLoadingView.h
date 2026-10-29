@interface WCBizLoadingView : UIView
{
    UIImageView * m_imageView; // +0x8
    UILabel * m_labelTitle; // +0x10
    UILabel * m_labelMsg; // +0x18
    UIImageView * backgroundView; // +0x20
    UIImageView * m_logoView; // +0x28
    BOOL m_bIgnoringInteractionEventsWhenLoading; // +0x30
}
- (id)init;
- (void)autoLayoutInCenter;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)usePayLogo;
- (void)setMessage:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)insideGetCurrentViewController;
- (void)updateFrame;
- (double)contentMaxWidth;
- (UIEdgeInsets)contentInsets;
- (BOOL)m_bIgnoringInteractionEventsWhenLoading;
- (void)setM_bIgnoringInteractionEventsWhenLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end

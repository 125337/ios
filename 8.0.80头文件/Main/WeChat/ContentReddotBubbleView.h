@interface ContentReddotBubbleView : UIView
{
    UIImageView * _m_arrowImageView; // +0x8
    UIImageView * _m_bubbleImageView; // +0x10
    UILabel * _m_contentLabel; // +0x18
    WCPayWebImageView * _m_iconImageView; // +0x20
    WCRedEnvelopesSelectSkinRedDotInfo * _m_reddotInfo; // +0x28
}
- (id)initWithReddotInfo:(id)arg1;
- (void)setupSubviews;
- (id)m_arrowImageView;
- (void)setM_arrowImageView:(id)arg1;
- (id)m_bubbleImageView;
- (void)setM_bubbleImageView:(id)arg1;
- (id)m_contentLabel;
- (void)setM_contentLabel:(id)arg1;
- (id)m_iconImageView;
- (void)setM_iconImageView:(id)arg1;
- (id)m_reddotInfo;
- (void)setM_reddotInfo:(id)arg1;
- (void).cxx_destruct;
@end

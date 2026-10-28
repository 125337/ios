@interface WCRedEnvelopesWishingRecommendSkinView : UIView
{
    BOOL _currentSkinIsWidgetSkin; // +0x8
    NSArray * _recommendSkinList; // +0x10
    NSString * _currentSkinURL; // +0x18
    WCPayWebImageView * _currentSkinImageView; // +0x20
    id <WCRedEnvelopesWishingRecommendSkinViewDelegate> _delegate; // +0x28
    UILabel * _m_leftAreaTitleLabel; // +0x30
    UILabel * _m_rightAreaTitleLabel; // +0x38
    UIView * _m_leftTitleView; // +0x40
    UIView * _m_sepLineView; // +0x48
}
- (id)initWithFrame:(CGRect)arg1 recommendSkinList:(id)arg2 currentSkinURL:(id)arg3 currentSkinIsWidgetSkin:(BOOL)arg4;
- (void)setupViews;
- (void)hideTitleLabel;
- (void)showTitleLabel;
- (void)onWCRedEnvelopesWishingRecommendSkinViewClickLeftArea;
- (void)onWCRedEnvelopesWishingRecommendSkinViewClickRightArea;
- (id)recommendSkinList;
- (void)setRecommendSkinList:(id)arg1;
- (id)currentSkinURL;
- (void)setCurrentSkinURL:(id)arg1;
- (id)currentSkinImageView;
- (void)setCurrentSkinImageView:(id)arg1;
- (BOOL)currentSkinIsWidgetSkin;
- (void)setCurrentSkinIsWidgetSkin:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_leftAreaTitleLabel;
- (void)setM_leftAreaTitleLabel:(id)arg1;
- (id)m_rightAreaTitleLabel;
- (void)setM_rightAreaTitleLabel:(id)arg1;
- (id)m_leftTitleView;
- (void)setM_leftTitleView:(id)arg1;
- (id)m_sepLineView;
- (void)setM_sepLineView:(id)arg1;
- (void).cxx_destruct;
@end

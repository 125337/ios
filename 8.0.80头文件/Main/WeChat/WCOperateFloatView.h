@interface WCOperateFloatView : UIView
{
    WCDataItem * m_item; // +0x8
    WCLikeButton * m_likeBtn; // +0x10
    UIButton * m_commentBtn; // +0x18
    UIImageView * m_bkgImageView; // +0x20
    UIImageView * m_lineView; // +0x28
    UIView * m_clipView; // +0x30
    UILabel * m_tipLabel; // +0x38
    UINavigationController * navigationController; // +0x40
    double m_deferHideUntil; // +0x48
    CGRect m_eggHeartRect; // +0x50
    BOOL _isEnhanceInteractionEnabled; // +0x70
    BOOL _isPerformHideAnimation; // +0x71
    id /* block */ _hideOperation; // +0x78
    double _likeHideDelay; // +0x80
    double _likeHideDuration; // +0x88
    WCOperateFloatViewParams * _params; // +0x90
}
- (double)buttonWidth:(id)arg1;
- (id)initWithParams:(id)arg1;
- (void)initLikeButton;
- (void)initLineView;
- (void)initCommentButton;
- (void)updateCommmentButton:(BOOL)arg1;
- (void)updateBackgroundImageView:(BOOL)arg1;
- (void)showWithItemData:(id)arg1 tipPoint:(CGPoint)arg2;
- (void)animationDidStop;
- (void)animationDidStopHide;
- (void)setDeferredHideForLikeEasterEgg:(BOOL)arg1;
- (void)anchorDeferredHideToEasterEggStart;
- (void)onLikeTouchCancel:(id)arg1;
- (void)recoverDefaultHideForLikeEasterEggIfNeeded;
- (CGRect)likeHeartRectInView:(id)arg1;
- (void)hide;
- (void)onLikeItem:(id)arg1;
- (id)m_item;
- (id)m_likeBtn;
- (id)m_commentBtn;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id /* block */)hideOperation;
- (void)setHideOperation:(id /* block */)arg1;
- (double)likeHideDelay;
- (void)setLikeHideDelay:(double)arg1;
- (double)likeHideDuration;
- (void)setLikeHideDuration:(double)arg1;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (BOOL)isPerformHideAnimation;
- (void)setIsPerformHideAnimation:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

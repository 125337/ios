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
    BOOL _isEnhanceInteractionEnabled; // +0x48
    BOOL _isPerformHideAnimation; // +0x49
    id /* block */ _hideOperation; // +0x50
    WCOperateFloatViewParams * _params; // +0x58
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
- (void)hide;
- (void)onLikeItem:(id)arg1;
- (id)m_item;
- (id)m_likeBtn;
- (id)m_commentBtn;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id /* block */)hideOperation;
- (void)setHideOperation:(id /* block */)arg1;
- (BOOL)isEnhanceInteractionEnabled;
- (void)setIsEnhanceInteractionEnabled:(BOOL)arg1;
- (BOOL)isPerformHideAnimation;
- (void)setIsPerformHideAnimation:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

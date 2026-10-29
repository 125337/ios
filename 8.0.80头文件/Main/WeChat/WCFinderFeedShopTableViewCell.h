@interface WCFinderFeedShopTableViewCell : WCFinderTableViewCell <WCFinderFeedbackViewDelegate, EcsFinderFeedSingleProductViewDelegate, WCGeneralMonitorCellProtocol, WCFinderFocusCellProtocol, WCFinderFeedOverlayHosting>
{
    BOOL _showScrollTipsView; // +0x8
    id <WCFinderFeedShopTableViewCellDelegate> _delegate; // +0x10
    WCFinderBGMPlayer * _bgmPlayer; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    EcsFinderFeedProductContainerView * _ecsView; // +0x28
    WCFinderGradientView * _gradientView; // +0x30
    unsigned long long _exposeTimestamp; // +0x38
}
- (id)finderFeedOverlayHostView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)arg1;
- (void)willBeginDisplay:(long long)arg1;
- (void)didBeginDisplay;
- (void)didEndDisplay:(long long)arg1;
- (void)prepareForPreload;
- (void)prepareForReuse;
- (void)showFeedbackViewAtFeedbackBtnFrame:(CGRect)arg1;
- (void)_showFeedbackViewAtFeedbackBtnFrame:(CGRect)arg1;
- (id)ecsVM;
- (void)ecsSingleProductView:(id)arg1 onClickFeedback:(CGRect)arg2;
- (BOOL)shouldCaluculateAsFocusCell;
- (BOOL)currentMediaIsPlay;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)stopVideoIfSupport;
- (void)cellStartExposeReportAction;
- (void)doCellEndExposeAction;
- (void)requestUnlikeReasonWithLoading:(BOOL)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)preLoadUnlikeReason;
- (void)onFinderFeedbackViewLikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDislikeButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewComplainButtonDidClick:(id)arg1;
- (void)onFinderFeedbackViewDidCancel:(id)arg1;
- (void)onFinderFeedbackView:(id)arg1 shouldCloseWithReasons:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (id)sessionReportJson;
- (id)finderReportJson;
- (id)ecsReportJson;
- (id)getGeneralMonitorCellBizId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bgmPlayer;
- (void)setBgmPlayer:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)ecsView;
- (void)setEcsView:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (BOOL)showScrollTipsView;
- (void)setShowScrollTipsView:(BOOL)arg1;
- (unsigned long long)exposeTimestamp;
- (void)setExposeTimestamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderContentHeaderView : UIView <WCFinderFeedContentTextClickActionDelegate, WCFinderJumpInfoPanelViewDelegate, WCFinderPromoteOPLogExt>
{
    BOOL _isShow; // +0x8
    int _scene; // +0xc
    id <WCFinderContentHeaderViewDelegate> _delegate; // +0x10
    WCFinderFeedContentTouchExpandTextView * _textView; // +0x18
    WCFinderJumpInfoPanelView * _linkJumpPanelView; // +0x20
    WCFinderJumpInfoPanelView * _controversyTipsPanelView; // +0x28
    WCFinderMaskButton * _eventButton; // +0x30
    WCFinderMaskButton * _poiButton; // +0x38
    unsigned long long _viewerScene; // +0x40
    WCFinderFeedContentVM * _contentVM; // +0x48
    unsigned long long _translateType; // +0x50
    NSString * _translateContent; // +0x58
    NSString * _translateSource; // +0x60
    WCFinderHeadImageView * _headerImageView; // +0x68
    UILabel * _nickNameLabel; // +0x70
    UILabel * _creatTimeAndIpRegionLabel; // +0x78
    UIImageView * _finderIconImageView; // +0x80
    WCFinderAuthInfoIconView * _authorIcon; // +0x88
    UILabel * _headerTagLabel; // +0x90
    MMUIButton * _moreActionButton; // +0x98
    MMUIButton * _rightTipsBtn; // +0xa0
    UIView * _descAndLinksContainer; // +0xa8
    NSMutableArray * _textViewElementAccessibilityViews; // +0xb0
    WCFinderCommentTranslateView * _translateView; // +0xb8
    NSMutableArray * _actionViewsAboveJumpPanelView; // +0xc0
    WCFinderMaskButton * _linkButton; // +0xc8
    WCFinderMaskButton * _collectionButton; // +0xd0
    WCFinderContentHeaderExpandButton * _expandButton; // +0xd8
    WCFinderMaskButton * _modFeedButton; // +0xe0
    WCFinderCommentHeatUpTipsView * _heatUpTipsView; // +0xe8
    CGPoint _hitPoint; // +0xf0
}
+ (unsigned long long)headerContentFlagByContentVM:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)setIsShow:(BOOL)arg1;
- (void)setupUI;
- (void)longPressAction:(id)arg1;
- (void)onClickRightTipsTextViewAction;
- (id)modFeedButton;
- (id)rightTipsBtn;
- (id)linkJumpPanelView;
- (id)controversyTipsPanelView;
- (void)layoutSubviews;
- (void)layoutView;
- (double)_layoutDescAndLinksUnder:(double)arg1 contentWidth:(double)arg2 contentLeading:(double)arg3;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)hasJumpInfoViewWithBusinessType:(int)arg1;
- (BOOL)shouldFoldDescAndLinks:(unsigned long long)arg1;
- (id)getLastViewInFoldingDescAndLinksContainer:(unsigned long long)arg1;
- (void)expandDescAndLinksAction;
- (BOOL)isDescAndLinksFolded;
- (void)updateWithContentVM:(id)arg1;
- (void)addAccessibilityElementsInView:(id)arg1 toArray:(id)arg2;
- (void)updateAccessibilityElementsOrder;
- (void)bindCommentJumpPanelSessionReport;
- (BOOL)updateJumpInfoContainerWithContentVM:(id)arg1;
- (BOOL)updateControversyTips;
- (BOOL)updatePromotion;
- (id)createTimeAndIpRegionText;
- (void)handleMusicFilterSwitch:(id)arg1;
- (void)resetTrucation;
- (void)refreshAuthor;
- (void)_refreshFinderLogoIcon;
- (void)changeExpandStatus:(BOOL)arg1;
- (void)updateTranslateView;
- (void)setShouldForceExpand:(BOOL)arg1;
- (BOOL)shouldForceExpand;
- (id)commonReportParamsForExpandButton:(BOOL)arg1;
- (void)clickHeaderAvatar:(id)arg1;
- (void)clickHeaderNickname:(id)arg1;
- (void)clickPOIAction:(id)arg1;
- (void)clickModFeedButtonAction:(id)arg1;
- (void)clickEventAction:(id)arg1;
- (void)clickLinkAction;
- (void)clickCollectionAction;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(int)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2 isTouchExpand:(BOOL)arg3;
- (void)updateTranslateType:(unsigned long long)arg1;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)videoPauseState;
- (id)videoTid;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)onClickMoreAction;
- (void)onCommentPromotePublicFlagChange:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (CGPoint)hitPoint;
- (void)setHitPoint:(CGPoint)arg1;
- (void)setLinkJumpPanelView:(id)arg1;
- (void)setControversyTipsPanelView:(id)arg1;
- (id)eventButton;
- (void)setEventButton:(id)arg1;
- (id)poiButton;
- (void)setPoiButton:(id)arg1;
- (BOOL)isShow;
- (unsigned long long)viewerScene;
- (void)setViewerScene:(unsigned long long)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)translateType;
- (void)setTranslateType:(unsigned long long)arg1;
- (id)translateContent;
- (void)setTranslateContent:(id)arg1;
- (id)translateSource;
- (void)setTranslateSource:(id)arg1;
- (id)headerImageView;
- (void)setHeaderImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)creatTimeAndIpRegionLabel;
- (void)setCreatTimeAndIpRegionLabel:(id)arg1;
- (id)finderIconImageView;
- (void)setFinderIconImageView:(id)arg1;
- (id)authorIcon;
- (void)setAuthorIcon:(id)arg1;
- (id)headerTagLabel;
- (void)setHeaderTagLabel:(id)arg1;
- (id)moreActionButton;
- (void)setMoreActionButton:(id)arg1;
- (void)setRightTipsBtn:(id)arg1;
- (id)descAndLinksContainer;
- (void)setDescAndLinksContainer:(id)arg1;
- (id)textViewElementAccessibilityViews;
- (void)setTextViewElementAccessibilityViews:(id)arg1;
- (id)translateView;
- (void)setTranslateView:(id)arg1;
- (id)actionViewsAboveJumpPanelView;
- (void)setActionViewsAboveJumpPanelView:(id)arg1;
- (id)linkButton;
- (void)setLinkButton:(id)arg1;
- (id)collectionButton;
- (void)setCollectionButton:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (void)setModFeedButton:(id)arg1;
- (id)heatUpTipsView;
- (void)setHeatUpTipsView:(id)arg1;
- (void).cxx_destruct;
@end

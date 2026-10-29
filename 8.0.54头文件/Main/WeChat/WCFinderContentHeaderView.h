@interface WCFinderContentHeaderView : UIView <WCFinderFeedContentTextClickActionDelegate, WCFinderJumpInfoPanelViewDelegate>
{
    BOOL _isShow; // +0x8
    BOOL _isExpend; // +0x9
    int _scene; // +0xc
    id <WCFinderContentHeaderViewDelegate> _delegate; // +0x10
    WCFinderFeedContentTouchExpandTextView * _textView; // +0x18
    WCFinderJumpInfoPanelView * _linkJumpPanelView; // +0x20
    WCFinderJumpInfoPanelView * _operatingPanelView; // +0x28
    WCFinderJumpInfoPanelView * _rightPanelView; // +0x30
    WCFinderMaskButton * _eventButton; // +0x38
    WCFinderMaskButton * _poiButton; // +0x40
    unsigned long long _viewerScene; // +0x48
    WCFinderFeedContentVM * _contentVM; // +0x50
    unsigned long long _translateType; // +0x58
    NSString * _translateContent; // +0x60
    NSString * _translateSource; // +0x68
    WCFinderHeadImageView * _headerImageView; // +0x70
    UILabel * _nickNameLabel; // +0x78
    UILabel * _creatTimeAndIpRegionLabel; // +0x80
    WCFinderAuthInfoIconView * _authorIcon; // +0x88
    UILabel * _headerTagLabel; // +0x90
    MMUIButton * _moreActionButton; // +0x98
    WCFinderMaskButton * _linkButton; // +0xa0
    WCFinderMaskButton * _collectionButton; // +0xa8
    MMUIButton * _rightTipsBtn; // +0xb0
    NSMutableArray * _textViewElementAccessibilityViews; // +0xb8
    WCFinderCommentHeatUpTipsView * _heatUpTipsView; // +0xc0
    WCFinderCommentTranslateView * _translateView; // +0xc8
    WCFinderMaskButton * _modFeedButton; // +0xd0
    CGPoint _hitPoint; // +0xd8
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
- (id)operatingPanelView;
- (id)rightPanelView;
- (void)layoutSubviews;
- (void)layoutView;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)hasJumpInfoViewWithBusinessType:(int)arg1;
- (void)updateWithContentVM:(id)arg1;
- (void)bindCommentJumpPanelSessionReport;
- (BOOL)updateJumpInfoContainerWithContentVM:(id)arg1;
- (BOOL)updatePromotion;
- (id)createTimeAndIpRegionText;
- (void)handleMusicFilterSwitch:(id)arg1;
- (void)resetTrucation;
- (void)refreshAuthor;
- (void)changeExpandStatus:(BOOL)arg1;
- (void)updateTranslateView;
- (void)clickHeaderAvatar:(id)arg1;
- (void)clickHeaderNickname:(id)arg1;
- (void)clickPOIAction:(id)arg1;
- (void)clickModFeedButtonAction:(id)arg1;
- (void)clickEventAction:(id)arg1;
- (void)clickLinkAction;
- (void)clickCollectionAction;
- (void)onFinderJumpInfoViewDidClick:(id)arg1;
- (void)onFinderJumpInfoViewDidClick:(id)arg1 inArea:(unsigned long long)arg2;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2 isTouchExpand:(BOOL)arg3;
- (void)updateTranslateType:(unsigned long long)arg1;
- (void)onFeedContentTextView:(id)arg1 clickTopicText:(id)arg2;
- (void)onFeedContentTextView:(id)arg1 clickMentionUsername:(id)arg2 nickname:(id)arg3;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)videoPauseState;
- (id)videoTid;
- (void)onFeedContentTextView:(id)arg1 clickContentUserName:(id)arg2;
- (void)onClickMoreAction;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (CGPoint)hitPoint;
- (void)setHitPoint:(CGPoint)arg1;
- (void)setLinkJumpPanelView:(id)arg1;
- (void)setOperatingPanelView:(id)arg1;
- (void)setRightPanelView:(id)arg1;
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
- (id)authorIcon;
- (void)setAuthorIcon:(id)arg1;
- (id)headerTagLabel;
- (void)setHeaderTagLabel:(id)arg1;
- (id)moreActionButton;
- (void)setMoreActionButton:(id)arg1;
- (id)linkButton;
- (void)setLinkButton:(id)arg1;
- (id)collectionButton;
- (void)setCollectionButton:(id)arg1;
- (void)setRightTipsBtn:(id)arg1;
- (BOOL)isExpend;
- (void)setIsExpend:(BOOL)arg1;
- (id)textViewElementAccessibilityViews;
- (void)setTextViewElementAccessibilityViews:(id)arg1;
- (id)heatUpTipsView;
- (void)setHeatUpTipsView:(id)arg1;
- (id)translateView;
- (void)setTranslateView:(id)arg1;
- (void)setModFeedButton:(id)arg1;
- (void).cxx_destruct;
@end


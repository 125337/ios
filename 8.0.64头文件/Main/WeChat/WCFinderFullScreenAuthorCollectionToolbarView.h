@interface WCFinderFullScreenAuthorCollectionToolbarView : UIView <WCFinderFeedToolbarActionExt>
{
    BOOL _isCommentClose; // +0x8
    BOOL _eyeShowEntrance; // +0x9
    BOOL _hasShowAbnormal; // +0xa
    BOOL _isPrivateState; // +0xb
    BOOL _useEyeStyle; // +0xc
    id <WCFinderFeedToolbarActionDelegate> _delegate; // +0x10
    NSString * _tid; // +0x18
    MMUIButton * _viewIconBtn; // +0x20
    UIButton * _viewNumView; // +0x28
    unsigned long long _viewCount; // +0x30
    WCFinderAuthorToolbarItemView * _thumbLikeItemView; // +0x38
    unsigned long long _thumbLikeCount; // +0x40
    WCFinderAuthorToolbarItemView * _forwardItemView; // +0x48
    unsigned long long _forwardCount; // +0x50
    WCFinderAuthorToolbarItemView * _heartLikeItemView; // +0x58
    unsigned long long _heartLikeCount; // +0x60
    WCFinderAuthorToolbarItemView * _commentItemView; // +0x68
    unsigned long long _commentCount; // +0x70
    unsigned long long _wxStatusRefCount; // +0x78
    WCFinderFeedContentVM * _contentVM; // +0x80
    NSDictionary * _eyeReportInfo; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubView;
- (void)adjustUIMargin;
- (void)adjustUIMarginAgain;
- (void)adjustUIMarginThird;
- (void)adjustUIMarginFourth;
- (BOOL)testLayoutBeauty;
- (void)adjustUICenterY;
- (void)adjustUIMargin:(double)arg1;
- (void)resetLabelFontSize:(double)arg1;
- (id)thumbLikeItemView;
- (id)forwardItemView;
- (id)heartLikeItemView;
- (id)commentItemView;
- (id)viewNumView;
- (id)viewIconBtn;
- (void)updateViewIconStyle:(BOOL)arg1 private:(BOOL)arg2 abnormal:(BOOL)arg3;
- (void)resetButtonEdgeInset:(id)arg1;
- (void)updateEyeViewsPosition;
- (void)didClickLikeAction;
- (void)didClickCommentAction;
- (void)didClickForwardAction;
- (void)didClickCollectionAction;
- (void)didClickViewIconAction;
- (void)updateUIWithContentVM:(id)arg1 commentClose:(BOOL)arg2 allowForward:(BOOL)arg3 allowFav:(BOOL)arg4 allowLike:(BOOL)arg5 allowComment:(BOOL)arg6;
- (void)updateThumbLikeView;
- (void)updateForwardView;
- (void)updateHeartLikeView;
- (void)updateCommentView;
- (void)_setDynamicIconWithKey:(id)arg1 forView:(id)arg2 color:(id)arg3;
- (void)didClickShareBtn:(id)arg1;
- (void)updateViewView:(BOOL)arg1;
- (void)bindWithTid:(id)arg1;
- (void)cleanDataEntraceReportData;
- (void)updatePrivateState:(BOOL)arg1 entranceStyle:(long long)arg2 commentScene:(int)arg3 feedId:(id)arg4;
- (id)viewEyeView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void)setViewIconBtn:(id)arg1;
- (void)setViewNumView:(id)arg1;
- (unsigned long long)viewCount;
- (void)setViewCount:(unsigned long long)arg1;
- (void)setThumbLikeItemView:(id)arg1;
- (unsigned long long)thumbLikeCount;
- (void)setThumbLikeCount:(unsigned long long)arg1;
- (void)setForwardItemView:(id)arg1;
- (unsigned long long)forwardCount;
- (void)setForwardCount:(unsigned long long)arg1;
- (void)setHeartLikeItemView:(id)arg1;
- (unsigned long long)heartLikeCount;
- (void)setHeartLikeCount:(unsigned long long)arg1;
- (void)setCommentItemView:(id)arg1;
- (unsigned long long)commentCount;
- (void)setCommentCount:(unsigned long long)arg1;
- (BOOL)isCommentClose;
- (void)setIsCommentClose:(BOOL)arg1;
- (unsigned long long)wxStatusRefCount;
- (void)setWxStatusRefCount:(unsigned long long)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)eyeShowEntrance;
- (void)setEyeShowEntrance:(BOOL)arg1;
- (BOOL)hasShowAbnormal;
- (void)setHasShowAbnormal:(BOOL)arg1;
- (BOOL)isPrivateState;
- (void)setIsPrivateState:(BOOL)arg1;
- (BOOL)useEyeStyle;
- (void)setUseEyeStyle:(BOOL)arg1;
- (id)eyeReportInfo;
- (void)setEyeReportInfo:(id)arg1;
- (void).cxx_destruct;
@end

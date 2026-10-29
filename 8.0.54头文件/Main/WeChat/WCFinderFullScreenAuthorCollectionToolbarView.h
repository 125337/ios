@interface WCFinderFullScreenAuthorCollectionToolbarView : UIView <WCFinderFeedToolbarActionExt>
{
    BOOL _allowCollect; // +0x8
    BOOL _allowForward; // +0x9
    BOOL _allowLike; // +0xa
    BOOL _isCommentClose; // +0xb
    BOOL _allowComment; // +0xc
    BOOL _eyeShowEntrance; // +0xd
    BOOL _hasShowAbnormal; // +0xe
    BOOL _isPrivateState; // +0xf
    BOOL _useEyeStyle; // +0x10
    id <WCFinderFeedToolbarActionDelegate> _delegate; // +0x18
    NSString * _tid; // +0x20
    MMUIButton * _collectionIconBtn; // +0x28
    InteractionLabel * _collectionNumLabel; // +0x30
    unsigned long long _collectionCount; // +0x38
    MMUIButton * _viewIconBtn; // +0x40
    UIButton * _viewNumView; // +0x48
    unsigned long long _viewCount; // +0x50
    MMUIButton * _forwardIconBtn; // +0x58
    InteractionLabel * _forwardLabel; // +0x60
    unsigned long long _forwardCount; // +0x68
    MMUIButton * _likeIconBtn; // +0x70
    InteractionLabel * _likeNumLabel; // +0x78
    unsigned long long _likeCount; // +0x80
    MMUIButton * _commentIconBtn; // +0x88
    InteractionLabel * _commentNumLabel; // +0x90
    unsigned long long _commentCount; // +0x98
    unsigned long long _wxStatusRefCount; // +0xa0
    WCFinderFeedContentVM * _contentVM; // +0xa8
    NSDictionary * _eyeReportInfo; // +0xb0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubView;
- (void)adjustUIMargin;
- (void)adjustUIMarginAgain;
- (void)adjustUIMarginThird;
- (void)adjustUIMarginFourth;
- (void)adjustUICenterY;
- (void)adjustUIMargin:(double)arg1;
- (void)resetLabelFontSize:(double)arg1;
- (id)collectionNumLabel;
- (id)collectionIconBtn;
- (id)viewNumView;
- (id)viewIconBtn;
- (void)updateViewIconStyle:(BOOL)arg1 private:(BOOL)arg2 abnormal:(BOOL)arg3;
- (void)resetButtonEdgeInset:(id)arg1;
- (void)updateEyeViewsPosition;
- (id)likeNumLabel;
- (id)likeIconBtn;
- (id)commentNumLabel;
- (id)commentIconBtn;
- (id)forwardLabel;
- (id)forwardIconBtn;
- (void)didClickLikeAction;
- (void)didClickCommentAction;
- (void)didClickForwardAction;
- (void)didClickCollectionAction;
- (void)didClickViewIconAction;
- (void)updateUIWithContentVM:(id)arg1 commentClose:(BOOL)arg2 allowForward:(BOOL)arg3 allowFav:(BOOL)arg4 allowLike:(BOOL)arg5 allowComment:(BOOL)arg6;
- (void)updateLikeView:(BOOL)arg1;
- (void)updateCommentView:(BOOL)arg1;
- (void)updateForwardView:(BOOL)arg1;
- (void)didClickShareBtn:(id)arg1;
- (void)updateLikeBtn:(BOOL)arg1;
- (void)updateCommentBtn:(BOOL)arg1;
- (void)updateForwardBtn:(BOOL)arg1;
- (void)updateCollectionView:(BOOL)arg1;
- (void)updateCollectBtn:(BOOL)arg1;
- (void)updateViewView:(BOOL)arg1;
- (void)bindWithTid:(id)arg1;
- (void)cleanDataEntraceReportData;
- (void)updatePrivateState:(BOOL)arg1 entranceStyle:(long long)arg2 commentScene:(int)arg3 feedId:(id)arg4;
- (id)viewEyeView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (void)setCollectionIconBtn:(id)arg1;
- (void)setCollectionNumLabel:(id)arg1;
- (unsigned long long)collectionCount;
- (void)setCollectionCount:(unsigned long long)arg1;
- (BOOL)allowCollect;
- (void)setAllowCollect:(BOOL)arg1;
- (void)setViewIconBtn:(id)arg1;
- (void)setViewNumView:(id)arg1;
- (unsigned long long)viewCount;
- (void)setViewCount:(unsigned long long)arg1;
- (void)setForwardIconBtn:(id)arg1;
- (void)setForwardLabel:(id)arg1;
- (unsigned long long)forwardCount;
- (void)setForwardCount:(unsigned long long)arg1;
- (BOOL)allowForward;
- (void)setAllowForward:(BOOL)arg1;
- (void)setLikeIconBtn:(id)arg1;
- (void)setLikeNumLabel:(id)arg1;
- (unsigned long long)likeCount;
- (void)setLikeCount:(unsigned long long)arg1;
- (BOOL)allowLike;
- (void)setAllowLike:(BOOL)arg1;
- (BOOL)isCommentClose;
- (void)setIsCommentClose:(BOOL)arg1;
- (void)setCommentIconBtn:(id)arg1;
- (void)setCommentNumLabel:(id)arg1;
- (unsigned long long)commentCount;
- (void)setCommentCount:(unsigned long long)arg1;
- (BOOL)allowComment;
- (void)setAllowComment:(BOOL)arg1;
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


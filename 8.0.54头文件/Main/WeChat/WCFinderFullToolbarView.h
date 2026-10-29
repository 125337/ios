@interface WCFinderFullToolbarView : UIView <WCFinderFeedToolbarActionDelegate, WCFinderFeedRetryToolBarDelegate, WCFinderFeedUploadingToolBarDelegate, WCFinderFeedContentVMExt, WCFinderFeedNotRealNameToolbarViewDelegate>
{
    unsigned long long _contentStatus; // +0x8
    id <WCFinderFullToolbarViewDelegate> _delegate; // +0x10
    unsigned long long _toolBarStyle; // +0x18
    UIView * _toolbarView; // +0x20
    WCFinderFeedContentVM * _contentVM; // +0x28
}
+ (double)defaultWidthWithToolBarStyle:(unsigned long long)arg1;
+ (double)defaultHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)unRegisterAllKeyExtension;
- (void)updateToolBarWithContentVM:(id)arg1 toolBarStyle:(unsigned long long)arg2 toolbarDisableConfig:(unsigned long long)arg3;
- (long long)toolbarEyeStyleForContentVM:(id)arg1;
- (BOOL)isShowingLikeEducateTips;
- (void)cellDidEndDisplayingWithContentVM:(id)arg1 toolBarStyle:(unsigned long long)arg2;
- (void)initToolbarViewWithStyle:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)endExposeAction;
- (CGRect)getLikeButtonItemImageViewFrameOnFullView;
- (void)updatePrivateState:(BOOL)arg1;
- (void)cleanDataEntraceReportData;
- (id)getLiveNormalToolBar;
- (id)getAuthorNormalToolBar;
- (id)getAuthorUploadFailToolBar;
- (id)getAuthorUploadFailWithoutRetryToolBar;
- (id)getAuthorCDNLargeFailWithoutRetryToolBar;
- (id)getFileNotExistFailWithoutRetryToolBar;
- (id)getEventNotExistFailWithoutRetryToolBar;
- (id)getRetryToolBarWithErrorTips:(id)arg1 errorReason:(id)arg2 buttonOptionFlag:(unsigned long long)arg3;
- (id)getAuthorUploadingToolBar;
- (id)getCollectionToolbar;
- (id)getAuthorNotRealNameToolBar;
- (void)finderNotRealNameToolBarClickCancel:(id)arg1;
- (void)finderNotRealNameToolBarClickRetry:(id)arg1;
- (void)finderNotRealNameToolBarClickRealNameLink:(id)arg1;
- (void)viewAllCommentAction;
- (void)finderAuthorClickAllLikeAction;
- (void)finderAuthorClickAllFavAction;
- (void)finderAuthorClickAllViewBtn;
- (void)triangleShadowViewHideChanged:(BOOL)arg1;
- (void)willClickLikeAction:(BOOL)arg1;
- (void)didClickLikeAction:(BOOL)arg1;
- (BOOL)isToolbarEnableClickLike;
- (void)willClickCollectionAction;
- (void)didClickCollectionAction;
- (void)didClickShareAction:(id)arg1;
- (void)finderFeedRetryToolBarClickCancel:(id)arg1;
- (void)finderFeedRetryToolBarClickRetry:(id)arg1;
- (void)finderFeedUploadingToolBarClickCancel:(id)arg1;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 commentDataChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 changeUploadStatus:(id)arg2;
- (void)onFeedContent:(id)arg1 commentOpenStatueChanged:(id)arg2;
- (void)onFeedContent:(id)arg1 favDataChanged:(id)arg2;
- (id)viewEyeView;
- (void)clickRecommendUrl:(id)arg1;
- (void)updateLikeTipsShowState;
- (unsigned long long)contentStatus;
- (void)setContentStatus:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)toolBarStyle;
- (void)setToolBarStyle:(unsigned long long)arg1;
- (id)toolbarView;
- (void)setToolbarView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end


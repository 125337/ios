@interface MMFinderLiveReservePageSheet : MMLiveHalfScreenPanelView <MMPageSheetAdapterDelegate, MMFinderLiveReserveViewModelObserver>
{
    id /* block */ _jsapiSuccessBlock; // +0x8
    UIView * _backgroundView; // +0x10
    UIScrollView * _containerScrollView; // +0x18
    UIScrollView * _landsacpeDescContentScrollView; // +0x20
    MMUIButton * _closeButton; // +0x28
    WCFinderHeadImageView * _headerView; // +0x30
    MMCPLabel * _finderNameLabel; // +0x38
    WCFinderAuthInfoIconView * _proofIconView; // +0x40
    UIView * _sourceView; // +0x48
    MMUILabel * _sourceLabel; // +0x50
    UIImageView * _sourceIcon; // +0x58
    MMCPLabel * _reserveTimeLabel; // +0x60
    MMCPLabel * _introductionLabel; // +0x68
    UIButton * _actionButton; // +0x70
    MMPageSheetAdapter * _pageSheetAdapter; // +0x78
    NSMutableArray * _viewList; // +0x80
    MMFinderLiveReserveViewModel * _viewModel; // +0x88
}
- (id)initWithGetLiveNoticeResponse:(id)arg1 gMsgID:(id)arg2 frame:(CGRect)arg3 fromVC:(id)arg4;
- (void)setReportCommentScene:(id)arg1 sceneNote:(id)arg2 noticeBussinessDic:(id)arg3;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutLandscapeContentViews;
- (BOOL)isLandscape;
- (void)layoutHalfScreenContentView;
- (id)closeButton;
- (id)headerView;
- (id)finderNameLabel;
- (id)proofIconView;
- (id)sourceView;
- (id)sourceLabel;
- (id)sourceIcon;
- (id)reserveTimeLabel;
- (id)introductionLabel;
- (id)actionButton;
- (void)layoutActionButtonWithType:(unsigned long long)arg1;
- (void)openWithAnimation:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)closeWithAnimation:(BOOL)arg1;
- (id)provideButtonWithReserveStatus:(unsigned long long)arg1;
- (void)onTappedCloseView;
- (void)onTappedLiveActionButton;
- (void)onTappedCloseButton;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)onNeedDismissView;
- (void)onViewModelWorkFinished;
- (id /* block */)jsapiSuccessBlock;
- (void)setJsapiSuccessBlock:(id /* block */)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)containerScrollView;
- (void)setContainerScrollView:(id)arg1;
- (id)landsacpeDescContentScrollView;
- (void)setLandsacpeDescContentScrollView:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setFinderNameLabel:(id)arg1;
- (void)setProofIconView:(id)arg1;
- (void)setSourceView:(id)arg1;
- (void)setSourceLabel:(id)arg1;
- (void)setSourceIcon:(id)arg1;
- (void)setReserveTimeLabel:(id)arg1;
- (void)setIntroductionLabel:(id)arg1;
- (void)setActionButton:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id)viewList;
- (void)setViewList:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

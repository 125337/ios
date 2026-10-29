@interface MMFinderLiveListenPromotePubbleContentView : MMFinderLivePromotePubbleContentView
{
    BOOL _downLoadImageSuccess; // +0x8
    MMWebImageView * _backgroundImgView; // +0x10
    MMWebImageView * _titleImgView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _descLabel; // +0x28
    FinderLiveListenPromoteInfo * _listenPromoteInfo; // +0x30
    MMUIButton * _actionButton; // +0x38
}
+ (void)preloadListenBgWithPromoteMsgInfo:(id)arg1;
+ (void)preloadWithUrl:(id)arg1;
- (void)convertPromoteMsgInfo:(id)arg1;
- (BOOL)isCurrentPromoteItem:(id)arg1;
- (void)updatePromoteItem:(id)arg1;
- (void)updateFromSyncPromoteResp:(id)arg1;
- (void)updatepromoteBuffer:(id)arg1;
- (void)reportCurrentPromoteData;
- (id)getCurrentPromoteBuffer;
- (void)layoutUI;
- (id)getActionButtonBackgroundColor;
- (id)getActionButtonColor;
- (BOOL)isUseDarkMode;
- (BOOL)isUseSpecialConfig;
- (void)refreshData;
- (void)updateCoverImgViewWithUrl:(id)arg1;
- (void)updateBackgroundImgViewWithUrl:(id)arg1;
- (BOOL)shouldBeAccessibilityElement;
- (void)handleSingleTapGesture:(id)arg1;
- (void)actionButtonClicked;
- (void)onPromoteButtonClicked:(BOOL)arg1;
- (void)onTapAction:(BOOL)arg1;
- (void)layoutBackgroundImgView;
- (void)layoutTitleImgView;
- (void)layoutActionButton;
- (void)updateActionButtonWithPromoteInfo:(id)arg1;
- (void)layoutTitleLabel;
- (double)getLabelWidth:(double)arg1;
- (void)layoutDescLabel;
- (void)updateLabelsOriginY;
- (void)categoryItem:(id)arg1 onLikeStatusChanged:(BOOL)arg2;
- (void)updateDisMiss;
- (void)onShowed;
- (void)onClosed;
- (id)onPromoteBubbleActionExtraInfo;
- (id)backgroundImgView;
- (void)setBackgroundImgView:(id)arg1;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)listenPromoteInfo;
- (void)setListenPromoteInfo:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (BOOL)downLoadImageSuccess;
- (void)setDownLoadImageSuccess:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveAnchorQuickPanelView : MMPageSheetBaseView <MMLiveScrollActionSheetItemViewDelegate>
{
    BOOL _isOpening; // +0x8
    MMFinderLiveAnchorQuickPanelOpenParameter * _openParameter; // +0x10
    UIView * _maskingView; // +0x18
    UIView * _contentView; // +0x20
    UIView * _micSeatInfoView; // +0x28
    UILabel * _micSeatNameLabel; // +0x30
    UIImageView * _editMicSeatNameIcon; // +0x38
    MMLiveActionSheetScrollView * _actionButtonScrollView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)checkAndCreateMicSeatInfoView;
- (void)checkAndCreateActionScrollView;
- (void)openWithParameter:(id)arg1 animation:(BOOL)arg2;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)closeDirectly;
- (void)openWithAnimation:(BOOL)arg1;
- (void)setupSubviewsContent;
- (void)configureMicSeatInfoView;
- (BOOL)shouldShowMicSeatInfoRow;
- (void)configureActionItems;
- (id)makeBeautyActionItem;
- (id)makeSwitchCameraActionItem;
- (id)makeMaximizeOrMinimizeActionItem;
- (BOOL)shouldShowMaximizeOrMinimizeItem;
- (void)onTapMicSeatInfoView:(id)arg1;
- (void)onActionSheetIconView:(id)arg1 didTapedWithItem:(id)arg2;
- (void)handleMaximizeOrMinimizeActionWithType:(unsigned long long)arg1;
- (void)onActionSheetIconView:(id)arg1 didTapedWithDisableItem:(id)arg2;
- (double)contentViewHeight;
- (double)actionButtonScrollViewExpectedHeight;
- (void)layoutSubviews;
- (void)layoutMicSeatInfoView;
- (void)layoutActionScrollView;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (void)reportPanelActionWithType:(long long)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (id)openParameter;
- (void)setOpenParameter:(id)arg1;
- (id)maskingView;
- (void)setMaskingView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)micSeatInfoView;
- (void)setMicSeatInfoView:(id)arg1;
- (id)micSeatNameLabel;
- (void)setMicSeatNameLabel:(id)arg1;
- (id)editMicSeatNameIcon;
- (void)setEditMicSeatNameIcon:(id)arg1;
- (id)actionButtonScrollView;
- (void)setActionButtonScrollView:(id)arg1;
- (void).cxx_destruct;
@end

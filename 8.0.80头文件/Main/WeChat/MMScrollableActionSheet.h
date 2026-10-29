@interface MMScrollableActionSheet : MMUIView <MMScrollableActionSheetContainerViewDelegate, IUiUtilExt>
{
    id <MMScrollableActionSheetDelegate> _delegate; // +0x8
    MMScrollableActionSheetContainerView * _containerView; // +0x10
    UIView * _transparentView; // +0x18
}
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)setupContainerView;
- (void)setupTransparentView;
- (void)showInView:(id)arg1;
- (void)showInTopMostView;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)setHorizontalRowInfoList:(id)arg1 atRow:(unsigned int)arg2;
- (void)addOrUpdateHorizontalRowItemInfo:(id)arg1 atRow:(unsigned int)arg2;
- (void)appendRow0HorizontalItemWithItemType:(unsigned int)arg1 iconImage:(id)arg2 title:(id)arg3;
- (void)appendRow1HorizontalItemWithItemType:(unsigned int)arg1 iconImage:(id)arg2 title:(id)arg3;
- (void)layoutSubviews;
- (void)onTappedTransparent;
- (void)onTappedItemInfo:(id)arg1;
- (void)onTappedCancel;
- (void)onMainWindowFrameChanged;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)transparentView;
- (void)setTransparentView:(id)arg1;
- (void).cxx_destruct;
@end

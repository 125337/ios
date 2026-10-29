@interface MMDoodleController : NSObject <EditImageOperationDelegate, MMDoodleToolbarDelegate, EditImagePenToolAttrDelegate>
{
    UIViewController<MMDoodleViewControllerLayout> * _viewControllerForLayout; // +0x8
    MMDoodleToolbar * _toolbar; // +0x10
    id <MMDoodleDelegate> _delegate; // +0x18
    id <MMDoodleDataSource> _dataSource; // +0x20
    EditImageScrollView * _contentScrollView; // +0x28
    MMDoodlePenView * _penView; // +0x30
}
- (id)contentView;
- (id)toolsContainerView;
- (void)loadSubviewsForTools;
- (void)layoutSubviewsForContent;
- (void)layoutSubviewsForTools;
- (void)setToolsHidden:(BOOL)arg1;
- (void)setToolsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)loadContentScrollView;
- (void)unloadContentScrollView;
- (void)layoutContentScrollView;
- (void)reloadContentScrollViewWithImage:(id)arg1;
- (void)loadToolbarIfNeeded;
- (void)layoutToolbar;
- (BOOL)isDoodling;
- (void)startDoodlingIfNeeded;
- (void)startDoodling;
- (void)stopDoodling;
- (void)loadPenViewIfNeeded;
- (void)layoutPenView;
- (void)showPenView;
- (void)hidePenView;
- (void)refreshUndoPenButton;
- (void)undoLastPenEdit;
- (void)undoAllPenEdit;
- (void)addToolbarItem:(id)arg1;
- (void)removeToolbarItem:(id)arg1;
- (void)editImageViewDidStartDraw;
- (void)editImageViewdidEndDraw;
- (void)dragaAndDropWidget;
- (void)editImageViewLyricsWidgetHadBeenDeleted;
- (void)editImageViewLyricsWidgetHadBeenDoubleTap;
- (void)editImageViewPOIWidgetHiddenStateChange:(BOOL)arg1;
- (void)onAddNewPOIWidget;
- (void)onAddRealNewMainTextWidget;
- (void)onTapGesture;
- (CGRect)getAssetPreviewFrame;
- (void)doodleToolbar:(id)arg1 penItemDidClick:(id)arg2;
- (void)setSelectedColorFromGradientBar:(id)arg1;
- (void)undoPenEditImage;
- (void)onClosePenToolAttrView;
- (id)viewControllerForLayout;
- (void)setViewControllerForLayout:(id)arg1;
- (id)toolbar;
- (void)setToolbar:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)contentScrollView;
- (void)setContentScrollView:(id)arg1;
- (id)penView;
- (void)setPenView:(id)arg1;
- (void).cxx_destruct;
@end


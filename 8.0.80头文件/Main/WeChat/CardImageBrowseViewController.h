@interface CardImageBrowseViewController : FullScreenViewController <MultiImageScrollViewDelegate, MMImageActionSheetDelegate>
{
    BOOL _biSHiddenButtonTool; // +0x71
    BOOL _biSHiddenDeleteButton; // +0x72
    BOOL _biSHiddenPageCtrl; // +0x73
    BOOL _biSDisabledLongPress; // +0x74
    unsigned int _startIndex; // +0x78
    NSMutableArray * _imageList; // +0x80
    id <CardImageBrowseViewControllerDelegate> _delegate; // +0x88
    MMImageActionSheet * _imageActionSheet; // +0x90
    MultiImageScrollView * _multiImageScrollView; // +0x98
    ImageBrowseButton * _saveButton; // +0xa0
    ImageBrowseButton * _favButton; // +0xa8
    ImageBrowseButton * _deleteButton; // +0xb0
    UIPageControl * _pageCtrl; // +0xb8
}
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)resetToolView;
- (BOOL)shouldHideNavigationBar;
- (BOOL)shouldInteractivePop;
- (BOOL)useTransparentNavibar;
- (long long)overrideUserInterfaceStyle;
- (BOOL)removeFromViewAfterTransition;
- (void)hideVCAnimation;
- (void)showVCAnimation;
- (void)viewWillBeInteractivePoped;
- (void)onTapDelete;
- (void)savePhotoToAlbum;
- (void)addFavItem;
- (void)deleteCardImage;
- (id)currentImage;
- (void)resetButtonToolHidden:(BOOL)arg1;
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (void)onSingleTap:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)onChangePage;
- (void)imageActionSheet:(id)arg1 itemWillClicked:(id)arg2;
- (BOOL)imageActionSheet:(id)arg1 itemDidCustomEvent:(id)arg2;
- (id)customItemsArrayForImageActionSheet:(id)arg1;
- (BOOL)imageActionSheet:(id)arg1 shouldShowItem:(id)arg2;
- (id)imageList;
- (void)setImageList:(id)arg1;
- (unsigned int)startIndex;
- (void)setStartIndex:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)biSHiddenButtonTool;
- (void)setBiSHiddenButtonTool:(BOOL)arg1;
- (BOOL)biSHiddenDeleteButton;
- (void)setBiSHiddenDeleteButton:(BOOL)arg1;
- (BOOL)biSHiddenPageCtrl;
- (void)setBiSHiddenPageCtrl:(BOOL)arg1;
- (BOOL)biSDisabledLongPress;
- (void)setBiSDisabledLongPress:(BOOL)arg1;
- (id)imageActionSheet;
- (void)setImageActionSheet:(id)arg1;
- (id)multiImageScrollView;
- (void)setMultiImageScrollView:(id)arg1;
- (id)saveButton;
- (void)setSaveButton:(id)arg1;
- (id)favButton;
- (void)setFavButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)pageCtrl;
- (void)setPageCtrl:(id)arg1;
- (void).cxx_destruct;
@end

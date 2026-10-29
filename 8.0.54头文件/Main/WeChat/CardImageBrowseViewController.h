@interface CardImageBrowseViewController : FullScreenViewController <MultiImageScrollViewDelegate, MMImageActionSheetDelegate>
{
    unsigned int _startIndex; // +0x6c
    NSMutableArray * _imageList; // +0x70
    id <CardImageBrowseViewControllerDelegate> _delegate; // +0x78
    MMImageActionSheet * _imageActionSheet; // +0x80
    MultiImageScrollView * _multiImageScrollView; // +0x88
    ImageBrowseButton * _saveButton; // +0x90
    ImageBrowseButton * _favButton; // +0x98
    ImageBrowseButton * _deleteButton; // +0xa0
    UIPageControl * _pageCtrl; // +0xa8
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
- (id)imageAtPage:(unsigned int)arg1;
- (id)viewAtPage:(unsigned int)arg1 frame:(CGRect)arg2;
- (void)onSingleTap:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)onChangePage;
- (void)imageActionSheet:(id)arg1 itemWillClicked:(id)arg2;
- (BOOL)imageActionSheet:(id)arg1 itemDidCustomEvent:(id)arg2;
- (id)customItemsArrayForImageActionSheet:(id)arg1;
- (id)imageList;
- (void)setImageList:(id)arg1;
- (unsigned int)startIndex;
- (void)setStartIndex:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
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


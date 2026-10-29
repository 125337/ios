@interface MJMovieTextContentDescViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, MJSegmentReusableViewDelegate, MJMovieTextEditViewDelegate, MJActionPanelMainMenuViewDelegate, MJMovieTextActionProtocol>
{
    BOOL _isAppearing; // +0x8
    id <MJMovieTextContentDescViewControllerDelegate> _delegate; // +0x10
    UICollectionView * _thumbnailView; // +0x18
    MJMovieTextEditView * _editView; // +0x20
    MJActionPanelMainMenuView * _menuView; // +0x28
    NSArray * _menuItems; // +0x30
    NSArray * _menuItemsDisabled; // +0x38
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setIsAppearing:(BOOL)arg1;
- (void)setupViews;
- (void)layoutViews;
- (void)movieTextEditViewDidChangeDisplayingText:(id)arg1;
- (void)movieTextEditViewDidSelectEditText:(id)arg1;
- (void)movieTextEditViewDidSelectDelete:(id)arg1;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)resetPreview;
- (void)reloadData:(id)arg1;
- (void)updateOnSkimTimeDidChange:(struct)arg1;
- (void)updateOnPlaybackTimeDidChange:(struct)arg1;
- (void)updateOnIsPlayingDidChange:(BOOL)arg1;
- (void)scrollThumbnailToTime:(struct)arg1 animated:(BOOL)arg2 showHandleBox:(BOOL)arg3;
- (id)editView;
- (BOOL)isAppearing;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (void)setEditView:(id)arg1;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (id)menuItemsDisabled;
- (void)setMenuItemsDisabled:(id)arg1;
- (void).cxx_destruct;
@end


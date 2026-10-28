@interface MJMovieTextTitleViewController : UIViewController <MJMovieTextEditViewDelegate, MJActionPanelMainMenuViewDelegate, MJMovieTextActionProtocol>
{
    BOOL _isAppearing; // +0x8
    id <MJMovieTextTitleViewControllerDelegate> _delegate; // +0x10
    MJMovieTextEditView * _editView; // +0x18
    MJActionPanelMainMenuView * _menuView; // +0x20
    NSArray * _menuItems; // +0x28
    NSArray * _menuItemsDisabled; // +0x30
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupViews;
- (void)layoutViews;
- (void)setIsAppearing:(BOOL)arg1;
- (void)reloadData:(id)arg1;
- (void)resetPreview;
- (void)updateOnSkimTimeDidChange:(struct)arg1;
- (void)updateOnPlaybackTimeDidChange:(struct)arg1;
- (void)updateOnIsPlayingDidChange:(BOOL)arg1;
- (void)movieTextEditViewDidChangeDisplayingText:(id)arg1;
- (void)movieTextEditViewDidSelectEditText:(id)arg1;
- (void)movieTextEditViewDidSelectDelete:(id)arg1;
- (void)mainMenuView:(id)arg1 didSelectItem:(id)arg2;
- (id)editView;
- (BOOL)isAppearing;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setEditView:(id)arg1;
- (id)menuView;
- (void)setMenuView:(id)arg1;
- (id)menuItems;
- (void)setMenuItems:(id)arg1;
- (id)menuItemsDisabled;
- (void)setMenuItemsDisabled:(id)arg1;
- (void).cxx_destruct;
@end

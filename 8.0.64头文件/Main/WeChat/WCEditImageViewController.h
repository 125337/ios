@interface WCEditImageViewController : MMUIViewController <WCEditImageLayoutViewDelegate>
{
    BOOL _isEmoticonBoardSearchEnabled; // +0x70
    BOOL _isLiteApp; // +0x71
    unsigned long long _fromScene; // +0x78
    unsigned long long _entranceScene; // +0x80
    unsigned long long _editImageUIStyle; // +0x88
    WCEditImageLayoutView * _editImageLayoutView; // +0x90
    id <WCEditImageViewControllerDelegate> _delegate; // +0x98
    NSMutableArray * _assets; // +0xa0
    NSMutableArray * _images; // +0xa8
    NSMutableArray * _imageDatas; // +0xb0
    UIImage * _image; // +0xb8
    MMAsset * _asset; // +0xc0
    RecommendedMusicInfo * _patMusicInfo; // +0xc8
    unsigned long long _backStyle; // +0xd0
    WCEditViewControllerUIConfig * _uiConfig; // +0xd8
    UIView * _tempView; // +0xe0
    EditImageAttr * _editImageAttr; // +0xe8
}
- (id)initWithAsset:(id)arg1 tempView:(id)arg2;
- (id)initWithAssets:(id)arg1 images:(id)arg2 tempView:(id)arg3;
- (id)initWithAssets:(id)arg1 images:(id)arg2 imageDatas:(id)arg3 tempView:(id)arg4;
- (id)initWithImage:(id)arg1 editImageAttr:(id)arg2;
- (id)initWithAssets:(id)arg1 images:(id)arg2 editImageAttr:(id)arg3;
- (id)editImageAttr;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)hidesStatusBar;
- (id)assets;
- (id)images;
- (void)showEditImageViewOn;
- (void)updateImage:(id)arg1;
- (void)getDisplayImage:(id /* block */)arg1;
- (void)getOriginalImage:(id /* block */)arg1;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)dealSelectResult:(id)arg1;
- (void)onChangeAssetDatas:(id)arg1 images:(id)arg2 imageDatas:(id)arg3;
- (id)currentViewController;
- (BOOL)shouldSaveUnCropImages;
- (void)asyncFetchAssetExifs:(id /* block */)arg1;
- (void)asyncFetchAssetExifAt:(long long)arg1 storeTo:(id)arg2 finish:(id /* block */)arg3;
- (void)debugTap;
- (void)onEditImageChooseVideoBGMDone:(id)arg1;
- (unsigned long long)fromScene;
- (void)setFromScene:(unsigned long long)arg1;
- (unsigned long long)entranceScene;
- (void)setEntranceScene:(unsigned long long)arg1;
- (unsigned long long)editImageUIStyle;
- (void)setEditImageUIStyle:(unsigned long long)arg1;
- (id)editImageLayoutView;
- (void)setEditImageLayoutView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setImages:(id)arg1;
- (id)imageDatas;
- (void)setImageDatas:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (unsigned long long)backStyle;
- (void)setBackStyle:(unsigned long long)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (BOOL)isLiteApp;
- (void)setIsLiteApp:(BOOL)arg1;
- (id)tempView;
- (void)setTempView:(id)arg1;
- (void)setEditImageAttr:(id)arg1;
- (void).cxx_destruct;
@end

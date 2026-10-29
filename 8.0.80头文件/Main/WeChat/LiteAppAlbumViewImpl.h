@interface LiteAppAlbumViewImpl : UIView
{
    BOOL _autoHeight; // +0x8
    BOOL _autoWidth; // +0x9
    BOOL _disableLayoutSubview; // +0xa
    BOOL _livePhoto; // +0xb
    BOOL _isRealAppear; // +0xc
    SystemImagePickViewController * _vc; // +0x10
    NSString * _appId; // +0x18
    NSString * _albumid; // +0x20
    NSString * _type; // +0x28
    NSString * _mode; // +0x30
    NSString * _showType; // +0x38
    unsigned long long _countLimit; // +0x40
    NSString * _preview; // +0x48
    id <SystemImagePickViewControllerDelegate> _delegate; // +0x50
}
- (id)init;
- (void)dealloc;
- (void)initAlbumView;
- (void)selectAlbum:(id)arg1;
- (id)albumRootView;
- (void)attachLiteAppView:(id)arg1;
- (void)onAttachViewController:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)didMoveToWindow;
- (void)attachParentViewController;
- (id)findViewController;
- (void)layoutSubviews;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)disableLayoutSubview;
- (void)setDisableLayoutSubview:(BOOL)arg1;
- (id)albumid;
- (void)setAlbumid:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)mode;
- (void)setMode:(id)arg1;
- (id)showType;
- (void)setShowType:(id)arg1;
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
- (id)preview;
- (void)setPreview:(id)arg1;
- (BOOL)livePhoto;
- (void)setLivePhoto:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRealAppear;
- (void)setIsRealAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end

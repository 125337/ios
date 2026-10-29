@interface LiteAppAlbumViewImpl : UIView
{
    BOOL _autoHeight; // +0x8
    BOOL _autoWidth; // +0x9
    BOOL _disableLayoutSubview; // +0xa
    BOOL _isRealAppear; // +0xb
    SystemImagePickViewController * _vc; // +0x10
    NSString * _appId; // +0x18
    NSString * _albumid; // +0x20
    NSString * _type; // +0x28
    NSString * _mode; // +0x30
    unsigned long long _countLimit; // +0x38
    id <SystemImagePickViewControllerDelegate> _delegate; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)initAlbumView;
- (void)selectAlbum:(id)arg1;
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
- (unsigned long long)countLimit;
- (void)setCountLimit:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRealAppear;
- (void)setIsRealAppear:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface MMHDHeadImageView : MMUIView <MessageObserverDelegate, WCActionSheetDelegate, ImageScrollViewDelegate, IUiUtilExt>
{
    UIImageView * m_backgroundView; // +0x8
    MMUIActivityIndicatorView * m_activityIndicatorView; // +0x10
    ImageScrollView * m_imgView; // +0x18
    UIView * m_imgMask; // +0x20
    BOOL m_bLoading; // +0x28
    CBaseContact * m_contact; // +0x30
    CGRect m_rcImgBegin; // +0x38
    unsigned int m_uiDownloadEventID; // +0x58
    id <HDHeadImageViewDelegate> m_delegate; // +0x60
    BOOL m_fullScreen; // +0x68
    double m_cornerRadius; // +0x70
    BOOL m_needShowLoading; // +0x78
    unsigned char headCategory; // +0x79
    BOOL _m_bShowInViewController; // +0x7a
    BOOL _needUseScreenFrame; // +0x7b
    BOOL _bAlwayShowDefaultImage; // +0x7c
    long long _sourceScene; // +0x80
    MMHDHeadImageViewController * _windowContainer; // +0x88
}
- (void)BeforeInit;
- (id)initWithContact:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (BOOL)enableDragDownToClose;
- (void)setEnableDragDownToClose:(BOOL)arg1;
- (void)startLoading;
- (void)stopLoadingInternal;
- (void)stopLoading;
- (void)reset;
- (void)startShowImg:(BOOL)arg1;
- (void)setImgBeginRect:(CGRect)arg1;
- (id)getRealUserName:(id)arg1;
- (void)updateHead;
- (void)updateHDHead;
- (void)downloadHDImg;
- (void)hide;
- (void)showInOriginPlace:(BOOL)arg1;
- (void)show;
- (void)promptSaveToPhotoLibrary:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onFullScreenItemDragToClose;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)saveImage;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)onMainWindowFrameChanged;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onUserDidTakeScreenshot;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (id)m_activityIndicatorView;
- (void)setM_activityIndicatorView:(id)arg1;
- (BOOL)m_bLoading;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_needShowLoading;
- (void)setM_needShowLoading:(BOOL)arg1;
- (unsigned char)headCategory;
- (void)setHeadCategory:(unsigned char)arg1;
- (BOOL)m_bShowInViewController;
- (void)setM_bShowInViewController:(BOOL)arg1;
- (BOOL)needUseScreenFrame;
- (void)setNeedUseScreenFrame:(BOOL)arg1;
- (BOOL)bAlwayShowDefaultImage;
- (void)setBAlwayShowDefaultImage:(BOOL)arg1;
- (long long)sourceScene;
- (void)setSourceScene:(long long)arg1;
- (id)windowContainer;
- (void)setWindowContainer:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCImageTranslateLogic : NSObject
{
    BOOL _preDetectWordFinish; // +0x8
    BOOL _isDetectResultOK; // +0x9
    BOOL _isImgTranslating; // +0xa
    BOOL _isShowingTranslatedImage; // +0xb
    unsigned int _detectResult; // +0xc
    unsigned int _targetRate; // +0x10
    int _source; // +0x14
    int _translateActionSheetIndex; // +0x18
    unsigned int _businessType; // +0x1c
    id <WCImageTranslateDelegate> _delegate; // +0x20
    OCRTransReport * _transReport; // +0x28
    id _currentItem; // +0x30
    NSString * _tmpIdentifier; // +0x38
    UIView * _weakViewToDisableInteractWhenTranslateAnimating; // +0x40
    WCActionSheet * _weakActionSheet; // +0x48
    UIView * _scanImageCoverView; // +0x50
    UIImageView * _scanImageView; // +0x58
    ImageBrowseButton * _scanCancelButton; // +0x60
    UIImage * _translateImg; // +0x68
    CAGradientLayer * _bottomMaskLayer; // +0x70
    NSString * _nsBiz; // +0x78
    id _processingItem; // +0x80
    NSString * _currentFileId; // +0x88
    NSString * _currentAesKey; // +0x90
}
- (id)init;
- (id)initWithSource:(int)arg1;
- (void)updateSource:(int)arg1;
- (void)dealloc;
- (id)tmpIdentifier;
- (void)setCurrentItem:(id)arg1;
- (BOOL)shouldDoPreDetectWord:(id)arg1;
- (BOOL)shouldShowTranslateEntry:(id)arg1;
- (BOOL)shouldShowTranslateEntry:(id)arg1 specifiedSource:(int)arg2;
- (BOOL)isDisableAlwaysShowImageTranslateEntry;
- (long long)getWordRateThresholdForImageTranslateEntry;
- (BOOL)shouldShowOCREntry:(id)arg1;
- (BOOL)hasTranslateResultFile:(id)arg1;
- (BOOL)hasOCRResultFile:(id)arg1;
- (BOOL)hasDetectWordResultCache:(id)arg1;
- (id)pathForTranslateImage:(id)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (id)getTranslateImagePath:(id)arg1;
- (id)getTranslateResultImage:(id)arg1;
- (void)reportTranslateImgInfo;
- (BOOL)asyncPreDetectWord:(id)arg1;
- (void)commonHandlePreDetectWordSuccess:(id)arg1;
- (BOOL)translateImage:(id)arg1 aboveScollView:(id)arg2 andBackView:(id)arg3;
- (void)commonHandleStartAnimateTranslateImage:(id)arg1;
- (void)commonHandleFinishAnimateTranslateImage:(id)arg1;
- (void)showTranslateImg:(id)arg1;
- (void)prepareViewForTranslateOnScrollView:(id)arg1 andBackView:(id)arg2;
- (void)startOCRScanningAnimation:(id)arg1 selfView:(id)arg2;
- (void)stopOCRScanningAnimation;
- (void)showAlertViewForNetDisconnected;
- (void)onCancelTranslate:(id)arg1;
- (void)cancelTranslate;
- (void)removeTranslateViews;
- (void)forceCancelImageTranslate;
- (void)showVCForTranslateImg:(id)arg1 sourceVC:(id)arg2 originSnapShotView:(id)arg3 originRect:(CGRect)arg4;
- (void)showVCForTranslateImg:(id)arg1 sourceVC:(id)arg2 originSnapShotView:(id)arg3 originRect:(CGRect)arg4 disableAutoResumeNavigationBar:(BOOL)arg5;
- (BOOL)saveTranslateImage:(id)arg1 key:(id)arg2;
- (void)clearTranslateImageWithIdentifier:(id)arg1;
- (void)removeTranslateImage:(id)arg1;
- (void)resetDetectStatus;
- (void)setTranslateImageLang:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)getResultLangForItem:(id)arg1;
- (void)removeTranslateImageLangStateForItem:(id)arg1;
- (void)setImageDetectResult:(unsigned int)arg1 forKey:(id)arg2;
- (unsigned int)getDetectResultForItem:(id)arg1;
- (void)removeImageDetectResultForItem:(id)arg1;
- (void)reportShowActionSheet;
- (void)reportDoTranslate;
- (void)reportShowTranslateEntry;
- (void)reportShowTranslateFastEntry;
- (void)reportSaveTranslateImage;
- (void)idkeyReportTranslate;
- (void)idkeyReportCgiTranslate;
- (void)updateFileIdAndAesKey;
- (void)showTranslateDetectDebugInfo:(id)arg1 mmvc:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)preDetectWordFinish;
- (BOOL)isDetectResultOK;
- (unsigned int)detectResult;
- (BOOL)isImgTranslating;
- (unsigned int)targetRate;
- (id)transReport;
- (int)source;
- (id)currentItem;
- (void)setTmpIdentifier:(id)arg1;
- (id)weakViewToDisableInteractWhenTranslateAnimating;
- (void)setWeakViewToDisableInteractWhenTranslateAnimating:(id)arg1;
- (id)weakActionSheet;
- (void)setWeakActionSheet:(id)arg1;
- (int)translateActionSheetIndex;
- (void)setTranslateActionSheetIndex:(int)arg1;
- (BOOL)isShowingTranslatedImage;
- (void)setIsShowingTranslatedImage:(BOOL)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (id)scanImageCoverView;
- (void)setScanImageCoverView:(id)arg1;
- (id)scanImageView;
- (void)setScanImageView:(id)arg1;
- (id)scanCancelButton;
- (void)setScanCancelButton:(id)arg1;
- (id)translateImg;
- (void)setTranslateImg:(id)arg1;
- (id)bottomMaskLayer;
- (void)setBottomMaskLayer:(id)arg1;
- (id)nsBiz;
- (void)setNsBiz:(id)arg1;
- (id)processingItem;
- (void)setProcessingItem:(id)arg1;
- (id)currentFileId;
- (void)setCurrentFileId:(id)arg1;
- (id)currentAesKey;
- (void)setCurrentAesKey:(id)arg1;
- (void).cxx_destruct;
@end


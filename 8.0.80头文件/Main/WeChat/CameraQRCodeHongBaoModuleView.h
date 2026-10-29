@interface CameraQRCodeHongBaoModuleView : UIView
{
    BOOL _hasQrCode; // +0x8
    BOOL _usesKit; // +0x9
    BOOL _kitAttachStarted; // +0xa
    id <CameraQRCodeHongBaoModuleViewDelegate> _delegate; // +0x10
    UIImageView * _qrCodeImageView; // +0x18
    MMUILabel * _tipLabel; // +0x20
    UIButton * _moreButton; // +0x28
    MMLiteAppView * _qrcodeLiteView; // +0x30
    UIView * _kitEmbedContainer; // +0x38
    unsigned long long _kitAttachGeneration; // +0x40
    long long _kitCallId; // +0x48
    NSString * _kitQuery; // +0x50
    NSNumber * _pendingExpandStatus; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)setupViews;
- (id)hostViewController;
- (void)setupQrCodeLiteView;
- (void)onQrCodeStatus:(id)arg1;
- (void)didMoveToWindow;
- (void)removeFromSuperview;
- (void)attachKitIfReady;
- (void)cancelKitScene;
- (void)layoutSubviews;
- (BOOL)checkIsHadQRCodeImage;
- (void)notifyExpandStatus:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)qrcodeLiteView;
- (void)setQrcodeLiteView:(id)arg1;
- (id)kitEmbedContainer;
- (void)setKitEmbedContainer:(id)arg1;
- (BOOL)hasQrCode;
- (void)setHasQrCode:(BOOL)arg1;
- (BOOL)usesKit;
- (void)setUsesKit:(BOOL)arg1;
- (BOOL)kitAttachStarted;
- (void)setKitAttachStarted:(BOOL)arg1;
- (unsigned long long)kitAttachGeneration;
- (void)setKitAttachGeneration:(unsigned long long)arg1;
- (long long)kitCallId;
- (void)setKitCallId:(long long)arg1;
- (id)kitQuery;
- (void)setKitQuery:(id)arg1;
- (id)pendingExpandStatus;
- (void)setPendingExpandStatus:(id)arg1;
- (void).cxx_destruct;
@end

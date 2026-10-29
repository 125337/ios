@interface WAH5ViewControllerParameter : NSObject
{
    BOOL _disableShareMenu; // +0x8
    BOOL _presentModal; // +0x9
    BOOL _isForceRotateToPortrait; // +0xa
    BOOL _useOfflinePkgIfExist; // +0xb
    NSURL * _url; // +0x10
    NSNumber * _isForceFullScreen; // +0x18
}
- (id)url;
- (void)setUrl:(id)arg1;
- (BOOL)disableShareMenu;
- (void)setDisableShareMenu:(BOOL)arg1;
- (BOOL)presentModal;
- (void)setPresentModal:(BOOL)arg1;
- (id)isForceFullScreen;
- (void)setIsForceFullScreen:(id)arg1;
- (BOOL)isForceRotateToPortrait;
- (void)setIsForceRotateToPortrait:(BOOL)arg1;
- (BOOL)useOfflinePkgIfExist;
- (void)setUseOfflinePkgIfExist:(BOOL)arg1;
- (void).cxx_destruct;
@end

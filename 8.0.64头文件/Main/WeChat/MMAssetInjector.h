@interface MMAssetInjector : NSObject
{
    BOOL _isEditable; // +0x8
    BOOL _shouldForceSelect; // +0x9
    BOOL _shouldLoadUnedited; // +0xa
    BOOL _shouldLoadEditOverlay; // +0xb
    BOOL _shouldHideEditPageTopRightEntrance; // +0xc
    BOOL _shouldKeepTimeRange; // +0xd
    NSString * _errorInfo; // +0x10
    MMAssetInfo * _boundAsset; // +0x18
}
- (id)errorInfo;
- (void)setErrorInfo:(id)arg1;
- (BOOL)isEditable;
- (void)setIsEditable:(BOOL)arg1;
- (BOOL)shouldForceSelect;
- (void)setShouldForceSelect:(BOOL)arg1;
- (BOOL)shouldLoadUnedited;
- (void)setShouldLoadUnedited:(BOOL)arg1;
- (BOOL)shouldLoadEditOverlay;
- (void)setShouldLoadEditOverlay:(BOOL)arg1;
- (BOOL)shouldHideEditPageTopRightEntrance;
- (void)setShouldHideEditPageTopRightEntrance:(BOOL)arg1;
- (BOOL)shouldKeepTimeRange;
- (void)setShouldKeepTimeRange:(BOOL)arg1;
- (id)boundAsset;
- (void)setBoundAsset:(id)arg1;
- (void).cxx_destruct;
@end

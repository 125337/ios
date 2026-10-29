@interface AppStandardContentExternalLoadImageContainerView : UIView <AppStandardContentExternalLoadImageDelegate>
{
    BOOL _isVideoContent; // +0x8
    BOOL _isLoadFailed; // +0x9
    UIView * _addOnBgView; // +0x10
    UIImageView * _loadFailIcon; // +0x18
    UIView * _externalImgView; // +0x20
}
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onLoadDone:(id)arg1;
- (void)onLoadFail;
- (double)targetLoadFailSize;
- (id)addOnBgView;
- (void)setAddOnBgView:(id)arg1;
- (BOOL)isVideoContent;
- (void)setIsVideoContent:(BOOL)arg1;
- (id)loadFailIcon;
- (void)setLoadFailIcon:(id)arg1;
- (id)externalImgView;
- (void)setExternalImgView:(id)arg1;
- (BOOL)isLoadFailed;
- (void)setIsLoadFailed:(BOOL)arg1;
- (void).cxx_destruct;
@end

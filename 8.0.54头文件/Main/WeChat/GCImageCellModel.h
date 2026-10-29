@interface GCImageCellModel : GCChatBaseCellModel <ICdnComMgrExt, IMMAssetICloudExt, GCImgMsgWrapperDelegate>
{
    BOOL _oriNaviHidden; // +0x8
    int _icountPointProgress; // +0xc
    GCImageMsgWrapper * _imgMsgWrapper; // +0x10
}
- (id)initWithChatroomMessage:(id)arg1;
- (id)init;
- (Class)bindCellClass;
- (void)onExitRoom;
- (BOOL)checkClientMsgIdMatch:(id)arg1;
- (BOOL)customHandleReSend;
- (BOOL)disableRightLoadingView;
- (void)reDownloadImg;
- (void)checkDownloadThumbImgIfFirstTime;
- (void)startDownloadImg;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)imageGenerateStatusChanged;
- (void)imageCdnUploadStatusChange;
- (id)bindImageCell;
- (void)onAssetImageDonwloadProgress:(double)arg1 assetUrl:(id)arg2;
- (void)onAssetImageDonwloadStart:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)handleCdnProgress:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)onImgFailedForReason:(id)arg1;
- (id)imgMsgWrapper;
- (void)setImgMsgWrapper:(id)arg1;
- (BOOL)oriNaviHidden;
- (void)setOriNaviHidden:(BOOL)arg1;
- (int)icountPointProgress;
- (void)setIcountPointProgress:(int)arg1;
- (void).cxx_destruct;
@end


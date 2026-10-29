@interface MMImageActionSheet : MMScrollActionSheet <MMImageOpenWeAppDelegate, MMScrollActionSheetDelegate, WCImageTranslateDelegate, RecentForwardScrollViewDelegate>
{
    MMImageActionRecentForwardItem * _recentForward; // +0x8
    MMImageActionForwardItem * _forward; // +0x10
    MMImageActionSnsShareItem * _snsShare; // +0x18
    MMImageActionBizShareItem * _bizShare; // +0x20
    MMImageActionFavoriateItem * _fav; // +0x28
    MMImageActionSearchItem * _search; // +0x30
    MMImageActionOpenWeAppListItem * _openWeAppList; // +0x38
    NSMutableArray * _openWeAppItemList; // +0x40
    MMImageActionOpenDeviceItem * _openDevice; // +0x48
    MMImageOpenWeAppLogic * _openWeAppLogic; // +0x50
    MMImageActionSaveItem * _save; // +0x58
    MMImageActionEditItem * _edit; // +0x60
    MMImageActionTranslateItem * _translate; // +0x68
    MMImageActionFindTextItem * _findText; // +0x70
    MMImageActionQRCodeItem * _qrCode; // +0x78
    MMImageActionCircleToSearchItem * _circleToSearch; // +0x80
    MMImageActionCropItem * _crop; // +0x88
    MMImageActionGameCircle * _gameCircle; // +0x90
    MMImageActionFileSource * _fileSource; // +0x98
    MMImageActionAskXiaoWeiItem * _askXiaoWei; // +0xa0
    MMImageActionImageSource * _imageSource; // +0xa8
    NSString * _imagePath; // +0xb0
    UIImage * _image; // +0xb8
    WCImageTranslateLogic * _imgTranslateLogic; // +0xc0
    MMUIViewController * _curViewController; // +0xc8
    id <MMImageActionSheetDelegate> _imageDelegate; // +0xd0
    NSString * _watermarkImagePath; // +0xd8
    UIImage * _watermarkImage; // +0xe0
    unsigned long long _actionSheetLastShowTimeStamp; // +0xe8
}
- (id)init;
- (id)initWithAskXiaoWeiTitle:(id)arg1;
- (id)openWeAppLogic;
- (void)setupImageSheetItems;
- (void)setupImageSheetFooter;
- (void)imageActionSheetDidAppear;
- (void)imageActionSheetDidChangeImage;
- (id)getItemImagePath:(id)arg1;
- (id)getItemImage:(id)arg1;
- (void)detectWording;
- (void)showInView:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetInShowAnimation:(id)arg1;
- (void)scrollActionSheetInDismissAnimation:(id)arg1;
- (void)scrollActionSheetDidDismiss:(id)arg1;
- (void)updateImage:(id)arg1 imagePath:(id)arg2;
- (void)updateImageWithData:(id)arg1 watermarkImageData:(id)arg2;
- (void)doTranslateImageDirectly;
- (unsigned long long)actionSheetExposedDuration;
- (id)imgTranslateLogic;
- (void)onStopLoading;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)onAppendQRCodeMultiView:(id)arg1;
- (void)onQRCodeRowViewTapped;
- (void)onQRCodeRowViewBanned;
- (void)onQRCodeScansFinished;
- (void)onOpenWeAppButtonsUpdated:(id)arg1 itemList:(id)arg2;
- (void)onGetA8KeyResultType:(unsigned int)arg1;
- (id)getTranslateImgIdentifier:(id)arg1;
- (void)onShowTranslateImage:(id)arg1;
- (void)getTranslateImgInfo:(id)arg1 fileId:(id *)arg2 aesKey:(id *)arg3;
- (void)onPreDetectWordSuccess:(id)arg1;
- (id)recentForward;
- (void)setRecentForward:(id)arg1;
- (id)forward;
- (void)setForward:(id)arg1;
- (id)snsShare;
- (void)setSnsShare:(id)arg1;
- (id)bizShare;
- (void)setBizShare:(id)arg1;
- (id)fav;
- (void)setFav:(id)arg1;
- (id)search;
- (void)setSearch:(id)arg1;
- (id)openWeAppList;
- (void)setOpenWeAppList:(id)arg1;
- (id)openWeAppItemList;
- (void)setOpenWeAppItemList:(id)arg1;
- (id)openDevice;
- (void)setOpenDevice:(id)arg1;
- (void)setOpenWeAppLogic:(id)arg1;
- (id)save;
- (void)setSave:(id)arg1;
- (id)edit;
- (void)setEdit:(id)arg1;
- (id)translate;
- (void)setTranslate:(id)arg1;
- (id)findText;
- (void)setFindText:(id)arg1;
- (id)qrCode;
- (void)setQrCode:(id)arg1;
- (id)circleToSearch;
- (void)setCircleToSearch:(id)arg1;
- (id)crop;
- (void)setCrop:(id)arg1;
- (id)gameCircle;
- (void)setGameCircle:(id)arg1;
- (id)fileSource;
- (void)setFileSource:(id)arg1;
- (id)askXiaoWei;
- (void)setAskXiaoWei:(id)arg1;
- (id)imageSource;
- (void)setImageSource:(id)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setImgTranslateLogic:(id)arg1;
- (id)curViewController;
- (void)setCurViewController:(id)arg1;
- (id)imageDelegate;
- (void)setImageDelegate:(id)arg1;
- (id)watermarkImagePath;
- (void)setWatermarkImagePath:(id)arg1;
- (id)watermarkImage;
- (void)setWatermarkImage:(id)arg1;
- (unsigned long long)actionSheetLastShowTimeStamp;
- (void)setActionSheetLastShowTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

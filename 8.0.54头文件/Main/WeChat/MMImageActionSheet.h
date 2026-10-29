@interface MMImageActionSheet : MMScrollActionSheet <MMImageOpenWeAppDelegate, MMScrollActionSheetDelegate, WCImageTranslateDelegate, RecentForwardScrollViewDelegate>
{
    MMImageActionForwardItem * _forward; // +0x8
    MMImageActionSnsShareItem * _snsShare; // +0x10
    MMImageActionFavoriateItem * _fav; // +0x18
    MMImageActionSearchItem * _search; // +0x20
    MMImageActionOpenWeAppListItem * _openWeAppList; // +0x28
    NSMutableArray * _openWeAppItemList; // +0x30
    MMImageActionOpenDeviceItem * _openDevice; // +0x38
    MMImageOpenWeAppLogic * _openWeAppLogic; // +0x40
    MMImageActionSaveItem * _save; // +0x48
    MMImageActionEditItem * _edit; // +0x50
    MMImageActionTranslateItem * _translate; // +0x58
    MMImageActionFindTextItem * _findText; // +0x60
    MMImageActionQRCodeItem * _qrCode; // +0x68
    MMImageActionCircleToSearchItem * _circleToSearch; // +0x70
    NSString * _imagePath; // +0x78
    UIImage * _image; // +0x80
    WCImageTranslateLogic * _imgTranslateLogic; // +0x88
    MMUIViewController * _curViewController; // +0x90
    id <MMImageActionSheetDelegate> _imageDelegate; // +0x98
    unsigned long long _actionSheetLastShowTimeStamp; // +0xa0
}
- (id)init;
- (id)openWeAppLogic;
- (void)setupImageSheetItems;
- (void)setupImageSheetFooter;
- (void)imageActionSheetDidAppear;
- (void)imageActionSheetDidChangeImage;
- (void)detectWording;
- (void)showInView:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)updateImage:(id)arg1 imagePath:(id)arg2;
- (void)updateImageWithData:(id)arg1;
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
- (id)forward;
- (void)setForward:(id)arg1;
- (id)snsShare;
- (void)setSnsShare:(id)arg1;
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
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (void)setImgTranslateLogic:(id)arg1;
- (id)curViewController;
- (void)setCurViewController:(id)arg1;
- (id)imageDelegate;
- (void)setImageDelegate:(id)arg1;
- (unsigned long long)actionSheetLastShowTimeStamp;
- (void)setActionSheetLastShowTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


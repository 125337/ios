@interface ContactRemarkLogic : MMObject <IContactMgrExt, PBMessageObserverDelegate>
{
    NSMutableArray * _uploadedCardItem; // +0x8
    CContact * _downloadingContact; // +0x10
}
- (void)dealloc;
- (id)init;
- (id)cardImageRootPath;
- (id)strangerCardImageRootPath;
- (id)listCardImgFile;
- (id)listStrangerCardImgFile;
- (id)pathForCardImage:(id)arg1 url:(id)arg2;
- (id)pathForStrangerCardImageWithFileName:(id)arg1;
- (void)tryDeleteInvalidateCardImg:(id)arg1;
- (void)tryDeleteInvalidateStrangerCardImg:(id)arg1;
- (void)deleteInvalidateCardForUserName:(id)arg1 rootPath:(id)arg2 fileList:(id)arg3 validPath:(id)arg4;
- (void)downloadCardImg:(id)arg1;
- (id)getCardImgList:(id)arg1;
- (id)getFirstCardImg:(id)arg1;
- (id)getStrangerCardImgList:(id)arg1;
- (void)uploadCardImg:(id)arg1 cardImgList:(id)arg2;
- (void)uploadCardImg:(id)arg1 cardImageList:(id)arg2 index:(long long)arg3;
- (void)onFinishUploadCDN:(id)arg1;
- (void)onUploadCardImg:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)contactNeedDownloadCardImg:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onFailedToGetContactsFromSvr;
- (id)uploadedCardItem;
- (void)setUploadedCardItem:(id)arg1;
- (id)downloadingContact;
- (void)setDownloadingContact:(id)arg1;
- (void).cxx_destruct;
@end

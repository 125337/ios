@interface FavoritesRepairSvrDataLogic : MMObject <IMsgExt, ICdnComMgrExt, PBMessageObserverDelegate>
{
    FavoritesItemDB * _favItemDB; // +0x8
    NSMutableArray * _resendFavItems; // +0x10
    BOOL _isCurrentUploading; // +0x18
    NSMutableArray * _resendingFavItems; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (id)resendFavItemSaveFilePath;
- (void)loadResendFavItem;
- (void)saveResendFavItem;
- (void)doCheckFavItem:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processUploadFavItem:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)processResendFavItem:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)checkResendFavItem:(id)arg1;
- (void)tryUploadAndSendFavItem;
- (BOOL)checkAllowUpdateItem:(unsigned int)arg1;
- (void)startCheckResendFavItem:(unsigned int)arg1 resendFavItem:(id)arg2;
- (BOOL)updateItemXml:(id)arg1 withResendItem:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleCheckFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleModFavItem:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCdnUpload:(id)arg1;
- (void).cxx_destruct;
@end


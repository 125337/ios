@interface MMImgDownloader_MsgRecordDownloadInfo : NSObject
{
    BOOL _bHD; // +0x8
    BOOL _bSave; // +0x9
    MMImgDataItem * _item; // +0x10
}
- (id)item;
- (void)setItem:(id)arg1;
- (BOOL)bHD;
- (void)setBHD:(BOOL)arg1;
- (BOOL)bSave;
- (void)setBSave:(BOOL)arg1;
- (void).cxx_destruct;
@end

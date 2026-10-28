@interface GNFileDetailLogicController : FileDetailLogicController <GroupNoticeDownloadExt, ForwardMessageLogicDelegate>
{
    GroupNoticeItem * m_downloadItem; // +0x8
    GroupNoticeItem * _item; // +0x10
    GroupNoticeItemDataField * _data; // +0x18
    ForwardMessageLogicController * _forwardMsgLogic; // +0x20
}
- (id)initWithItem:(id)arg1 fileData:(id)arg2;
- (id)forwardMsgLogic;
- (id)GetFileName;
- (unsigned int)GetPreviewType;
- (id)GetFilePath;
- (unsigned long long)GetFileSize;
- (id)getMusicLocalFileDataUnit;
- (BOOL)OnPreviewFile:(unsigned int)arg1;
- (void)startDownload;
- (BOOL)isDownloading;
- (void)stopDownload;
- (void)onGroupNoticeDownloadData:(id)arg1 finishedLength:(unsigned long long)arg2 totalLength:(unsigned long long)arg3;
- (void)onGroupNoticeDownloadData:(id)arg1 retCode:(int)arg2;
- (void)onGroupNoticeDownloadItem:(id)arg1 retCode:(int)arg2;
- (id)getCurrentViewController;
- (void)onForwardToContact:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void)setForwardMsgLogic:(id)arg1;
- (void).cxx_destruct;
@end

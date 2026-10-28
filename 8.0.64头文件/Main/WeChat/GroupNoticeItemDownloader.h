@interface GroupNoticeItemDownloader : NSObject
{
    NSMutableArray * m_downloadItemPart; // +0x8
    NSMutableArray * m_downloadingPartInfo; // +0x10
    id <GroupNoticeItemDownloaderDelegate> _delegate; // +0x18
    GroupNoticeItem * _item; // +0x20
}
- (id)initWithItem:(id)arg1 delegate:(id)arg2;
- (void)start;
- (void)stop;
- (BOOL)isDownloadingData:(id)arg1;
- (void)_tryDownloadPart;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end

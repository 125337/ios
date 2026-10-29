@interface FavoritesDownloader : MMObject <IFavCdnDownloadMgrExt>
{
    FavoritesItem * _favItem; // +0x8
    id <FavoritesDownloaderDelegate> _delegate; // +0x10
    NSMutableArray * _downloadInfoList; // +0x18
    FavoritesDownloadCDNInfo * _downloadingInfo; // +0x20
    BOOL _bPrior; // +0x28
    int _downloadRetCode; // +0x2c
}
- (id)initWithFavoritesItem:(id)arg1 isPrior:(BOOL)arg2;
- (void)dealloc;
- (void)run;
- (void)stop;
- (id)getItem;
- (void)addDownloadItem:(id)arg1 withDataList:(id)arg2;
- (void)tryStartNextData;
- (void)OnFavCdnDownload:(id)arg1 RetCode:(int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


@interface QTileDataDownloader : NSObject
{
    NSMutableDictionary * _downloadList; // +0x8
}
- (id)init;
- (void)dealloc;
- (id)channelIdentifier;
- (id)statisticsParameters;
- (void)downloadTile:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelDownloadTile:(id)arg1;
- (id)downloadList;
- (void)setDownloadList:(id)arg1;
- (void).cxx_destruct;
@end

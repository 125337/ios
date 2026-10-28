@interface EmoticonCustomCreateDownloadTask : EmoticonCustomCreateInternalTask
{
    id /* block */ _finderOnPrepareDownloadBlock; // +0x8
    id /* block */ _finderOnStartDownloadBlock; // +0x10
    id /* block */ _finderFailBlock; // +0x18
}
- (void)startDownload;
- (BOOL)interruptDownload;
- (id /* block */)finderOnPrepareDownloadBlock;
- (void)setFinderOnPrepareDownloadBlock:(id /* block */)arg1;
- (id /* block */)finderOnStartDownloadBlock;
- (void)setFinderOnStartDownloadBlock:(id /* block */)arg1;
- (id /* block */)finderFailBlock;
- (void)setFinderFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

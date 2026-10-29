@interface MMLiteAppDownloadItemWithErrorInfo : NSObject
{
    MMLiteAppErrorReportInfo * _errorReportInfo; // +0x8
    MMLiteAppDownloadItem * _downloadItem; // +0x10
}
- (id)initWithInfo:(id)arg1 downloadItem:(id)arg2;
- (id)errorReportInfo;
- (void)setErrorReportInfo:(id)arg1;
- (id)downloadItem;
- (void)setDownloadItem:(id)arg1;
- (void).cxx_destruct;
@end

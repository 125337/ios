@interface MJTemplateSessionExportAsyncOperation : MJTemplateSessionExportOperation
{
    MJTemplateAsyncExportInfo * _asyncExportInfo; // +0x8
}
- (void)exportCreationWithProgressHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelExportingCreationWithCompletionHandler:(id /* block */)arg1;
- (id)asyncExportInfo;
- (void)setAsyncExportInfo:(id)arg1;
- (void).cxx_destruct;
@end


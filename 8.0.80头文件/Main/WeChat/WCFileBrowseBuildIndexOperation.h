@interface WCFileBrowseBuildIndexOperation : NSOperation
{
    WCFileBrowseInfoDB * _browseInfoDB; // +0x8
    id /* block */ _buildIndexCompletion; // +0x10
}
- (id)initWithCompletion:(id /* block */)arg1;
- (void)start;
- (void)buildAllFileIntoFileBrowse;
- (id)p_getTaskInfo;
- (void)p_buildFileBrowseWithDataInfo:(id)arg1 withType:(unsigned long long)arg2;
- (id)browseInfoDB;
- (void)setBrowseInfoDB:(id)arg1;
- (id /* block */)buildIndexCompletion;
- (void)setBuildIndexCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end

@interface ReportObj16171 : NSObject
{
    NSMutableArray * _checkVersionFinishPkgs; // +0x8
    NSMutableArray * _checkVersionSuccessPkgs; // +0x10
    NSMutableArray * _addDownloadKeys; // +0x18
    NSMutableArray * _startDownloadKeys; // +0x20
    NSMutableArray * _finshDownloadKeys; // +0x28
    NSMutableArray * _downloadSuccessKeys; // +0x30
    BOOL _allCheckFinished; // +0x38
    BOOL _allDownloadFinished; // +0x39
    unsigned int _totalBytes; // +0x3c
    id _pkgList; // +0x40
}
+ (id)objWithPkgList:(id)arg1;
- (void)notifyPreCheckVersionFinish:(id)arg1;
- (void)notifyCheckVersionFinishedForPkgId:(id)arg1;
- (void)notifyPostCheckVersionFinish:(id)arg1;
- (void)notifyCheckVersionSuccessForPkgId:(id)arg1;
- (void)notifyAddDownloadListForUrl:(id)arg1 withPkgId:(id)arg2;
- (void)notifyStartDownloadUrl:(id)arg1 forPkgId:(id)arg2;
- (void)notifyFinishDownloadUrl:(id)arg1 forPkgId:(id)arg2;
- (void)notifyDownloadSucceedUrl:(id)arg1 forPkgId:(id)arg2;
- (void)notifyDownloadBytes:(unsigned int)arg1 forUrl:(id)arg2 withPkgId:(id)arg3;
- (BOOL)addObject:(id)arg1 To:(id *)arg2 byCheck:(id)arg3 containsIn:(id)arg4;
- (void)clear;
- (void)sendReport;
- (id)pkgList;
- (void)setPkgList:(id)arg1;
- (void).cxx_destruct;
@end


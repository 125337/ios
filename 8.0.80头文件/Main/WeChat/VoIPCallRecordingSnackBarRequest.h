@interface VoIPCallRecordingSnackBarRequest : NSObject
{
    BOOL _isSaved; // +0x8
    BOOL _isScreenShotEntry; // +0x9
    BOOL _hasResult; // +0xa
    unsigned long long _anchorNs; // +0x10
    MMSnackBar * _snackBar; // +0x18
    NSString * _resultPath; // +0x20
    VoIPCallRecordingReportContext * _reportContext; // +0x28
    unsigned long long _reportStartTimeNs; // +0x30
}
- (unsigned long long)anchorNs;
- (void)setAnchorNs:(unsigned long long)arg1;
- (id)snackBar;
- (void)setSnackBar:(id)arg1;
- (BOOL)isSaved;
- (void)setIsSaved:(BOOL)arg1;
- (BOOL)isScreenShotEntry;
- (void)setIsScreenShotEntry:(BOOL)arg1;
- (BOOL)hasResult;
- (void)setHasResult:(BOOL)arg1;
- (id)resultPath;
- (void)setResultPath:(id)arg1;
- (id)reportContext;
- (void)setReportContext:(id)arg1;
- (unsigned long long)reportStartTimeNs;
- (void)setReportStartTimeNs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

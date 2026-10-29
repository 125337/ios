@interface WCSQLiteLintPlugin : MatrixPlugin
{
    id <WCSQLiteLintDataSourceDelegate> _deleagte; // +0x8
}
+ (id)getTag;
- (id)init;
- (void)installSQLiteLintOnDB:(id)arg1;
- (void)uninstallSQLiteLintOnDB:(id)arg1;
- (void)setWhiteList:(id)arg1 forDB:(id)arg2;
- (BOOL)shouldCheck:(id)arg1 onDatabase:(id)arg2;
- (void)notifyExcution:(id)arg1 withCost:(double)arg2 onDB:(id)arg3;
- (id)getStackInfo;
- (function<void (const char *, std::vector<sqlitelint::Issue>)>)getIssueCallback;
- (function<bool (const char *, const char *, int (*)(void *, int, const char **, const char **), void *, char **)>)getSQLiteExcutionCallback;
- (id)getReportDataFromIssue:(void *)arg1;
- (id)deleagte;
- (void)setDeleagte:(id)arg1;
- (void).cxx_destruct;
@end


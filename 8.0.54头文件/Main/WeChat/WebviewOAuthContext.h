@interface WebviewOAuthContext : MMObject
{
    NSArray * _scopeList; // +0x8
    WAAuthorizeResultInfo * _resultInfo; // +0x10
}
- (id)scopeList;
- (void)setScopeList:(id)arg1;
- (id)resultInfo;
- (void)setResultInfo:(id)arg1;
- (void).cxx_destruct;
@end


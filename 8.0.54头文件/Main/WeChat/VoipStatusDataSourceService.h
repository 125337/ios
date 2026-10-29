@interface VoipStatusDataSourceService : MMUserService <MMServiceProtocol>
{
    NSMutableArray * _snsProxyList; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isBlockUserRecentStatus:(id)arg1;
- (id)getTextStatus:(id)arg1 timeLimit:(unsigned long long)arg2;
- (id)getLatestFinder:(id)arg1 timeLimit:(unsigned long long)arg2;
- (id)getLatestSnsInfo:(id)arg1 timeLimit:(unsigned long long)arg2;
- (id)getLatestStatus:(id)arg1 timeLimit:(unsigned long long)arg2;
- (unsigned int)getCreateTime:(id)arg1;
- (id)snsProxyList;
- (void)setSnsProxyList:(id)arg1;
- (void).cxx_destruct;
@end


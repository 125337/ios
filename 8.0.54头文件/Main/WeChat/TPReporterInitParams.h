@interface TPReporterInitParams : NSObject
{
    BOOL _isUseProxy; // +0x8
    BOOL _needReportToBeacon; // +0x9
    long long _tpSetDataSourceStartSinceBootTimeMs; // +0x10
    long long _getConvertedDataSourceSinceBootTimeMs; // +0x18
    long long _tpPrepareStartSinceBootTimeMs; // +0x20
    long long _tpPrepareStartOccurTimeSince1970Ms; // +0x28
    NSString * _originalUrl; // +0x30
    long long _urlProtocol; // +0x38
    long long _playerType; // +0x40
    NSString * _playFlowId; // +0x48
}
- (id)init;
- (long long)tpSetDataSourceStartSinceBootTimeMs;
- (void)setTpSetDataSourceStartSinceBootTimeMs:(long long)arg1;
- (long long)getConvertedDataSourceSinceBootTimeMs;
- (void)setGetConvertedDataSourceSinceBootTimeMs:(long long)arg1;
- (long long)tpPrepareStartSinceBootTimeMs;
- (void)setTpPrepareStartSinceBootTimeMs:(long long)arg1;
- (long long)tpPrepareStartOccurTimeSince1970Ms;
- (void)setTpPrepareStartOccurTimeSince1970Ms:(long long)arg1;
- (id)originalUrl;
- (void)setOriginalUrl:(id)arg1;
- (long long)urlProtocol;
- (void)setUrlProtocol:(long long)arg1;
- (long long)playerType;
- (void)setPlayerType:(long long)arg1;
- (BOOL)isUseProxy;
- (void)setIsUseProxy:(BOOL)arg1;
- (id)playFlowId;
- (void)setPlayFlowId:(id)arg1;
- (BOOL)needReportToBeacon;
- (void)setNeedReportToBeacon:(BOOL)arg1;
- (void).cxx_destruct;
@end


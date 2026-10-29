@interface MMLiveAdsReportCGI : WCFinderLiveBaseCgi
{
    int _scene; // +0x8
    unsigned long long _objectId; // +0x10
    unsigned long long _liveId; // +0x18
    NSString * _reportData; // +0x20
}
- (id)description;
- (id)initWithObjId:(unsigned long long)arg1 liveId:(unsigned long long)arg2 scene:(int)arg3 reportData:(id)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (void).cxx_destruct;
@end


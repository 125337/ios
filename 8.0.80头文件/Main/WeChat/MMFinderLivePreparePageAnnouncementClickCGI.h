@interface MMFinderLivePreparePageAnnouncementClickCGI : WCFinderLiveBaseCgi
{
    NSString * _announcementId; // +0x8
    NSString * _finderUsername; // +0x10
}
- (id)initWithAnnouncementId:(id)arg1 finderUsername:(id)arg2;
- (void)createRequest;
- (BOOL)enableBindCellular;
- (BOOL)ignoreError;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)announcementId;
- (void)setAnnouncementId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderExtStatsReportCgi : WCFinderBaseCgi
{
    int _commentScene; // +0x8
    NSString * _extraKey; // +0x10
}
- (id)initWithDataItems:(id)arg1 commentScene:(int)arg2;
- (id)initWithExtStatsArray:(id)arg1 actionType:(unsigned int)arg2 commentScene:(int)arg3 extraKey:(id)arg4;
- (id)initWithExtStatsReddotInfo:(id)arg1 redDotObjectId:(unsigned long long)arg2;
- (void)createRequestWithDataItems:(id)arg1;
- (void)createRequestWithExtStatsArray:(id)arg1 actionType:(unsigned int)arg2;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)extraKey;
- (void)setExtraKey:(id)arg1;
- (void).cxx_destruct;
@end

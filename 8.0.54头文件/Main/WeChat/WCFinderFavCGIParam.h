@interface WCFinderFavCGIParam : NSObject
{
    BOOL _isFav; // +0x8
    int _scene; // +0xc
    int _sourceType; // +0x10
    NSString * _feedID; // +0x18
    NSString * _nonceID; // +0x20
    NSDictionary * _clientUdfKv; // +0x28
    FinderFavNewLifeReportInfo * _newlifeReportInfo; // +0x30
}
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (id)clientUdfKv;
- (void)setClientUdfKv:(id)arg1;
- (id)newlifeReportInfo;
- (void)setNewlifeReportInfo:(id)arg1;
- (void).cxx_destruct;
@end


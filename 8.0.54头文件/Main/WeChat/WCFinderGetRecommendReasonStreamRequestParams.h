@interface WCFinderGetRecommendReasonStreamRequestParams : NSObject
{
    int _commentScene; // +0x8
    int _prefetchType; // +0xc
    NSString * _bypassData; // +0x10
    NSData * _lastBuffer; // +0x18
    FinderClientStatus * _clientStatus; // +0x20
}
- (id)bypassData;
- (void)setBypassData:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (int)prefetchType;
- (void)setPrefetchType:(int)arg1;
- (void).cxx_destruct;
@end


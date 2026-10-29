@interface WCFinderGetRecommendReasonStreamRequestParams : NSObject
{
    int _commentScene; // +0x8
    int _prefetchType; // +0xc
    int _fromScene; // +0x10
    NSString * _bypassData; // +0x18
    NSData * _lastBuffer; // +0x20
    FinderClientStatus * _clientStatus; // +0x28
    NSString * _fromTid; // +0x30
    NSString * _fromSessionBuffer; // +0x38
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
- (id)fromTid;
- (void)setFromTid:(id)arg1;
- (id)fromSessionBuffer;
- (void)setFromSessionBuffer:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (void).cxx_destruct;
@end

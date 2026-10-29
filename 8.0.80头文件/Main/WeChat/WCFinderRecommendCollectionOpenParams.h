@interface WCFinderRecommendCollectionOpenParams : NSObject
{
    int _fromScene; // +0x8
    FinderGetRecommendReasonParams * _recommendParams; // +0x10
    NSString * _jumpInfoNativeByPassInfo; // +0x18
    NSString * _reportInfo; // +0x20
    NSString * _fromTid; // +0x28
    NSString * _fromSessionBuffer; // +0x30
}
- (id)recommendParams;
- (void)setRecommendParams:(id)arg1;
- (id)jumpInfoNativeByPassInfo;
- (void)setJumpInfoNativeByPassInfo:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)fromTid;
- (void)setFromTid:(id)arg1;
- (id)fromSessionBuffer;
- (void)setFromSessionBuffer:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (void).cxx_destruct;
@end

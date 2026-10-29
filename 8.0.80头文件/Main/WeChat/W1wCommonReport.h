@interface W1wCommonReport : NSObject
{
    int _scene; // +0x8
    NSString * _sessionId; // +0x10
    NSString * _sceneNote; // +0x18
    NSString * _extInfo; // +0x20
}
+ (id)commonReportWithDict:(id)arg1;
- (id)description;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

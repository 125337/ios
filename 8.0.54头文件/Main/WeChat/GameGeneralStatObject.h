@interface GameGeneralStatObject : NSObject
{
    unsigned int _opId; // +0x8
    unsigned int _processTime; // +0xc
    int _errorCode; // +0x10
    unsigned int _sceneId; // +0x14
    NSString * _errorDesc; // +0x18
}
- (id)init;
- (id)getReportStr;
- (unsigned int)opId;
- (void)setOpId:(unsigned int)arg1;
- (unsigned int)processTime;
- (void)setProcessTime:(unsigned int)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)errorDesc;
- (void)setErrorDesc:(id)arg1;
- (unsigned int)sceneId;
- (void)setSceneId:(unsigned int)arg1;
- (void).cxx_destruct;
@end


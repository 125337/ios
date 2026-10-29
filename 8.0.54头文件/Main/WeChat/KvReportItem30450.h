@interface KvReportItem30450 : KvReportBaseItem
{
    NSString * _bizType; // +0x8
    NSString * _type; // +0x10
    NSString * _subType; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _bizName; // +0x28
    NSString * _frameSetRootPath; // +0x30
    NSString * _frameSetName; // +0x38
    NSString * _extInfoStr1; // +0x40
    NSString * _extInfoStr2; // +0x48
    NSString * _extInfoStr3; // +0x50
}
- (unsigned int)reportKvId;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportNSStringPreprocessType;
- (id)bizType;
- (void)setBizType:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (id)subType;
- (void)setSubType:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)frameSetRootPath;
- (void)setFrameSetRootPath:(id)arg1;
- (id)frameSetName;
- (void)setFrameSetName:(id)arg1;
- (id)extInfoStr1;
- (void)setExtInfoStr1:(id)arg1;
- (id)extInfoStr2;
- (void)setExtInfoStr2:(id)arg1;
- (id)extInfoStr3;
- (void)setExtInfoStr3:(id)arg1;
- (void).cxx_destruct;
@end


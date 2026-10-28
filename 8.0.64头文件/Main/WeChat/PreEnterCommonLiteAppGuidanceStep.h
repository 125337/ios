@interface PreEnterCommonLiteAppGuidanceStep : PreEnterBaseStep <MMWebViewDelegate>
{
    BOOL _isValid; // +0x18
    BOOL _needSyncEscape; // +0x19
    int _timeout; // +0x1c
    int _escapeChoise; // +0x20
    NSString * _appid; // +0x28
    NSString * _page; // +0x30
    NSString * _scene; // +0x38
}
- (id)initWithMsg:(id)arg1;
- (id)stepId;
- (void)parseXmlString:(id)arg1;
- (void)startStep;
- (void)escapeGuidance;
- (void)onWebViewCloseAndGoNext:(id)arg1 webVC:(id)arg2 customClose:(BOOL *)arg3;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (int)timeout;
- (void)setTimeout:(int)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (int)escapeChoise;
- (void)setEscapeChoise:(int)arg1;
- (BOOL)needSyncEscape;
- (void)setNeedSyncEscape:(BOOL)arg1;
- (void).cxx_destruct;
@end

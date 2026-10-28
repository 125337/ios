@interface WCBulletinInfo : NSObject
{
    BOOL _enableDescExtend; // +0x8
    BOOL _isFromThemeGuide; // +0x9
    BOOL _isEdit; // +0xa
    NSString * _descriptionStr; // +0x10
    NSString * _descriptionExtend; // +0x18
    unsigned long long _seq; // +0x20
    NSString * _reportDescriptionStr; // +0x28
    NSString * _reportDescriptionExtend; // +0x30
    NSString * _aiAssistantInfoId; // +0x38
}
- (BOOL)enableDescExtend;
- (void)setEnableDescExtend:(BOOL)arg1;
- (BOOL)isFromThemeGuide;
- (void)setIsFromThemeGuide:(BOOL)arg1;
- (id)descriptionStr;
- (void)setDescriptionStr:(id)arg1;
- (id)descriptionExtend;
- (void)setDescriptionExtend:(id)arg1;
- (BOOL)isEdit;
- (void)setIsEdit:(BOOL)arg1;
- (unsigned long long)seq;
- (void)setSeq:(unsigned long long)arg1;
- (id)reportDescriptionStr;
- (void)setReportDescriptionStr:(id)arg1;
- (id)reportDescriptionExtend;
- (void)setReportDescriptionExtend:(id)arg1;
- (id)aiAssistantInfoId;
- (void)setAiAssistantInfoId:(id)arg1;
- (void).cxx_destruct;
@end

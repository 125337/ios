@interface BizTextCoverEditResult : NSObject
{
    NSString * _tempFilePath; // +0x8
    NSNumber * _aiPicSource; // +0x10
    NSString * _aiPicPrompt; // +0x18
    NSString * _aiPicId; // +0x20
    NSString * _aiPicDataBuf; // +0x28
    NSString * _aiPicTemplateId; // +0x30
    NSString * _aiPicStyle; // +0x38
}
+ (id)makeWithTempFilePath:(id)arg1 aiPicSource:(id)arg2 aiPicPrompt:(id)arg3 aiPicId:(id)arg4 aiPicDataBuf:(id)arg5 aiPicTemplateId:(id)arg6 aiPicStyle:(id)arg7;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)tempFilePath;
- (void)setTempFilePath:(id)arg1;
- (id)aiPicSource;
- (void)setAiPicSource:(id)arg1;
- (id)aiPicPrompt;
- (void)setAiPicPrompt:(id)arg1;
- (id)aiPicId;
- (void)setAiPicId:(id)arg1;
- (id)aiPicDataBuf;
- (void)setAiPicDataBuf:(id)arg1;
- (id)aiPicTemplateId;
- (void)setAiPicTemplateId:(id)arg1;
- (id)aiPicStyle;
- (void)setAiPicStyle:(id)arg1;
- (void).cxx_destruct;
@end

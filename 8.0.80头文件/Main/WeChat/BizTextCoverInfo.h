@interface BizTextCoverInfo : NSObject
{
    NSString * _prompt; // +0x8
    NSString * _coverUrl; // +0x10
    NSString * _coverId; // +0x18
    NSString * _templateId; // +0x20
    NSString * _dataBuf; // +0x28
    NSString * _style; // +0x30
}
+ (id)makeWithPrompt:(id)arg1 coverUrl:(id)arg2 coverId:(id)arg3 templateId:(id)arg4 dataBuf:(id)arg5 style:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)prompt;
- (void)setPrompt:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)coverId;
- (void)setCoverId:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)dataBuf;
- (void)setDataBuf:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCADQuestionStatItem : MMObject
{
    unsigned int uiBeginTime; // +0x8
    unsigned int uiEndTime; // +0xc
    NSString * nsPublishId; // +0x10
    NSString * nsExpId; // +0x18
    NSString * nsUxInfo; // +0x20
    NSString * nsActionResult; // +0x28
}
- (id)nsPublishId;
- (void)setNsPublishId:(id)arg1;
- (id)nsExpId;
- (void)setNsExpId:(id)arg1;
- (id)nsUxInfo;
- (void)setNsUxInfo:(id)arg1;
- (id)nsActionResult;
- (void)setNsActionResult:(id)arg1;
- (unsigned int)uiBeginTime;
- (void)setUiBeginTime:(unsigned int)arg1;
- (unsigned int)uiEndTime;
- (void)setUiEndTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end


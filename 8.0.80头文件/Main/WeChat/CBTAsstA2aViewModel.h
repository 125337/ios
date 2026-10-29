@interface CBTAsstA2aViewModel : CBTCoopV2AsstBoardViewModel
{
    NSString * _toUsername; // +0x8
    NSString * _taskId; // +0x10
    NSString * _targetNickname; // +0x18
    NSString * _conversationId; // +0x20
    NSString * _displayTitle; // +0x28
    NSString * _displaySubtitle; // +0x30
}
+ (double)heightForText:(id)arg1 font:(id)arg2 width:(double)arg3;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;
- (void)parseFromCardWrap:(id)arg1;
- (id)buildDisplayTitle;
- (id)resolveDisplayName;
- (double)mesureContentViewHeightWithWidth:(double)arg1;
- (id)getCellReuseId;
- (id)copyableText;
- (id)coopV2ReportCardTitle;
- (id)coopV2ReportCardSubtitle;
- (id)coopV2ReportCardDescription;
- (double)cardWidthForAvailableWidth:(double)arg1;
- (id)toUsername;
- (void)setToUsername:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)targetNickname;
- (void)setTargetNickname:(id)arg1;
- (id)conversationId;
- (void)setConversationId:(id)arg1;
- (id)displayTitle;
- (void)setDisplayTitle:(id)arg1;
- (id)displaySubtitle;
- (void)setDisplaySubtitle:(id)arg1;
- (void).cxx_destruct;
@end

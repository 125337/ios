@interface WWKFReportUtil : MMObject
+ (void)reportFlowAction:(long long)arg1;
+ (void)reportFlowAction:(long long)arg1 userName:(id)arg2;
+ (void)reportFlowAction:(long long)arg1 userName:(id)arg2 extInfo:(id)arg3;
+ (void)reportFlowAction:(long long)arg1 scene:(int)arg2 contact:(id)arg3;
+ (void)reportFlowAction:(long long)arg1 scene:(int)arg2 contact:(id)arg3 extInfo:(id)arg4;
+ (int)chatTypeWithContact:(id)arg1;
+ (unsigned int)getToolbarItemLinkTypeWithActionUrl:(id)arg1;
+ (id)getKFChatSessionId;
@end


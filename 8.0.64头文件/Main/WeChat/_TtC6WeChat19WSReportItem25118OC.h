@interface _TtC6WeChat19WSReportItem25118OC : NSObject
{
     reportItem; // +0x8
}
+ (long long)ActionPull;
+ (long long)ActionExpose;
+ (long long)ActionClick;
+ (long long)ActionAllSearch;
+ (long long)ActionToTeachPage;
+ (long long)ActionLiteApp;
+ (long long)ActionToAISearch;
+ (long long)ActionClickDelete;
+ (long long)ActionClickEdit;
+ (long long)ActionClickEditFinish;
+ (long long)ActionClickShowDialog;
- (id)initWithSessionId:(id)arg1 requestId:(id)arg2 actionId:(long long)arg3 itemInfo:(id)arg4 docInfo:(id)arg5 scene:(unsigned long long)arg6 businessType:(long long)arg7;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void)report;
- (id)init;
- (void).cxx_destruct;
@end

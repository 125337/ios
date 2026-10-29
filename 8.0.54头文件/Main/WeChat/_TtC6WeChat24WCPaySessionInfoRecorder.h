@interface _TtC6WeChat24WCPaySessionInfoRecorder : MMUserService <MMServiceProtocol>
{
     jsapiInfoMap; // +0x8
}
+ (long long)chatTypeValueFromGetUrlInfoSession:(id)arg1 msgUserName:(id)arg2;
+ (long long)chatTypeValueFromTimeline:(id)arg1;
+ (long long)chatTypeValueFromTalker:(id)arg1;
+ (long long)sendTypeValueFromSender:(id)arg1;
+ (long long)commonSendTypeValue;
- (void)setJsApiPayInfoWithIdentifier:(id)arg1 data:(id)arg2;
- (void)setJsApiPayInfoWithOpenParam:(id)arg1 data:(id)arg2;
- (void)setJsApiPayInfoWithOpenParam:(id)arg1 finderReportData:(id)arg2;
- (id)getJsApiPayInfoWithUsername:(id)arg1 appId:(id)arg2 mpShortLink:(id)arg3;
- (id)init;
- (void).cxx_destruct;
@end


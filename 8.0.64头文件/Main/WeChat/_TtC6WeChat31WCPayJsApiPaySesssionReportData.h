@interface _TtC6WeChat31WCPayJsApiPaySesssionReportData : NSObject
{
     chatType; // +0x8
     sendType; // +0x9
     sessionType; // +0xa
     sessionName; // +0x10
     timelineObjId; // +0x20
     msgSvrId; // +0x30
}
- (id)sessionName;
- (id)timelineObjId;
- (id)msgSvrId;
- (id)chatTypeValue;
- (id)sendTypeValue;
- (id)sessionTypeValue;
- (id)initWithTimelineSender:(id)arg1;
- (id)initWithTalker:(id)arg1 sender:(id)arg2;
- (id)initWithGetUrlInfoSession:(id)arg1 msgUserName:(id)arg2 msgSvrId:(id)arg3;
- (id)initWithTopicReportItem:(id)arg1;
- (id)initWithFinderData:(id)arg1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end

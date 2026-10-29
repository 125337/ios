@interface _TtC6WeChat31WCPayJsApiPaySesssionReportData : NSObject
{
     chatType; // +0x8
     sendType; // +0x9
     sessionType; // +0xa
    void * sessionName; // +0x10
    void * timelineObjId; // +0x20
    void * msgSvrId; // +0x30
    void * initRawUrl; // +0x40
    long long initTimestamp; // +0x50
}
- (id)sessionName;
- (id)timelineObjId;
- (id)msgSvrId;
- (id)initRawUrl;
- (long long)initTimestamp;
- (id)chatTypeValue;
- (id)sendTypeValue;
- (id)sessionTypeValue;
- (id)initWithTimelineSender:(id)arg1;
- (id)initWithTalker:(id)arg1 sender:(id)arg2;
- (id)initWithGetUrlInfoSession:(id)arg1 msgUserName:(id)arg2 msgSvrId:(id)arg3;
- (id)initWithGetUrlInfoSession:(id)arg1 msgUserName:(id)arg2 msgSvrId:(id)arg3 initRawUrl:(id)arg4 initTimestamp:(long long)arg5;
- (id)initWithTopicReportItem:(id)arg1;
- (id)initWithFinderData:(id)arg1;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end

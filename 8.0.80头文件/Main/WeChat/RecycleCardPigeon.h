@interface RecycleCardPigeon : NSObject
{
    NSString * _extra_data; // +0x8
    NSNumber * _clientmsgid; // +0x10
    NSNumber * _flag; // +0x18
    NSString * _report_data; // +0x20
    NSString * _clientmsgidStr; // +0x28
}
+ (id)makeWithExtra_data:(id)arg1 clientmsgid:(id)arg2 flag:(id)arg3 report_data:(id)arg4 clientmsgidStr:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)extra_data;
- (void)setExtra_data:(id)arg1;
- (id)clientmsgid;
- (void)setClientmsgid:(id)arg1;
- (id)flag;
- (void)setFlag:(id)arg1;
- (id)report_data;
- (void)setReport_data:(id)arg1;
- (id)clientmsgidStr;
- (void)setClientmsgidStr:(id)arg1;
- (void).cxx_destruct;
@end

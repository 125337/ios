@interface BoxBizFinderLiveInfo : NSObject
{
    NSString * _bizusername; // +0x8
    NSString * _finder_feed_export_id; // +0x10
    NSNumber * _refresh_interval; // +0x18
    NSString * _title; // +0x20
    NSNumber * _live_scene; // +0x28
    NSString * _cover; // +0x30
    NSNumber * _use_weapp; // +0x38
    NSString * _finder_session_buffer; // +0x40
    FlutterStandardTypedData * _data_buffer; // +0x48
    BoxWeApp_Data * _weapp_data; // +0x50
    BoxFinder_Data * _finder_data; // +0x58
    NSNumber * _live_status; // +0x60
    NSString * _from_session_id_info; // +0x68
    NSString * _nonce_id; // +0x70
    NSString * _report_info; // +0x78
}
+ (id)makeWithBizusername:(id)arg1 finder_feed_export_id:(id)arg2 refresh_interval:(id)arg3 title:(id)arg4 live_scene:(id)arg5 cover:(id)arg6 use_weapp:(id)arg7 finder_session_buffer:(id)arg8 data_buffer:(id)arg9 weapp_data:(id)arg10 finder_data:(id)arg11 live_status:(id)arg12 from_session_id_info:(id)arg13 nonce_id:(id)arg14 report_info:(id)arg15;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toBizFinderLiveInfo;
- (id)toList;
- (id)bizusername;
- (void)setBizusername:(id)arg1;
- (id)finder_feed_export_id;
- (void)setFinder_feed_export_id:(id)arg1;
- (id)refresh_interval;
- (void)setRefresh_interval:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)live_scene;
- (void)setLive_scene:(id)arg1;
- (id)cover;
- (void)setCover:(id)arg1;
- (id)use_weapp;
- (void)setUse_weapp:(id)arg1;
- (id)finder_session_buffer;
- (void)setFinder_session_buffer:(id)arg1;
- (id)data_buffer;
- (void)setData_buffer:(id)arg1;
- (id)weapp_data;
- (void)setWeapp_data:(id)arg1;
- (id)finder_data;
- (void)setFinder_data:(id)arg1;
- (id)live_status;
- (void)setLive_status:(id)arg1;
- (id)from_session_id_info;
- (void)setFrom_session_id_info:(id)arg1;
- (id)nonce_id;
- (void)setNonce_id:(id)arg1;
- (id)report_info;
- (void)setReport_info:(id)arg1;
- (void).cxx_destruct;
@end

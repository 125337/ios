@interface WAReportOpenMaterialEntrenceItem : WAReportBaseItem
{
    unsigned int _scene_id; // +0x8
    NSString * _session; // +0x10
    NSString * _weapp_id; // +0x18
    NSString * _weapp_name; // +0x20
}
- (int)reportID;
- (id)reportString;
- (id)session;
- (void)setSession:(id)arg1;
- (unsigned int)scene_id;
- (void)setScene_id:(unsigned int)arg1;
- (id)weapp_id;
- (void)setWeapp_id:(id)arg1;
- (id)weapp_name;
- (void)setWeapp_name:(id)arg1;
- (void).cxx_destruct;
@end


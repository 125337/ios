@interface WAReportOpenMaterialListItem : WAReportBaseItem
{
    unsigned int _weapp_sum; // +0x8
    unsigned int _weapp_index; // +0xc
    NSString * _session; // +0x10
    NSString * _weapp_id; // +0x18
    NSString * _weapp_name; // +0x20
}
- (int)reportID;
- (id)reportString;
- (id)session;
- (void)setSession:(id)arg1;
- (unsigned int)weapp_sum;
- (void)setWeapp_sum:(unsigned int)arg1;
- (unsigned int)weapp_index;
- (void)setWeapp_index:(unsigned int)arg1;
- (id)weapp_id;
- (void)setWeapp_id:(id)arg1;
- (id)weapp_name;
- (void)setWeapp_name:(id)arg1;
- (void).cxx_destruct;
@end


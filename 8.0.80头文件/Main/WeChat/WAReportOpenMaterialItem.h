@interface WAReportOpenMaterialItem : WAReportBaseItem
{
    unsigned int _action_type; // +0x8
    unsigned int _scene_type; // +0xc
    unsigned int _weapp_sum; // +0x10
    unsigned int _weapp_index; // +0x14
    unsigned int _open_type; // +0x18
    NSString * _session; // +0x20
    NSString * _weapp_id; // +0x28
    NSString * _weapp_name; // +0x30
}
- (int)reportID;
- (id)reportString;
- (id)session;
- (void)setSession:(id)arg1;
- (unsigned int)action_type;
- (void)setAction_type:(unsigned int)arg1;
- (unsigned int)scene_type;
- (void)setScene_type:(unsigned int)arg1;
- (unsigned int)weapp_sum;
- (void)setWeapp_sum:(unsigned int)arg1;
- (unsigned int)weapp_index;
- (void)setWeapp_index:(unsigned int)arg1;
- (id)weapp_id;
- (void)setWeapp_id:(id)arg1;
- (id)weapp_name;
- (void)setWeapp_name:(id)arg1;
- (unsigned int)open_type;
- (void)setOpen_type:(unsigned int)arg1;
- (void).cxx_destruct;
@end

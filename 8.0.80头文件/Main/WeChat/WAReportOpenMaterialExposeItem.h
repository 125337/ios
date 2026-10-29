@interface WAReportOpenMaterialExposeItem : WAReportBaseItem
{
    unsigned int _scene_id; // +0x8
    unsigned int _open_type; // +0xc
    unsigned int _item_type; // +0x10
    unsigned int _device_type; // +0x14
    NSString * _session; // +0x18
    NSString * _weapp_id; // +0x20
    NSString * _weapp_name; // +0x28
    NSString * _device_id; // +0x30
    NSString * _device_display_name; // +0x38
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
- (unsigned int)open_type;
- (void)setOpen_type:(unsigned int)arg1;
- (unsigned int)item_type;
- (void)setItem_type:(unsigned int)arg1;
- (id)device_id;
- (void)setDevice_id:(id)arg1;
- (id)device_display_name;
- (void)setDevice_display_name:(id)arg1;
- (unsigned int)device_type;
- (void)setDevice_type:(unsigned int)arg1;
- (void).cxx_destruct;
@end

@interface WAReportWidgetIDKeyItem : WAReportWidgetBaseItem
{
    unsigned int _idkey_id; // +0x8
    unsigned int _idkey_key; // +0xc
    unsigned int _idkey_value; // +0x10
    unsigned int _serviceType; // +0x14
    NSString * _searchQuery; // +0x18
    NSString * _extParams; // +0x20
    NSString * _srcAppid; // +0x28
}
- (int)reportID;
- (id)reportString;
- (unsigned int)idkey_id;
- (void)setIdkey_id:(unsigned int)arg1;
- (unsigned int)idkey_key;
- (void)setIdkey_key:(unsigned int)arg1;
- (unsigned int)idkey_value;
- (void)setIdkey_value:(unsigned int)arg1;
- (unsigned int)serviceType;
- (void)setServiceType:(unsigned int)arg1;
- (id)searchQuery;
- (void)setSearchQuery:(id)arg1;
- (id)extParams;
- (void)setExtParams:(id)arg1;
- (id)srcAppid;
- (void)setSrcAppid:(id)arg1;
- (void).cxx_destruct;
@end


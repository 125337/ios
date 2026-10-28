@interface WCPayFetchCashierWithField : NSObject
{
    long long _is_open_field_area; // +0x8
    FieldAreaInfo * _field_area_info; // +0x10
    NSString * _fetch_fee; // +0x18
    NSString * _fetch_fee_symbol; // +0x20
}
+ (id)GenFromDic:(id)arg1;
- (long long)is_open_field_area;
- (void)setIs_open_field_area:(long long)arg1;
- (id)field_area_info;
- (void)setField_area_info:(id)arg1;
- (id)fetch_fee;
- (void)setFetch_fee:(id)arg1;
- (id)fetch_fee_symbol;
- (void)setFetch_fee_symbol:(id)arg1;
- (void).cxx_destruct;
@end

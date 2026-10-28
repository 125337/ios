@interface WeApp_Data : NSObject
{
    NSString * _appid; // +0x8
    NSNumber * _version_type; // +0x10
    FlutterStandardTypedData * _data_buffer; // +0x18
    NSString * _path; // +0x20
}
+ (id)makeWithAppid:(id)arg1 version_type:(id)arg2 data_buffer:(id)arg3 path:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)version_type;
- (void)setVersion_type:(id)arg1;
- (id)data_buffer;
- (void)setData_buffer:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end

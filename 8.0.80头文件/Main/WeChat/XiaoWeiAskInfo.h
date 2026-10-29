@interface XiaoWeiAskInfo : NSObject
{
    unsigned long long _type; // +0x8
    FlutterStandardTypedData * _tingItemData; // +0x10
    FlutterStandardTypedData * _categoryItemData; // +0x18
    NSString * _query; // +0x20
    NSString * _queryBuffer; // +0x28
    NSString * _srcInfoJson; // +0x30
}
+ (id)makeWithType:(unsigned long long)arg1 tingItemData:(id)arg2 categoryItemData:(id)arg3 query:(id)arg4 queryBuffer:(id)arg5 srcInfoJson:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)tingItemData;
- (void)setTingItemData:(id)arg1;
- (id)categoryItemData;
- (void)setCategoryItemData:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)queryBuffer;
- (void)setQueryBuffer:(id)arg1;
- (id)srcInfoJson;
- (void)setSrcInfoJson:(id)arg1;
- (void).cxx_destruct;
@end

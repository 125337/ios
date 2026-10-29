@interface TingVideoShareData : NSObject
{
    NSString * _url; // +0x8
    NSString * _desc; // +0x10
    NSString * _iconId; // +0x18
}
+ (id)makeWithUrl:(id)arg1 desc:(id)arg2 iconId:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)iconId;
- (void)setIconId:(id)arg1;
- (void).cxx_destruct;
@end

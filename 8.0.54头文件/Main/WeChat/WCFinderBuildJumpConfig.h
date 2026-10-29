@interface WCFinderBuildJumpConfig : NSObject
{
    int _business_type; // +0x8
    NSString * _wording; // +0x10
    NSString * _recommend_reason; // +0x18
    NSString * _report_info; // +0x20
    NSString * _icon_url; // +0x28
    NSString * _ext_buff_string; // +0x30
}
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)description;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)recommend_reason;
- (void)setRecommend_reason:(id)arg1;
- (id)report_info;
- (void)setReport_info:(id)arg1;
- (id)icon_url;
- (void)setIcon_url:(id)arg1;
- (int)business_type;
- (void)setBusiness_type:(int)arg1;
- (id)ext_buff_string;
- (void)setExt_buff_string:(id)arg1;
- (void).cxx_destruct;
@end


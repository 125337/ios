@interface WAJSApiBanInfoToast : WABaseInfoToast
{
    NSDictionary * m_jsApiNameMap; // +0x38
    MMUILabel * m_noticeLabel; // +0x40
    NSString * _jsapiName; // +0x48
}
- (id)init;
- (void)initToastView;
- (void)initJsApiNameMap;
- (void)layoutSubviews;
- (void)setJsapiName:(id)arg1;
- (id)jsapiName;
- (void).cxx_destruct;
@end

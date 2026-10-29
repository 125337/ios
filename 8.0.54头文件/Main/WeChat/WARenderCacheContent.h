@interface WARenderCacheContent : NSObject <PBCoding>
{
    NSString * _content; // +0x8
    NSString * _webviewDataStr; // +0x10
    NSString * _appserviceDataStr; // +0x18
}
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_webviewDataStr;
+ (void)PBArrayAdd_appserviceDataStr;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)content;
- (void)setContent:(id)arg1;
- (id)webviewDataStr;
- (void)setWebviewDataStr:(id)arg1;
- (id)appserviceDataStr;
- (void)setAppserviceDataStr:(id)arg1;
- (void).cxx_destruct;
@end


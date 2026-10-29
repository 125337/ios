@interface WxaLiteAppWidgetBodySizeChangeMessage : NSObject
{
    NSNumber * _appUuid; // +0x8
    NSString * _appId; // +0x10
    NSNumber * _pageId; // +0x18
    NSNumber * _width; // +0x20
    NSNumber * _height; // +0x28
}
+ (id)makeWithAppUuid:(id)arg1 appId:(id)arg2 pageId:(id)arg3 width:(id)arg4 height:(id)arg5;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (void).cxx_destruct;
@end

@interface WebViewSanboxTaskAuthInfo : MMObject
{
    NSData * _permissionData; // +0x8
    NSString * _fullUrl; // +0x10
    NSMutableDictionary * _httpHeaders; // +0x18
}
- (id)permissionData;
- (void)setPermissionData:(id)arg1;
- (id)fullUrl;
- (void)setFullUrl:(id)arg1;
- (id)httpHeaders;
- (void)setHttpHeaders:(id)arg1;
- (void).cxx_destruct;
@end

@interface WxaLiteAppWidgetShowViewMessage : NSObject
{
    NSString * _appId; // +0x8
    NSString * _page; // +0x10
    NSString * _query; // +0x18
    NSString * _referrerInfo; // +0x20
    NSString * _path; // +0x28
    NSString * _signatureKey; // +0x30
    NSNumber * _appUuid; // +0x38
    NSNumber * _isTransparent; // +0x40
    NSString * _sourceType; // +0x48
    NSArray * _enableActions; // +0x50
    NSArray * _enableViews; // +0x58
    NSNumber * _openId; // +0x60
}
+ (id)makeWithAppId:(id)arg1 page:(id)arg2 query:(id)arg3 referrerInfo:(id)arg4 path:(id)arg5 signatureKey:(id)arg6 appUuid:(id)arg7 isTransparent:(id)arg8 sourceType:(id)arg9 enableActions:(id)arg10 enableViews:(id)arg11 openId:(id)arg12;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)referrerInfo;
- (void)setReferrerInfo:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)signatureKey;
- (void)setSignatureKey:(id)arg1;
- (id)appUuid;
- (void)setAppUuid:(id)arg1;
- (id)isTransparent;
- (void)setIsTransparent:(id)arg1;
- (id)sourceType;
- (void)setSourceType:(id)arg1;
- (id)enableActions;
- (void)setEnableActions:(id)arg1;
- (id)enableViews;
- (void)setEnableViews:(id)arg1;
- (id)openId;
- (void)setOpenId:(id)arg1;
- (void).cxx_destruct;
@end

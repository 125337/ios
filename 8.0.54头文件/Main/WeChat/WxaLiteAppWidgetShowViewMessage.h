@interface WxaLiteAppWidgetShowViewMessage : NSObject
{
    BOOL _isTransparent; // +0x8
    NSString * _appId; // +0x10
    NSString * _page; // +0x18
    NSString * _query; // +0x20
    NSString * _referrerInfo; // +0x28
    NSString * _path; // +0x30
    NSString * _signatureKey; // +0x38
    long long _appUuid; // +0x40
    NSString * _sourceType; // +0x48
    NSArray * _enableActions; // +0x50
    NSArray * _enableViews; // +0x58
}
+ (id)makeWithAppId:(id)arg1 page:(id)arg2 query:(id)arg3 referrerInfo:(id)arg4 path:(id)arg5 signatureKey:(id)arg6 appUuid:(long long)arg7 isTransparent:(BOOL)arg8 sourceType:(id)arg9 enableActions:(id)arg10 enableViews:(id)arg11;
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
- (long long)appUuid;
- (void)setAppUuid:(long long)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (id)sourceType;
- (void)setSourceType:(id)arg1;
- (id)enableActions;
- (void)setEnableActions:(id)arg1;
- (id)enableViews;
- (void)setEnableViews:(id)arg1;
- (void).cxx_destruct;
@end


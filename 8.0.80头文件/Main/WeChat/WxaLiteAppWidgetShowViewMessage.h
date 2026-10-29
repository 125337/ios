@interface WxaLiteAppWidgetShowViewMessage : NSObject
{
    NSString * _appId; // +0x8
    NSString * _page; // +0x10
    NSString * _query; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _referrerInfo; // +0x28
    NSDictionary * _extraData; // +0x30
    NSString * _path; // +0x38
    NSString * _signatureKey; // +0x40
    NSNumber * _appUuid; // +0x48
    NSNumber * _isTransparent; // +0x50
    NSString * _sourceType; // +0x58
    NSArray * _enableActions; // +0x60
    NSArray * _enableViews; // +0x68
    NSNumber * _openId; // +0x70
    NSNumber * _width; // +0x78
    NSNumber * _height; // +0x80
    NSNumber * _isHalfScreen; // +0x88
    NSNumber * _isEmbedView; // +0x90
    NSNumber * _autoWidth; // +0x98
    NSNumber * _autoHeight; // +0xa0
}
+ (id)makeWithAppId:(id)arg1 page:(id)arg2 query:(id)arg3 sessionId:(id)arg4 referrerInfo:(id)arg5 extraData:(id)arg6 path:(id)arg7 signatureKey:(id)arg8 appUuid:(id)arg9 isTransparent:(id)arg10 sourceType:(id)arg11 enableActions:(id)arg12 enableViews:(id)arg13 openId:(id)arg14 width:(id)arg15 height:(id)arg16 isHalfScreen:(id)arg17 isEmbedView:(id)arg18 autoWidth:(id)arg19 autoHeight:(id)arg20;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)referrerInfo;
- (void)setReferrerInfo:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
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
- (id)width;
- (void)setWidth:(id)arg1;
- (id)height;
- (void)setHeight:(id)arg1;
- (id)isHalfScreen;
- (void)setIsHalfScreen:(id)arg1;
- (id)isEmbedView;
- (void)setIsEmbedView:(id)arg1;
- (id)autoWidth;
- (void)setAutoWidth:(id)arg1;
- (id)autoHeight;
- (void)setAutoHeight:(id)arg1;
- (void).cxx_destruct;
@end

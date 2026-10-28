@interface MMResourceMgrUtility : NSObject
+ (id)getResourceRootDir;
+ (id)getResourceCdnDownloadDir;
+ (id)getResourceCdnDownloadSuccessDir;
+ (id)getResourceDir:(long long)arg1;
+ (id)getResourceDirDependentOnClientVersion:(long long)arg1;
+ (id)getResourcePath:(long long)arg1;
+ (id)getResourcePath:(long long)arg1 WithSubResType:(unsigned int)arg2;
+ (id)getTestResourcePath:(long long)arg1 WithSubResType:(unsigned int)arg2 WithEID:(unsigned int)arg3;
+ (id)getResourceInfoDBPath;
+ (id)getResourceCheckResponseDataPath;
+ (id)getResourceDirectDownloadDir;
+ (id)getUrlWithoutParam:(id)arg1;
+ (id)getMd5FromStr:(id)arg1 deleteUrlScheme:(BOOL)arg2;
+ (int)crc32WithData:(id)arg1;
+ (id)appendRandomParamToUrlStr:(id)arg1;
@end

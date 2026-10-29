@interface CommonTingNativeControllerCommonDataObjc : NSObject
+ (void)followFinderAccount:(id)arg1 isCancel:(BOOL)arg2 tingItemData:(id)arg3 requestScene:(long long)arg4 extraInfo:(id)arg5 callback:(id /* block */)arg6;
+ (void)getBrandContactInfo:(id)arg1 callback:(id /* block */)arg2;
+ (void)getContactInfo:(id)arg1 callback:(id /* block */)arg2;
+ (void)getContactInfoFromHash:(id)arg1 callback:(id /* block */)arg2;
+ (void)getFinderContactInfo:(id)arg1 callback:(id /* block */)arg2;
+ (void)getPoiInfo:(id /* block */)arg1;
+ (void)getWxUsername:(id /* block */)arg1;
+ (void)onFinderFeedLike:(id)arg1 nonceId:(id)arg2 actToLike:(BOOL)arg3 realName:(BOOL)arg4 callback:(id /* block */)arg5;
+ (void)requestMediaInfo:(id)arg1 callback:(id /* block */)arg2;
+ (id)getContactByUsername:(id)arg1;
+ (id)genAsyncResult:(long long)arg1 errMsg:(id)arg2;
@end


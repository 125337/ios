@interface WCBrandServiceUtil : NSObject
+ (BOOL)isBrandServiceBoxAccount:(id)arg1;
+ (BOOL)isBrandServiceBoxAccount:(id)arg1 includePlaceTop:(BOOL)arg2;
+ (id)getArrBrandServiceSessionWithLimit:(unsigned int)arg1;
+ (id)getArrBrandServiceSessionWithLimit:(unsigned int)arg1 includePlaceTop:(BOOL)arg2;
+ (id)getRecentBrandServiceInfoWithLimit:(unsigned int)arg1;
+ (id)transerSessionInfo2AccountInfo:(id)arg1;
+ (id)getContactByUsername:(id)arg1;
+ (id)getDigestContentWithMsgWrap:(id)arg1 includeNickName:(BOOL)arg2;
+ (id)getDigestWithMsgWrap:(id)arg1;
+ (id)getDigestWithMsgWrapNoNickName:(id)arg1;
+ (void)handleBrandUnsubscribe:(id)arg1;
+ (id)transferPriceToText:(long long)arg1;
@end

@interface WCBrandServiceUtil : NSObject
+ (BOOL)isBrandServiceBoxAccount:(id)arg1;
+ (id)getArrBrandServiceSessionWithLimit:(unsigned int)arg1;
+ (id)getRecentBrandServiceInfoWithLimit:(unsigned int)arg1;
+ (id)transerSessionInfo2AccountInfo:(id)arg1;
+ (id)getContactByUsername:(id)arg1;
+ (id)getDigestWithMsgWrap:(id)arg1;
@end


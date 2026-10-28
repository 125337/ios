@interface StatusAffDBUtils : NSObject
+ (id)createPbStatusRawData:(id)arg1 emojiInfo:(id)arg2 poiInfo:(id)arg3 option:(long long)arg4 extraInfo:(id)arg5 visibilityInfo:(id)arg6 customInfo:(id)arg7 mediaInfos:(id)arg8 footerInfo:(id)arg9;
+ (id)tsModel2Proto:(id)arg1;
+ (id)createPrivateInfoData:(id)arg1;
+ (id)createPBPoiInfo:(id)arg1;
+ (id)createPBExtraInfo:(id)arg1;
+ (id)createStatusMediaInfo:(id)arg1;
+ (id)createStatusFooterInfo:(id)arg1;
+ (id)createVisibilityInfo:(id)arg1;
+ (id)createCustomInfo:(id)arg1;
+ (BOOL)isNullOrEmpty:(id)arg1;
+ (id)proto2TsModel:(id)arg1;
+ (void)privateInfoDataFillModel:(id)arg1 model:(id)arg2;
+ (void)rawDataFillModel:(id)arg1 model:(id)arg2;
+ (id)tsComment2Proto:(id)arg1;
+ (id)proto2TsComment:(id)arg1;
+ (id)tsLike2Proto:(id)arg1;
+ (id)proto2TsLike:(id)arg1;
+ (id)createMessageThumbData:(id)arg1;
+ (id)packDBLikeId:(id)arg1;
+ (long long)unPackDBLikeId:(id)arg1;
@end

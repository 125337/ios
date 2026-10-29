@interface MiniTaskFromFavBuilder : NSObject
+ (id)buildMiniTaskDataFromFavoritesItem:(id)arg1;
+ (id)delegateClassNameForBizName:(id)arg1;
+ (id)taskBizKeyFromFavoritesItem:(id)arg1;
+ (id)taskBizKeyByTypeRuleForFavoritesItem:(id)arg1;
+ (id)thumbUrlFromFavoritesItem:(id)arg1;
+ (id)baseMiniTaskWithBizName:(id)arg1 bizKey:(id)arg2 title:(id)arg3 subtitle:(id)arg4 thumbUrl:(id)arg5 currentUser:(id)arg6 nowTime:(unsigned int)arg7;
+ (id)miniTaskFromWebFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
+ (id)miniTaskFromFinderFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
+ (id)miniTaskFromLiteAppFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
+ (id)navBarParamsJSONStringFromCustomDict:(id)arg1;
+ (id)miniTaskFromSearchFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
+ (id)miniTaskFromWeNoteFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
+ (id)miniTaskFromFileFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
+ (id)miniTaskFromWeAppFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
+ (id)miniTaskFromTingFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
+ (id)miniTaskFromMusicFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
+ (id)miniTaskFromImgFavItem:(id)arg1 currentUser:(id)arg2 nowTime:(unsigned int)arg3 thumbUrl:(id)arg4;
@end

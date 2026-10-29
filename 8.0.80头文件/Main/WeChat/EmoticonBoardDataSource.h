@interface EmoticonBoardDataSource : NSObject
+ (id)getEmoticonBoardDataWithPackageArray:(id)arg1 andCouldShowTip:(BOOL)arg2;
+ (id)getIPMergedEmoticonBoardDataWithPackageArray:(id)arg1;
+ (id)getIPTipEmoticonBoardDataWithPackageArray:(id)arg1;
+ (id)getRecommandBoardDataWithRecommandItemArray:(id)arg1;
+ (id)getTabRecommandItemsWithStickerPackages:(id)arg1 recommandMaxCount:(long long)arg2;
+ (id)tabItemFromPackWrap:(id)arg1;
+ (id)tabItemFromRecommandItem:(id)arg1;
+ (id)getStoreEmoticonPageWrapWithRecommandItem:(id)arg1;
+ (id)getStoreEmoticonPageWrapWithPackWrap:(id)arg1;
+ (id)getCustomEmoticonPageWrapWithShowCustomEntry:(BOOL)arg1 AndshowGameEmoticon:(BOOL)arg2;
+ (id)getCameraEmoticonPageWrapWithShowCameraEntry:(BOOL)arg1;
+ (id)getIPEmoticonPageWrapWithIPSetKey:(id)arg1;
+ (id)getIPEmoticonIPTipPageWrapWithPid:(id)arg1;
+ (id)getEmoticonListWithPageWrap:(id)arg1;
+ (id)getStoreEmoticonListWithPageWrap:(id)arg1;
+ (id)getCustomOrCameraEmoticonListWithPageWrap:(id)arg1;
+ (id)getEmoticonListWithPid:(id)arg1 needCheckImageExist:(BOOL)arg2;
+ (id)checkImageExistInEmoticonWrapArray:(id)arg1 abortOnFailure:(BOOL)arg2;
+ (id)getCustomEmoticonListWithNeedCheckImageExist:(BOOL)arg1 andShowGameEmoticon:(BOOL)arg2;
+ (id)getCameraEmoticonListWithNeedCheckImageExist:(BOOL)arg1;
@end

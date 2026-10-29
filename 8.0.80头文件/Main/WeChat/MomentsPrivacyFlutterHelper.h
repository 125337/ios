@interface MomentsPrivacyFlutterHelper : NSObject
+ (id)flutterContactArrayToCContactSet:(id)arg1;
+ (id)CCContactArrayToFlutterContatctArray:(id)arg1;
+ (id)userNametArrayToFlutterContactArray:(id)arg1;
+ (id)getIncludeUserFromSnsVisibilityData:(id)arg1;
+ (id)getExcludeUserFromSnsVisibilityData:(id)arg1;
+ (id)getInteractUserFromSnsVisibilityData:(id)arg1;
+ (id)getIncludeLableNamesFromSnsVisibilityData:(id)arg1;
+ (id)getExcludeLableNamesFromSnsVisibilityData:(id)arg1;
+ (id)visibilityDataFromPrivacySettingData:(long long)arg1 visibleContactList:(id)arg2 visibleTagNameList:(id)arg3 invisibleContactList:(id)arg4 invisibleTagNameList:(id)arg5 interactContactList:(id)arg6 excludeContactList:(id)arg7 excludeTagNameList:(id)arg8;
+ (id)CContatcArrayTovisibilityFriendDataArray:(id)arg1;
+ (id)labelNameArrayTovisibilityLabelDataArray:(id)arg1;
+ (id)labelIdArrayTovisibilityLabelDataArray:(id)arg1;
+ (id)userNametArrayToFriendDataArray:(id)arg1;
+ (id)visibilityDataFromWCDataItem:(id)arg1;
+ (void)changeWCDataItemWithSnsVisibilityData:(id)arg1 snsVisibilityData:(id)arg2;
+ (id)changeVisibilityOpWithDataItem:(id)arg1;
+ (id)getIncludeUserNameArrayFromSnsVisibilityData:(id)arg1;
+ (id)getExcludeUserNameArrayFromSnsVisibilityData:(id)arg1;
+ (id)getInteractUserNameArrayFromSnsVisibilityData:(id)arg1;
+ (id)getIncludeLableIdsFromSnsVisibilityData:(id)arg1;
+ (id)getExcludeLableIdsFromSnsVisibilityData:(id)arg1;
@end

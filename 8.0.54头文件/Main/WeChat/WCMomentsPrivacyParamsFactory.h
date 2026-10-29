@interface WCMomentsPrivacyParamsFactory : NSObject
+ (id)timelineParamsFromPrivacy:(long long)arg1 visibleContactList:(id)arg2 visibleTagNameList:(id)arg3 invisibleContactList:(id)arg4 invisibleTagNameList:(id)arg5;
+ (id)textStateParamsFromPrivacy:(long long)arg1 visibleContactList:(id)arg2 visibleTagNameList:(id)arg3 invisibleContactList:(id)arg4 invisibleTagNameList:(id)arg5 lastPrivacy:(long long)arg6 lastTagNameList:(id)arg7 lastContactList:(id)arg8 lastSelectTitle:(id)arg9;
+ (id)newTextStateParamsFromPrivacy:(long long)arg1 isPublishFirst:(BOOL)arg2 invisibleContactList:(id)arg3 invisibleContactTagList:(id)arg4;
+ (id)finderParamsFromPrivacy:(unsigned long long)arg1 invisibleContactList:(id)arg2 invisibleTagNameList:(id)arg3 isAllContactsSelected:(BOOL)arg4;
+ (id)finderVisiblePrivacyText:(unsigned long long)arg1;
@end


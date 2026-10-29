@interface WCMomentsShareScopeUtil : NSObject
+ (BOOL)isPrivacyChangedWithNewPrivacy:(long long)arg1 newTags:(id)arg2 newContacts:(id)arg3 originalPrivacy:(long long)arg4 originalTags:(id)arg5 originalContacts:(id)arg6;
+ (void)getContactDataWithDataItem:(id)arg1 privacy:(long long *)arg2 visibleContactList:(id)arg3 visibleTagNameList:(id)arg4 invisibleContactList:(id)arg5 invisibleTagNameList:(id)arg6;
+ (void)getContactDataWithTextStateModel:(id)arg1 privacy:(long long *)arg2 visibleContactList:(id)arg3 visibleTagNameList:(id)arg4 invisibleContactList:(id)arg5 invisibleTagNameList:(id)arg6;
@end


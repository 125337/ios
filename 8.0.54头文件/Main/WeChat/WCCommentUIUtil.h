@interface WCCommentUIUtil : NSObject
+ (id)contentTextColor:(id)arg1 defaultColor:(id)arg2;
+ (id)genContentStrPrefix:(id)arg1 inDataItem:(id)arg2;
+ (id)genContentUserStr:(id)arg1 username:(id)arg2 nickname:(id)arg3 isHBComment:(BOOL)arg4 isAdvertiserUser:(BOOL)arg5 customColor:(id)arg6;
+ (id)genContentStrPrefixFB:(id)arg1 inDataItem:(id)arg2;
+ (id)genContentUserStrFB:(id)arg1 username:(id)arg2 nickname:(id)arg3 isHBComment:(BOOL)arg4 isAdvertiserUser:(BOOL)arg5 isDeleteByFeedOwner:(BOOL)arg6 customColor:(id)arg7;
+ (id)genAccessibilityLabel:(id)arg1;
+ (id)getDisplayName:(id)arg1 username:(id)arg2 nickname:(id)arg3 isAdvertiserUser:(BOOL)arg4;
+ (BOOL)isDisplayFlagInsteadOfRealContent:(id)arg1;
@end


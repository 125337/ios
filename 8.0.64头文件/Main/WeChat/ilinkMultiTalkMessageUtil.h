@interface ilinkMultiTalkMessageUtil : NSObject
+ (id)genMessageWrapForFriend:(id)arg1 contact:(id)arg2 allTalkedMembers:(id)arg3 msgType:(long long)arg4 startTalkingTime:(double)arg5 acceptTime:(double)arg6 roomID:(unsigned long long)arg7;
+ (id)genMsgJsonContentWithAllTalkedMembers:(id)arg1;
+ (id)getContactInfoFromUserName:(id)arg1;
+ (id)getUserNameFromContact:(id)arg1;
+ (id)changeToKnownNameFromUsrName:(id)arg1;
@end

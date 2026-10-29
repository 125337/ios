@interface ilinkMultiTalkMessageUtil : NSObject
+ (id)genTimeStringWithDuration:(double)arg1;
+ (id)genMessageWrapForFriend:(id)arg1 contact:(id)arg2 allTalkedMembers:(id)arg3 msgType:(long long)arg4 startTalkingTime:(double)arg5 acceptTime:(double)arg6 roomID:(unsigned long long)arg7 roomType:(int)arg8 recordSource:(int)arg9 isCaller:(BOOL)arg10;
+ (id)genMsgJsonContentWithAllTalkedMembers:(id)arg1;
+ (id)getContactInfoFromUserName:(id)arg1;
+ (id)getUserNameFromContact:(id)arg1;
+ (id)changeToKnownNameFromUsrName:(id)arg1;
@end

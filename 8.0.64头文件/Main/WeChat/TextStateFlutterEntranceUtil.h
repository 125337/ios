@interface TextStateFlutterEntranceUtil : NSObject
+ (id)getTextStateMessageNotifyViewController:(BOOL)arg1;
+ (id)getTextStateFriendSquareViewController:(long long)arg1 hasRedDot:(BOOL)arg2 sessionId:(id)arg3;
+ (id)getTextStateChatCardFlutterViewController:(id)arg1;
+ (id)createTextStateFlutterInstance:(id)arg1 arguments:(id)arg2;
+ (BOOL)isShowOnFlutterWithLocalKey:(id)arg1 exptKey:(id)arg2 defaultExptValue:(int)arg3;
+ (BOOL)isTextStateMessageFlutterEntrance;
+ (BOOL)isTextStateJumpFlutterSquarePage;
+ (BOOL)isTextStateChatCardShowOnFlutter;
+ (BOOL)canReadFromTextStateAffDB;
@end

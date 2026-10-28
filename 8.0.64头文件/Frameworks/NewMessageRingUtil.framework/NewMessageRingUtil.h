@interface NewMessageRingUtil : NSObject
+ (id)appGroupID;
+ (id)userDefaults;
+ (id)curMsgRingFileName;
+ (unsigned long long)curMsgRingType;
+ (void)setMsgRingType:(unsigned long long)arg1;
+ (id)fileNameOf:(unsigned long long)arg1;
@end

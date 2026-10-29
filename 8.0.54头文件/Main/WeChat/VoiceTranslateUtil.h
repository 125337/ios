@interface VoiceTranslateUtil : NSObject
+ (id)getVoiceIDFromMsg:(id)arg1;
- (id)getTransInfoIDFromMsg:(id)arg1;
- (id)getSessionInfoPathWithUserName:(id)arg1;
- (id)getUserTranslateRootDir;
- (id)pathForTranslateResult:(id)arg1;
- (BOOL)isLocalTransResultExist:(id)arg1;
- (id)getTranslateString:(id)arg1;
@end


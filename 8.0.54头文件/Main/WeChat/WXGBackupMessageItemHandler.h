@interface WXGBackupMessageItemHandler : NSObject
+ (id)bakChatMsgItemForMessageWrap:(id)arg1;
+ (id)messageWrapFromBakChatMsgItem:(id)arg1;
+ (id)getMediaHeadByMessageWrap:(id)arg1;
+ (void)convertStatusVideo:(id)arg1 andBakchatMsgItem:(id)arg2;
+ (id)getMediaIDByMessageWrap:(id)arg1;
+ (id)pathForMessageWrap:(id)arg1 forBakChatMediaType:(unsigned int)arg2 withMediaID:(id)arg3;
+ (id)onClearVoiceHeadData:(id)arg1;
+ (void)convertStatusVideo:(id)arg1 roamMsgItem:(id)arg2;
@end


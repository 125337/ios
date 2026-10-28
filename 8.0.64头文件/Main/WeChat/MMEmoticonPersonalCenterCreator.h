@interface MMEmoticonPersonalCenterCreator : NSObject <MMEmoticonLiteAppCreator>
- (id)getQueryStringFor:(id)arg1;
- (id)appid;
- (id)page;
- (BOOL)isLiteAppEnabledFor:(id)arg1;
- (void)onGetLiteAppViewController:(id)arg1 context:(id)arg2;
- (BOOL)isSupportEmojiPrivacySetting;
- (id)getNativeVCFor:(id)arg1;
@end

@interface MessageSourceInfoHandler_WeAppEcom : CommonMessageSourceInfoHandler
+ (BOOL)canCreateWithMsgWrap:(id)arg1;
- (id)sourceTitle;
- (id)sourceIcon:(CGSize)arg1 color:(id)arg2;
- (BOOL)canClick;
- (void)sourceInfoViewReportWithEventID:(id)arg1;
- (void)handleClickWithViewController:(id)arg1;
- (void)openJumpInfo:(id)arg1 withNavVC:(id)arg2;
- (void)reportEvent:(id)arg1;
- (long long)currentTextType;
- (id)imgSourceJson;
@end

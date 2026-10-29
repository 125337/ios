@interface BaseResponseErrMsg : WXPBGeneratedMessage
+ (void)initialize;
- (id)initWithXml:(id)arg1;
- (id)initWithXml:(id)arg1 strictMode:(BOOL)arg2;
- (id)initWithMsgBoxContent:(id)arg1;
- (id)initWithDirectlyGoUrl:(id)arg1;
- (BOOL)isShowAlert;
- (BOOL)isDirectlyGoUrl;
@end

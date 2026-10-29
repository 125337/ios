@interface BaseResponseErrMsg : WXPBGeneratedMessage
+ (void)initialize;
- (id)initWithContent:(id)arg1;
- (id)initWithXml:(id)arg1;
- (id)initWithMsgBoxContent:(id)arg1;
- (id)initWithDirectlyGoUrl:(id)arg1;
- (BOOL)isShowAlert;
- (BOOL)isDirectlyGoUrl;
@end


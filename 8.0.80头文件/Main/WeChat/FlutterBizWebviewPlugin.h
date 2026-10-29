@interface FlutterBizWebviewPlugin : NSObject <MMFlutterPlugin, BizWebviewApi>
{
    NSMutableSet * _setFastLoadTemplateType; // +0x8
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 brandUserName:(id)arg4 error:(id *)arg5;
- (void)openUrlArticleInfo:(id)arg1 error:(id *)arg2;
- (id)setFastLoadTemplateType;
- (void)setSetFastLoadTemplateType:(id)arg1;
- (void).cxx_destruct;
@end

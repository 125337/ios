@interface LiteAppJsApiNavigateToMiniProgramForFinderProductShare : LiteAppJsApiLaunchMiniProgram
{
    id /* block */ _customShareBtnActionBlock; // +0x20
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)superInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (id /* block */)getShareAction;
- (id /* block */)customShareBtnActionBlock;
- (void)setCustomShareBtnActionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end


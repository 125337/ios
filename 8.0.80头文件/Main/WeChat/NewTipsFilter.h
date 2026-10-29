@interface NewTipsFilter : NSObject
{
    NSString * _configPath; // +0x8
}
- (BOOL)validateAndDealNewTipsInfoOnReceiveXml:(id)arg1;
- (BOOL)canShowTipsWithTipsInfo:(id)arg1;
- (BOOL)needRequestLocalTipWhenLauchWithId:(int)arg1 Uid:(id)arg2;
- (id)configPath;
- (void)setConfigPath:(id)arg1;
- (void).cxx_destruct;
@end

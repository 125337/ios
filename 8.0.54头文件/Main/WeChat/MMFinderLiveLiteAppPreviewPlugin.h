@interface MMFinderLiveLiteAppPreviewPlugin : NSObject <MMFinderLiveLiteAppPreviewViewFactoryDataSource, FlutterPlugin>
{
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x8
    MMLiteAppViewController * _liteApp; // +0x10
}
+ (void)registerWithRegistrar:(id)arg1;
- (void)instanceRegisterWithRegistrar:(id)arg1;
- (id)messenger;
- (void)setMessenger:(id)arg1;
- (id)liteApp;
- (void)setLiteApp:(id)arg1;
- (void).cxx_destruct;
@end


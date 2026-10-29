@interface MMFinderLiveLiteAppPreviewViewFactory : NSObject <FlutterPlatformViewFactory>
{
    id <MMFinderLiveLiteAppPreviewViewFactoryDataSource> _dataSource; // +0x8
}
- (id)createWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3;
- (id)createArgsCodec;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
@end


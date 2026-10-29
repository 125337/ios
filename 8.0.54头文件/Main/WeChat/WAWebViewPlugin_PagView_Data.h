@interface WAWebViewPlugin_PagView_Data : NSObject
{
    BOOL _hide; // +0x8
    PAGView * _pagView; // +0x10
    NSMutableDictionary * _imageDic; // +0x18
    id /* block */ _pagCompletion; // +0x20
}
- (id)pagView;
- (void)setPagView:(id)arg1;
- (id)imageDic;
- (void)setImageDic:(id)arg1;
- (id /* block */)pagCompletion;
- (void)setPagCompletion:(id /* block */)arg1;
- (BOOL)hide;
- (void)setHide:(BOOL)arg1;
- (void).cxx_destruct;
@end


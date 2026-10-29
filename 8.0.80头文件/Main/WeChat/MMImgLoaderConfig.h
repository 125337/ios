@interface MMImgLoaderConfig : NSObject
{
    BOOL _prefersHighDynamicRange; // +0x8
    MMImgDataItem * _dataItem; // +0x10
}
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)prefersHighDynamicRange;
- (void)setPrefersHighDynamicRange:(BOOL)arg1;
- (void).cxx_destruct;
@end

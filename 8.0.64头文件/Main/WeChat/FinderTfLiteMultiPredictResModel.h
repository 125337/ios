@interface FinderTfLiteMultiPredictResModel : NSObject
{
    BOOL _useCache; // +0x8
    NSDictionary * _resDic; // +0x10
}
- (BOOL)useCache;
- (void)setUseCache:(BOOL)arg1;
- (id)resDic;
- (void)setResDic:(id)arg1;
- (void).cxx_destruct;
@end

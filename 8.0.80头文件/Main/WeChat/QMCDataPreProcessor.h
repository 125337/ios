@interface QMCDataPreProcessor : NSObject
- (void)preProcess:(id)arg1;
- (BOOL)shouldPreProcess:(id)arg1;
- (id)selectDataByType:(id)arg1 isSelected:(BOOL)arg2 commandType:(id)arg3;
@end

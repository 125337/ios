@interface MMScrollableActionSheetWithVerticalRows : MMScrollableActionSheet <MMScrollableActionSheetVerticalContainerViewDelegate>
{
    MMScrollableActionSheetVerticalContainerView * _verticalContainerView; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)setupVerticalContainerView;
- (void)setVerticalRowInfoList:(id)arg1;
- (void)addOrUpdateVerticalRowInfo:(id)arg1;
- (void)onTappedRowInfo:(id)arg1;
- (id)verticalContainerView;
- (void)setVerticalContainerView:(id)arg1;
- (void).cxx_destruct;
@end

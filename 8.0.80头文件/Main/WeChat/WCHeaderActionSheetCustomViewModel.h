@interface WCHeaderActionSheetCustomViewModel : NSObject
{
    BOOL _canTapInActionSheet; // +0x8
    UIView * _customView; // +0x10
}
- (id)customView;
- (void)setCustomView:(id)arg1;
- (BOOL)canTapInActionSheet;
- (void)setCanTapInActionSheet:(BOOL)arg1;
- (void).cxx_destruct;
@end

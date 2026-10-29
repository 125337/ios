@interface CBTFlutterHalfScreenPageSheetProxy : NSObject <MMPageSheetContentProtocol>
{
    UIView * _contentView; // +0x8
}
- (id)pageSheetContentView;
- (id)pageSheetBackgroundMaskView;
- (double)pageSheetAnimationDuration;
- (BOOL)enablePageSheetChangeAnimation;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end

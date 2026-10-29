@interface EcsLivePendingProductNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, EcsLivePendingProductNativeApi>
{
    id /* block */ _onResult; // +0x8
}
- (void)handleSelectPendingProductResultResult:(id)arg1 error:(id *)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id /* block */)onResult;
- (void)setOnResult:(id /* block */)arg1;
- (void).cxx_destruct;
@end

@interface MJAssetPickerHelper : NSObject
+ (id)handlePickerAssetsUsableDetectionForProResWithAssetInfo:(id)arg1 assetPickerState:(id)arg2;
+ (id)handlePickerAssetsUsableDetectionForP3DisplayWithPicker:(id)arg1 assetPickerState:(id)arg2;
+ (void)handlePickerAssetsUsableDetectionForDidFinishAssetsPicking:(id)arg1 completion:(id /* block */)arg2;
+ (void)_showUsableToastWithAppleProResCodecAssetInfos:(id)arg1 mmAssetInfos:(id)arg2;
+ (void)_showUsableToastWithP3DisplayColorSpaceAssetInfos:(id)arg1 mmAssetInfos:(id)arg2 completion:(id /* block */)arg3;
@end

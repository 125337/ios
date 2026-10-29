@interface WCMomentsPickerActionRecorder : NSObject <NSCopying>
{
    NSMutableArray * _selectedAssetOperationList; // +0x8
    long long _videoProducerEnabler; // +0x10
    NSMutableArray * _assetOperationList; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (void)pickerDidFinish;
- (void)pickerDidCancel;
- (void)pickerDidSelectAsset:(id)arg1 from:(long long)arg2;
- (void)pickerDidDeselectAsset:(id)arg1;
- (void)pickerDidEnableVideoProducer:(long long)arg1;
- (void)pickerDidDisableVideoProducer;
- (void)_recordAssetOperation:(id)arg1;
- (void)_updateSelectedAssetSetWithAssetOperation:(id)arg1;
- (void)_addSelectedAssetOperation:(id)arg1;
- (void)_removeSelectedAssetOperation:(id)arg1;
- (id)_ensureAssetOperationList;
- (id)_ensureSelectedAssetOperationList;
- (void)_sortSelectedAssetOperation:(id)arg1;
- (id)selectedAssetOperationList;
- (void)setSelectedAssetOperationList:(id)arg1;
- (long long)videoProducerEnabler;
- (void)setVideoProducerEnabler:(long long)arg1;
- (id)assetOperationList;
- (void)setAssetOperationList:(id)arg1;
- (void).cxx_destruct;
@end


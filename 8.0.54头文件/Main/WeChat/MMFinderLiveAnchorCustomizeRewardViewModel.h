@interface MMFinderLiveAnchorCustomizeRewardViewModel : UIView
{
    BOOL _isFansGroupDataAvailable; // +0x8
    BOOL _isAnchorCustomizeDataAvailable; // +0x9
    id <MMFinderLiveAnchorCustomizeRewardViewModelDelegate> _delegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMFinderLiveFansGroupAnchorEditViewModel * _fansGroupCustomizeRewardViewModel; // +0x20
    NSMutableArray * _anchorCustomizeRewardItemMutableArray; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (BOOL)isDataAvailable;
- (id)fansGroupCustomizeRewardItemArray;
- (id)anchorCustomizeRewardItemArray;
- (void)startFetchingCustomizeRewardData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isFansGroupDataAvailable;
- (void)setIsFansGroupDataAvailable:(BOOL)arg1;
- (BOOL)isAnchorCustomizeDataAvailable;
- (void)setIsAnchorCustomizeDataAvailable:(BOOL)arg1;
- (id)fansGroupCustomizeRewardViewModel;
- (void)setFansGroupCustomizeRewardViewModel:(id)arg1;
- (id)anchorCustomizeRewardItemMutableArray;
- (void)setAnchorCustomizeRewardItemMutableArray:(id)arg1;
- (void).cxx_destruct;
@end


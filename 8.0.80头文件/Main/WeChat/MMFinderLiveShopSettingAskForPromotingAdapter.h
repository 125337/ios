@interface MMFinderLiveShopSettingAskForPromotingAdapter : NSObject
{
    NSNumber * _valueUpdating; // +0x8
    MMFinderLiveTaskId * _taskID; // +0x10
}
- (id)initWithTaskID:(id)arg1;
- (BOOL)displayValue;
- (BOOL)value;
- (void)updateValue:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)valueUpdating;
- (void)setValueUpdating:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (void).cxx_destruct;
@end
